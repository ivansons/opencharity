<?php
/**
 * @file
 * panopoly_paid_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function panopoly_paid_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_name|registration|paid_event|form';
  $field_group->group_name = 'group_registration_name';
  $field_group->entity_type = 'registration';
  $field_group->bundle = 'paid_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_register_first_name',
      1 => 'field_register_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_name|registration|paid_event|form'] = $field_group;

  return $export;
}
