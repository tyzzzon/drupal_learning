<?php
/**
 * @file
 * new_field.features.inc
 */

/**
 * Implements hook_node_info().
 */
function new_field_node_info() {
  $items = array(
    'flickr_content_type' => array(
      'name' => t('Flickr content type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
