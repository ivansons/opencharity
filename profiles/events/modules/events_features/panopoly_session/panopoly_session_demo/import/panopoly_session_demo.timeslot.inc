<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

class PanopolySessionDemoTimeslot extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import nodes.');

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

    $import_path = drupal_get_path('module', 'panopoly_session_demo') . '/import/data/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_session_demo.timeslot.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('time_slot');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
//    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_slot_datetime', 'datestart');
    $this->addFieldMapping('field_slot_datetime:to', 'dateend');
  }

  protected function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('datestart', 'DateStart');
    $columns[2] = array('dateend', 'DateEnd');
    return $columns;
  }

}

