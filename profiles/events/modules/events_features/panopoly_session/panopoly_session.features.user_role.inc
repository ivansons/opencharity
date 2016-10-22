<?php
/**
 * @file
 * panopoly_session.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function panopoly_session_user_default_roles() {
  $roles = array();

  // Exported role: session organizer.
  $roles['session organizer'] = array(
    'name' => 'session organizer',
    'weight' => 8,
  );

  return $roles;
}
