<?php
/**
 * @file
 * new_field.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function new_field_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_flickr-config:flickr_config_page.
  $menu_links['navigation_flickr-config:flickr_config_page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'flickr_config_page',
    'router_path' => 'flickr_config_page',
    'link_title' => 'Flickr config',
    'options' => array(
      'identifier' => 'navigation_flickr-config:flickr_config_page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_flickr-content-type:node/add/flickr-content-type.
  $menu_links['navigation_flickr-content-type:node/add/flickr-content-type'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/flickr-content-type',
    'router_path' => 'node/add/flickr-content-type',
    'link_title' => 'Flickr content type',
    'options' => array(
      'identifier' => 'navigation_flickr-content-type:node/add/flickr-content-type',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Flickr config');
  t('Flickr content type');

  return $menu_links;
}
