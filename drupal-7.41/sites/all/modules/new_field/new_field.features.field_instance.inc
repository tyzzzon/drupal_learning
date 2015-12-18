<?php
/**
 * @file
 * new_field.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function new_field_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-flickr_content_type-field_date_and_tags'.
  $field_instances['node-flickr_content_type-field_date_and_tags'] = array(
    'bundle' => 'flickr_content_type',
    'default_value' => array(
      0 => array(
        'flickr_pic_create_date' => NULL,
        'flickr_pic_tags' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'flickr_pics',
        'settings' => array(),
        'type' => 'flickr_pics_field',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'flickr_pics',
        'settings' => array(),
        'type' => 'flickr_pics_field',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'flickr_pics',
        'settings' => array(),
        'type' => 'flickr_pics_field',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'flickr_pics',
        'settings' => array(),
        'type' => 'flickr_pics_field',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'flickr_pics',
        'settings' => array(),
        'type' => 'flickr_pics_field',
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
    'field_name' => 'field_date_and_tags',
    'label' => 'Date and tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'flickr_pics',
      'settings' => array(),
      'type' => 'flickr_pics_field',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date and tags');

  return $field_instances;
}
