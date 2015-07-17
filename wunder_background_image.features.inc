<?php
/**
 * @file
 * wunder_background_image.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wunder_background_image_node_info() {
  $items = array(
    'background_image' => array(
      'name' => t('Background image'),
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
