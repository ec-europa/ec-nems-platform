<?php
/**
 * @file
 * nems_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_core_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_team|file|audio|form';
  $field_group->group_name = 'group_editorial_team';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial Team',
    'weight' => '4',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editorial-team field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editorial_team|file|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_team|file|document|form';
  $field_group->group_name = 'group_editorial_team';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial Team',
    'weight' => '43',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editorial-team field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editorial_team|file|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_team|file|image|form';
  $field_group->group_name = 'group_editorial_team';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial Team',
    'weight' => '20',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editorial-team field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editorial_team|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_team|file|video|form';
  $field_group->group_name = 'group_editorial_team';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial Team',
    'weight' => '8',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editorial-team field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editorial_team|file|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_audio_file_category|file|audio|form';
  $field_group->group_name = 'group_nems_audio_file_category';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Category',
    'weight' => '3',
    'children' => array(
      0 => 'field_nems_file_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-audio-file-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_audio_file_category|file|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_audio_tags|file|audio|form';
  $field_group->group_name = 'group_nems_audio_tags';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'audio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '0',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-audio-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_audio_tags|file|audio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_doc_file_category|file|document|form';
  $field_group->group_name = 'group_nems_doc_file_category';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Category',
    'weight' => '10',
    'children' => array(
      0 => 'field_nems_file_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-doc-file-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_doc_file_category|file|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_doc_tags|file|document|form';
  $field_group->group_name = 'group_nems_doc_tags';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-doc-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_doc_tags|file|document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_image_file_attributes|file|image|form';
  $field_group->group_name = 'group_nems_image_file_attributes';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Attributes',
    'weight' => '10',
    'children' => array(
      0 => 'field_file_image_alt_text',
      1 => 'field_file_image_title_text',
      2 => 'field_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-image-file-attributes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_image_file_attributes|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_image_file_category|file|image|form';
  $field_group->group_name = 'group_nems_image_file_category';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Category',
    'weight' => '15',
    'children' => array(
      0 => 'field_nems_file_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-image-file-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_image_file_category|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_image_tags|file|image|form';
  $field_group->group_name = 'group_nems_image_tags';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '0',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-image-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_image_tags|file|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_video_file_category|file|video|form';
  $field_group->group_name = 'group_nems_video_file_category';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File Category',
    'weight' => '7',
    'children' => array(
      0 => 'field_nems_file_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-video-file-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_video_file_category|file|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_video_tags|file|video|form';
  $field_group->group_name = 'group_nems_video_tags';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-video-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_video_tags|file|video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Editorial Team');
  t('File Attributes');
  t('File Category');
  t('Tags');

  return $field_groups;
}
