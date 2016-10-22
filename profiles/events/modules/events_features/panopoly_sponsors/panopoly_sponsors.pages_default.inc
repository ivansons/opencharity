<?php
/**
 * @file
 * panopoly_sponsors.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_sponsors_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panopoly_sponsors';
  $page->task = 'page';
  $page->admin_title = 'Panopoly Sponsors';
  $page->admin_description = '';
  $page->path = 'sponsors';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Sponsors',
    'name' => 'main-menu',
    'weight' => '40',
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
  $handler->name = 'page_panopoly_sponsors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'panopoly_sponsors';
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
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Sponsors';
  $display->uuid = '12b5478e-d0a2-4511-a97a-5a174770ad68';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36506d58-48fd-443f-a1da-558280704710';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_sponsors-panel_pane_1';
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
    $pane->uuid = '36506d58-48fd-443f-a1da-558280704710';
    $display->content['new-36506d58-48fd-443f-a1da-558280704710'] = $pane;
    $display->panels['contentmain'][0] = 'new-36506d58-48fd-443f-a1da-558280704710';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-36506d58-48fd-443f-a1da-558280704710';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panopoly_sponsors'] = $page;

  return $pages;

}
