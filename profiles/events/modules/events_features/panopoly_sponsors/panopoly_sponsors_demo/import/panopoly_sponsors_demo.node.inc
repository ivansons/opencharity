<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

class PanopolySponsorDemoNode extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import sponsor nodes.');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'panopoly_sponsors_demo') . '/import/data/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_sponsors_demo.node.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('panopoly_sponsor');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_logo', 'image');
    $this->addFieldMapping('field_logo:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_logo:source_dir')
      ->defaultValue(drupal_get_path('module', 'panopoly_sponsors_demo') . '/import/images');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('panopoly_wysiwyg_text');
    //$this->addFieldMapping('created', 'created');
    $this->addFieldMapping('field_url', 'url');
    $this->addFieldMapping('field_sponsorship_level', 'sponsorship_level');
  }

  protected function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('image', 'Image');
    $columns[2] = array('body', 'Body');
    $columns[3] = array('url', 'URL');
    $columns[4] = array('sponsorship_level', 'Level');
    return $columns;
  }

}
