<?php
/**
 * @file
 * wunder_background_image.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wunder_background_image_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-background_image-field_bg_image'
  $field_instances['node-background_image-field_bg_image'] = array(
    'bundle' => 'background_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'image_link' => '',
          'styles' => array(
            'breakpoint_1' => 600,
            'breakpoint_2' => '',
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '',
            'max_style' => '',
            'style_1' => 'large',
            'style_2' => '',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'cs_adaptive_image',
        'settings' => array(
          'image_link' => '',
          'styles' => array(
            'breakpoint_1' => 600,
            'breakpoint_2' => '',
            'breakpoint_3' => '',
            'breakpoint_4' => '',
            'breakpoint_5' => '',
            'fallback_style' => '',
            'max_style' => '',
            'style_1' => 'large',
            'style_2' => '',
            'style_3' => '',
            'style_4' => '',
            'style_5' => '',
          ),
        ),
        'type' => 'cs_adaptive_image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bg_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-background_image-field_css_settings'
  $field_instances['node-background_image-field_css_settings'] = array(
    'bundle' => 'background_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_css_settings',
    'label' => 'CSS settings',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-background_image-field_selector'
  $field_instances['node-background_image-field_selector'] = array(
    'bundle' => 'background_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A valid CSS class that will be used to apply the background image (e.g. l-page).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_selector',
    'label' => 'Selector',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-background_image-field_visibility'
  $field_instances['node-background_image-field_visibility'] = array(
    'bundle' => 'background_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_visibility',
    'label' => 'Visibility',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A valid CSS class that will be used to apply the background image (e.g. l-page).');
  t('CSS settings');
  t('Image');
  t('Selector');
  t('Visibility');

  return $field_instances;
}
