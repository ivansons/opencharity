<?php
/**
 * @file
 * panopoly_paid_event.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function panopoly_paid_event_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'panopoly_event',
    'dependent' => 'field_registration',
    'dependee' => 'field_paid_event',
    'options' => array(
      'state' => 'visible',
      'condition' => '!checked',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'panopoly_event',
    'dependent' => 'field_product_event',
    'dependee' => 'field_paid_event',
    'options' => array(
      'state' => 'visible',
      'condition' => 'checked',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        4 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
        4 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value' => array(),
      'values' => array(),
      'value_form' => array(),
    ),
  );

  return $items;
}
