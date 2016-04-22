<?php
/**
 * @file
 * book_review.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function book_review_user_default_roles() {
  $roles = array();

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => 2,
  );

  return $roles;
}
