<?php
/**
 * @file
 * panopoly_session.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function panopoly_session_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_initial_info|node|session|form';
  $field_group->group_name = 'group_initial_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Initial info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_slides',
      2 => 'field_speakers',
      3 => 'field_track',
      4 => 'title',
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
  $export['group_initial_info|node|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule_info|node|schedule_item|default';
  $field_group->group_name = 'group_schedule_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schedule_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule info',
    'weight' => '1',
    'children' => array(
      0 => 'field_accepted',
      1 => 'field_session_slot',
      2 => 'field_session_room',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_schedule_info|node|schedule_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule_info|node|session|default';
  $field_group->group_name = 'group_schedule_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule info',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $export['group_schedule_info|node|session|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|schedule_item|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schedule_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_timeslot',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Schedule Info',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_schedule|node|schedule_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|session|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_panopoly_session_room',
      1 => 'field_session_timeslot',
      2 => 'field_panopoly_acceptance_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_schedule|node|session|form'] = $field_group;

  return $export;
}
