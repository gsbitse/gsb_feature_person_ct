<?php
/**
 * @file
 * gsb_feature_person_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_person_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_fields|node|gsb_person|form';
  $field_group->group_name = 'group_alumni_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gsb_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni Fields',
    'weight' => '25',
    'children' => array(
      0 => 'field_alumni_temp_field_1',
      1 => 'field_alumni_temp_field_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_alumni_fields|node|gsb_person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_fields|node|gsb_person|form';
  $field_group->group_name = 'group_faculty_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gsb_person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty Fields',
    'weight' => '25',
    'children' => array(
      0 => 'field_faculty_temp_field_1',
      1 => 'field_faculty_temp_field_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_faculty_fields|node|gsb_person|form'] = $field_group;

  return $export;
}
