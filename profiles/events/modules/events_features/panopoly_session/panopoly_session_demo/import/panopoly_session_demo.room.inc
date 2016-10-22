<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

class PanopolySessionDemoRoom extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import rooms.');

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
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_session_demo.room.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('room');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('title', 'title');
    // TODO: description: body
    // TODO: field_room_photo
    // TODO: field_is_a_room_for_big_sessions
    $this->addFieldMapping('field_is_a_room_for_big_sessions', 'bigsession');
    $this->addFieldMapping('field_room_capacity', 'capacity');
  }

  protected function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('capacity', 'Capacity');
    $columns[2] = array('bigsession', 'BigSessionRoom');
    return $columns;
  }

}

