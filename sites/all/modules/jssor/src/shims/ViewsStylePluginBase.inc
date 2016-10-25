<?php
namespace Drupal\views\Plugin\views\style;

use Drupal\Core\Form\FormStateInterface;

class StylePluginBase {
  public $options = array();

  function __construct($style_plugin = null) {
    if($style_plugin) {
      $this->options = $style_plugin->options;
    }
  }

  protected function defineOptions() {

  }

  function options_form(&$form, &$form_state) {
  }

  function buildOptionsForm(&$form, FormStateInterface $form_state) {
    //$this->options['global'] = $form_state->values;
  }

  /**
   * Wrapper function for Drupal's t() function.
   *
   * @param $string
   * @param array $args
   * @param array $options
   * @return null|string
   */
  function t($string, $args = array(), $options = array()) {
    return t($string, $args, $options);
  }
}

