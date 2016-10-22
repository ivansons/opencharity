<?php
/**
 * @file
 * panopoly_paid_event.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function panopoly_paid_event_commerce_product_default_types() {
  $items = array(
    'panopoly_paid_event' => array(
      'type' => 'panopoly_paid_event',
      'name' => 'Paid Event',
      'description' => 'A paid event product',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_paid_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_registration_type().
 */
function panopoly_paid_event_default_registration_type() {
  $items = array();
  $items['paid_event'] = entity_import('registration_type', '{
    "name" : "paid_event",
    "label" : "Paid Event",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
