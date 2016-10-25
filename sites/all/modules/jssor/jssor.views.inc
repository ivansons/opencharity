<?php


function jssor_views_plugins() {
  $plugins = array();
  $plugins['style'] = array(
    'jssor' => array(
      'title' => t('Jssor Slider'),
      'help' => t('Display rows or entity in a Jssor Slider.'),
      'handler' => 'jssor_views_plugins_style',
      'theme' => 'jssor',
      'uses row plugin' => TRUE,
      'uses row class' => TRUE,
      'uses grouping' => FALSE,
      'uses options' => TRUE,
      'type' => 'normal',
    ),
  );

  return $plugins;
}
