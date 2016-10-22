<?php
/**
 * @file
 * panopoly_sponsor_paid.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function panopoly_sponsor_paid_commerce_product_default_types() {
  $items = array(
    'paid_sponsorship' => array(
      'type' => 'paid_sponsorship',
      'name' => 'Paid Sponsorship',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_sponsor_paid_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_sponsor_paid_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function panopoly_sponsor_paid_node_info() {
  $items = array(
    'paid_sponsorship_product' => array(
      'name' => t('Paid Sponsorship product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
