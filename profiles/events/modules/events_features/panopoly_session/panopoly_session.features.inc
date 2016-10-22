<?php
/**
 * @file
 * panopoly_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_session_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function panopoly_session_flag_default_flags() {
  $flags = array();
  // Exported flag: "Attending events".
  $flags['attending_events'] = array(
    'entity_type' => 'node',
    'title' => 'Attending events',
    'global' => 0,
    'types' => array(
      0 => 'schedule_item',
      1 => 'session',
    ),
    'flag_short' => 'Attend',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Cancel attending',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'featured' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'panopoly_session',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Session Confirm".
  $flags['session_confirm'] = array(
    'entity_type' => 'node',
    'title' => 'Session Confirm',
    'global' => 0,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'I confirm that I can present this sesssion at the listed date and time.',
    'flag_long' => 'Once confirmed, you cannot unconfirm without contacting the session organizers.',
    'flag_message' => '',
    'unflag_short' => 'Cancel confirmation',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => 'Once confirmed, you cannot unconfirm without contacting the session organizers.',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'featured' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => 'own',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => 'Once confirmed, you cannot unconfirm without contacting the session organizers.',
    'unflag_confirmation' => '',
    'module' => 'panopoly_session',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function panopoly_session_node_info() {
  $items = array(
    'room' => array(
      'name' => t('Room'),
      'base' => 'node_content',
      'description' => t('Rooms provide a location for each session.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('What type of space is this? How is the seating arranged? Are there any other information to be shared?'),
    ),
    'schedule_item' => array(
      'name' => t('Schedule Item'),
      'base' => 'node_content',
      'description' => t('Use schedule items for content you wish to have in the schedule but not be part of any session submission workflows. Examples include scheduling lunch or breaks.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Use this content type to propose sessions at the event. Users can vote on proposed sessions and add sessions to their individual session agendas.'),
      'has_title' => '1',
      'title_label' => t('Session Title'),
      'help' => '',
    ),
    'time_slot' => array(
      'name' => t('Time slot'),
      'base' => 'node_content',
      'description' => t('Use time slots to define when sessions will occur.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
