<?php
/**
 * @file
 * ombuslide.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function ombuslide_field_default_fields() {
  $fields = array();

  // Exported field: 'bean-ombuslide-field_slide'
  $fields['bean-ombuslide-field_slide'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slide',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'ombuslide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Define the content for each slide in the slideshow.  Drag and drop the slides to order them within the slideshow.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'ombuslide',
          'settings' => array(),
          'type' => 'ombuslide_collection',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_slide',
      'label' => 'Slides',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slide-field_image'
  $fields['field_collection_item-field_slide-field_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'field_slide',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => 'slide',
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slide-field_link'
  $fields['field_collection_item-field_slide-field_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'field_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'A call to action link to an internal or external URL.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_link',
      'label' => 'Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slide-field_slide_text'
  $fields['field_collection_item-field_slide-field_slide_text'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slide_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Optional content text for the image.  Since there is limited space for the slideshow, it is best to keep this as short as possible.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_slide_text',
      'label' => 'Content',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '4',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slide-field_slide_title'
  $fields['field_collection_item-field_slide-field_slide_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_slide_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Optional title text for the image.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_slide_title',
      'label' => 'Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_slide-field_video'
  $fields['field_collection_item-field_slide-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'video_embed_field',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'video_embed_field',
    ),
    'field_instance' => array(
      'bundle' => 'field_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Copy the share link for the video you wish to link to (<a href="http://www.google.com/support/youtube/bin/answer.py?hl=en&answer=57741" target="_blank">Click here</a> for help).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'stand_base',
          'settings' => array(),
          'type' => 'stand_base_field_formatter_video_colorbox',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'allowed_types' => array(
          0 => 'youtube',
          1 => 'vimeo',
        ),
        'description_field' => 0,
        'playback_settings' => array(
          'Vimeo' => array(
            'autoplay' => 0,
            'color' => '00adef',
            'height' => '315',
            'teaser_height' => '315',
            'teaser_width' => '560',
            'width' => '560',
          ),
          'Youtube' => array(
            'autohide' => '2',
            'autoplay' => 0,
            'hd' => 1,
            'height' => '349',
            'rel' => 0,
            'showinfo' => 1,
            'teaser_height' => '349',
            'teaser_width' => '560',
            'theme' => 'dark',
            'width' => '560',
          ),
          'instance__settings__playback_settings__active_tab' => 'edit-instance-settings-playback-settings-vimeo',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'video_embed_field',
        'settings' => array(),
        'type' => 'video_embed_field_widget',
        'weight' => '5',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A call to action link to an internal or external URL.');
  t('Content');
  t('Copy the share link for the video you wish to link to (<a href="http://www.google.com/support/youtube/bin/answer.py?hl=en&answer=57741" target="_blank">Click here</a> for help).');
  t('Define the content for each slide in the slideshow.  Drag and drop the slides to order them within the slideshow.');
  t('Image');
  t('Link');
  t('Optional content text for the image.  Since there is limited space for the slideshow, it is best to keep this as short as possible.');
  t('Optional title text for the image.');
  t('Slides');
  t('Title');
  t('Video');

  return $fields;
}
