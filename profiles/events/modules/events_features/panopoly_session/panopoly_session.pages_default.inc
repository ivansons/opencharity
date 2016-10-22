<?php
/**
 * @file
 * panopoly_session.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_session_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_session_agenda';
  $page->task = 'page';
  $page->admin_title = 'Panopoly Session Agenda';
  $page->admin_description = '';
  $page->path = 'agenda';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Agenda',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panopoly_session_agenda_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_session_agenda';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Agenda';
  $display->uuid = 'bc9ada8a-3a87-4259-b8ad-c77eacdc0aae';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5b0a24ba-5a60-4a64-8dae-55fbc845899a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_sessions_agenda-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b0a24ba-5a60-4a64-8dae-55fbc845899a';
    $display->content['new-5b0a24ba-5a60-4a64-8dae-55fbc845899a'] = $pane;
    $display->panels['contentmain'][0] = 'new-5b0a24ba-5a60-4a64-8dae-55fbc845899a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_session_agenda'] = $page;

  return $pages;

}
