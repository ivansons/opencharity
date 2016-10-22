<?php
/**
 * @file
 * panopoly_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function panopoly_sponsors_node_info() {
  $items = array(
    'panopoly_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('A Sponsor is a person or organization who sponsors your site or event'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
