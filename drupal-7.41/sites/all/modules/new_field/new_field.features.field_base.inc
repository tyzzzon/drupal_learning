<?php
/**
 * @file
 * new_field.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function new_field_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_date_and_tags'.
  $field_bases['field_date_and_tags'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_and_tags',
    'indexes' => array(
      'flickr_pic_id' => array(
        0 => 'flickr_pic_id',
      ),
    ),
    'locked' => 0,
    'module' => 'flickr_pics',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'flickr_pics_field',
  );

  return $field_bases;
}
