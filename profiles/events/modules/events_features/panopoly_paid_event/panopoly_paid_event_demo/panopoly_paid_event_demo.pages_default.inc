<?php
/**
 * @file
 * panopoly_paid_event_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panopoly_paid_event_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'paid_event_homepage_demo';
  $page->task = 'page';
  $page->admin_title = 'Paid Event Homepage Demo';
  $page->admin_description = '';
  $page->path = 'paid-event-demo';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Event Demo',
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
  $handler->name = 'page_paid_event_homepage_demo_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'paid_event_homepage_demo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Paid Event Homepage Demo',
    'no_blocks' => 0,
    'pipeline' => 'standard',
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
  $display->title = 'Paid Event Homepage Demo';
  $display->uuid = '74f1d6d0-4a97-4f19-84dd-369cba7db99f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d8a3afe0-924e-483c-a7ee-7d0856a5c94c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopo-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8a3afe0-924e-483c-a7ee-7d0856a5c94c';
    $display->content['new-d8a3afe0-924e-483c-a7ee-7d0856a5c94c'] = $pane;
    $display->panels['contentmain'][0] = 'new-d8a3afe0-924e-483c-a7ee-7d0856a5c94c';
    $pane = new stdClass();
    $pane->pid = 'new-fc7d4146-1f94-4b76-8494-6c0c97cf6aad';
    $pane->panel = 'sidebar';
    $pane->type = 'search_box';
    $pane->subtype = 'search_box';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'form' => 'simple',
      'path_type' => 'default',
      'path' => '',
      'override_prompt' => 0,
      'prompt' => '',
      'override_title' => 0,
      'override_title_text' => 'Search the Site',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fc7d4146-1f94-4b76-8494-6c0c97cf6aad';
    $display->content['new-fc7d4146-1f94-4b76-8494-6c0c97cf6aad'] = $pane;
    $display->panels['sidebar'][0] = 'new-fc7d4146-1f94-4b76-8494-6c0c97cf6aad';
    $pane = new stdClass();
    $pane->pid = 'new-c8ccc655-5bf4-4307-af2b-6e562ff2547d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopo-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c8ccc655-5bf4-4307-af2b-6e562ff2547d';
    $display->content['new-c8ccc655-5bf4-4307-af2b-6e562ff2547d'] = $pane;
    $display->panels['sidebar'][1] = 'new-c8ccc655-5bf4-4307-af2b-6e562ff2547d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d8a3afe0-924e-483c-a7ee-7d0856a5c94c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['paid_event_homepage_demo'] = $page;

  return $pages;

}
