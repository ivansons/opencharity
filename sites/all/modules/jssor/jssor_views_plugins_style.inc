<?php

class jssor_views_plugins_style extends views_plugin_style {
  /**
   * Set default options
   */
  function options(&$options) {
    // Manually load the class files.
    self::bootstrapClasses();
    $jssor = new JssorViewsStylePlugin();
    $options = array_merge($options, self::option_definition(), $jssor->defaultOptions());

    // Fix false grouping value. If it's just the default value, set it to an actual empty array.
    if(count($options['grouping']) == 1 && isset($options['grouping']['default'])) {
      $options['grouping'] = array();
    }
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    // Manually load the class files.
    self::bootstrapClasses();
    $jssor = new \Drupal\jssor\Plugin\views\style\Jssor($this);
    $form_state_holder = new \Drupal\Core\Form\FormStateInterface($form_state);
    $jssor->buildOptionsForm($form, $form_state_holder);
    // Do some D8 backporting for form element types.
    $form['global'] = $this::fixD8FormTypes($form['global']);
    $form['bulletnavigator'] = $this::fixD8FormTypes($form['bulletnavigator']);
  }

  /**
   * Converts D8 specific form element types to a D7 generic version.
   * Currently only supports "number".
   *
   * @param array $form
   * @return mixed
   */
  private static function fixD8FormTypes($form) {
    // Need to change input field type "number" to textfield.
    foreach($form as $key => $element) {
      if(stripos($key, "#") === false) {
        if($form[$key]['#type'] == 'number') {
          $form[$key]['#type'] = 'textfield';
        }
      }
    }

    return $form;
  }

  /**
   * Includes the needed shim classes to leverage existing D8 classes.
   */
  private static function bootstrapClasses() {
    $module = 'jssor';
    module_load_include('inc', $module, 'src/shims/Attribute');
    module_load_include('inc', $module, 'src/shims/FormStateInterface');
    module_load_include('inc', $module, 'plugins/views_plugin_style_default');
    module_load_include('inc', $module, 'src/shims/ViewsStylePluginBase');
    module_load_include('php', $module, 'src/Plugin/views/style/Jssor');
    module_load_include('inc', $module, 'src/JssorViewsStylePlugin');
  }

  public function getRowClass($id) {
    return 'row-' . $id;
  }
}

