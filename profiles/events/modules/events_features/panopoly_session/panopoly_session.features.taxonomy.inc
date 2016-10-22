<?php
/**
 * @file
 * panopoly_session.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function panopoly_session_taxonomy_default_vocabularies() {
  return array(
    'tracks' => array(
      'name' => 'Tracks',
      'machine_name' => 'tracks',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
