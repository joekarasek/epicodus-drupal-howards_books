<?php
/**
 * @file
 * locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function locations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function locations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function locations_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('A location of a Howard\'s Books Store.'),
      'has_title' => '1',
      'title_label' => t('Location Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
