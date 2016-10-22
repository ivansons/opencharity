<?php
/**
 * @file
 * panopoly_sponsor_paid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function panopoly_sponsor_paid_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__paid_sponsorship_product';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__paid_sponsorship_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_paid_sponsorship_product';
  $strongarm->value = array();
  $export['menu_options_paid_sponsorship_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_paid_sponsorship_product';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_paid_sponsorship_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_paid_sponsorship_product';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_paid_sponsorship_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_paid_sponsorship_product';
  $strongarm->value = '1';
  $export['node_preview_paid_sponsorship_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_paid_sponsorship_product';
  $strongarm->value = 1;
  $export['node_submitted_paid_sponsorship_product'] = $strongarm;

  return $export;
}
