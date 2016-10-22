<?php
/**
 * @file
 * panopoly_session.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function panopoly_session_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_sessions:program/sessions
  $menu_links['main-menu_sessions:program/sessions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'program/sessions',
    'router_path' => 'program/sessions',
    'link_title' => 'Sessions',
    'options' => array(
      'identifier' => 'main-menu_sessions:program/sessions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sessions');


  return $menu_links;
}
