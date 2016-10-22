<?php

/**
 * @file
 * Migrations for Basic Nodes.
 */

class EventUserDemo extends Migration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments = array());
    $this->description = t('Import users.');

    // Create a map object for tracking the relationships between source rows.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'user' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationUser::getKeySchema()
    );

    $import_path = drupal_get_path('module', 'event_user_demo') . '/import/data/';

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV($import_path . 'event_user_demo.user.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationUser();

    $this->addFieldMapping('name', 'username');
    $this->addFieldMapping('roles')
         ->defaultValue(DRUPAL_AUTHENTICATED_RID);

    $this->addFieldMapping('field_event_first_name', 'firstname');
    $this->addFieldMapping('field_event_last_name', 'lastname');
    $this->addFieldMapping('field_event_co_org', 'company');
    $this->addFieldMapping('field_event_job_title', 'jobtitle');

  }

  protected function csvcolumns() {
    $columns[0] = array('username', 'Username');
    $columns[1] = array('firstname', 'FirstName');
    $columns[2] = array('lastname', 'LastName');
    $columns[3] = array('company', 'Company');
    $columns[4] = array('jobtitle', 'JobTitle');

    return $columns;
  }

}
