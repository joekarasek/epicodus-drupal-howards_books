<?php
/**
 * @file
 * locations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function locations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-location-field_location'.
  $field_instances['node-location-field_location'] = array(
    'bundle' => 'location',
    'default_value' => array(
      0 => array(
        'lat' => 45,
        'lng' => -122,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geolocation_googlemaps',
        'settings' => array(
          'map_height' => '300px',
          'map_imageformat' => 'png8',
          'map_maptype' => 'roadmap',
          'map_scrollwheel' => 0,
          'map_width' => '300px',
          'map_zoomlevel' => 13,
          'marker_icon' => '',
        ),
        'type' => 'geolocation_googlemaps_dynamic',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'geolocation',
      'settings' => array(),
      'type' => 'geolocation_text',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Location');

  return $field_instances;
}
