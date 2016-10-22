<?php

/**
 * @file
 *  Migrations for commerce_kickstart_product.
 */

class PanopolyPaidEventDemoProduct extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import bags cases from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'bags_cases')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'commerce_kickstart_product') . '/import/bags_cases.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'bags_cases');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');

    // Size
    $this->addFieldMapping('field_bag_size', 'size');
    $this->addFieldMapping('field_bag_size:create_term')
      ->defaultValue(TRUE);

    // Images
    $this->addFieldMapping('field_images', 'product_images');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'commerce_kickstart_product') . '/import/images');

    // Color
    $this->addFieldMapping('field_color', 'color');
    $this->addFieldMapping('field_color:additional_field', 'hexadecimal');
    $this->addFieldMapping('field_color:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('color', 'Color');
    $columns[3] = array('size', 'Size');
    $columns[4] = array('price', 'Price');
    $columns[5] = array('images', 'Images');
    $columns[6] = array('hexadecimal', 'Hexadecimal');
    return $columns;
  }

  function fields() {
    return array(
      'product_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class CommerceKickstartShoes extends CommerceKickstartMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import shoes from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'commerce_kickstart_product') . '/import/shoes.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'shoes');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');

    // Images
    $this->addFieldMapping('field_images', 'product_images');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'commerce_kickstart_product') . '/import/images');

    // Size
    $this->addFieldMapping('field_shoe_size', 'size');
    $this->addFieldMapping('field_shoe_size:create_term')
      ->defaultValue(TRUE);

    // Color
    $this->addFieldMapping('field_color', 'color');
    $this->addFieldMapping('field_color:additional_field', 'hexadecimal');
    $this->addFieldMapping('field_color:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    // "Title","SKU","Color","Size","Price","Images"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('color', 'Color');
    $columns[3] = array('size', 'Size');
    $columns[4] = array('price', 'Price');
    $columns[5] = array('images', 'Images');
    $columns[6] = array('hexadecimal', 'Hexadecimal');
    return $columns;
  }

  function fields() {
    return array(
      'product_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class CommerceKickstartStorage extends CommerceKickstartMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import storage from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'commerce_kickstart_product') . '/import/storage_devices.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'storage_devices');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');

    // Images
    $this->addFieldMapping('field_images', 'product_images');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'commerce_kickstart_product') . '/import/images');

    // Capacity ("size")
    $this->addFieldMapping('field_storage_capacity', 'capacity');
    $this->addFieldMapping('field_storage_capacity:weight', 'weight');
    $this->addFieldMapping('field_storage_capacity:create_term')
      ->defaultValue(TRUE);

    // Color
    $this->addFieldMapping('field_color', 'color');
    $this->addFieldMapping('field_color:additional_field', 'hexadecimal');
    $this->addFieldMapping('field_color:create_term')
      ->defaultValue(TRUE);

    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    // "Title","SKU","Color","Capacity","Price","Images"
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('color', 'Color');
    $columns[3] = array('capacity', 'Capacity');
    $columns[4] = array('price', 'Price');
    $columns[5] = array('images', 'Images');
    $columns[6] = array('hexadecimal', 'Hexadecimal');
    $columns[7] = array('weight', 'Weight');
    return $columns;
  }

  function fields() {
    return array(
      'product_images' => 'An array of images, populated during prepareRow().',
    );
  }

  function prepareRow($row) {
    $row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

  function csvcolumns() {
    // "Name", "Images"
    $columns[0] = array('name', 'Name');
    $columns[1] = array('images', 'Images');
    return $columns;
  }
}
