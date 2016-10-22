<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

class PanopolySessionDemoSession extends Migration {

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
    $this->source = new MigrateSourceCSV($import_path . 'panopoly_session_demo.session.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('session');

    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('panopoly_wysiwyg_text');
    // TODO: field_track
    // TODO: field_slides
    $this->addFieldMapping('field_panopoly_acceptance_status', 'acceptance');
    $this->addFieldMapping('field_panopoly_session_room', 'room')->sourceMigration('PanopolySessionDemoRoom');
    $this->addFieldMapping('field_session_timeslot', 'timeslot')->sourceMigration('PanopolySessionDemoTimeslot');
//    $this->addFieldMapping('field_speakers','speakers')->sourceMigration('EventUserDemo');
  }

  protected function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('body', 'Description');
    $columns[2] = array('acceptance', 'Acceptance');
    $columns[3] = array('room', 'Room');
    $columns[4] = array('timeslot', 'Timeslot');
  //  $columns[5] = array('speakers', 'Speakers');
    return $columns;
  }

}

