<?php
/**
 * @file
 * gsb_feature_person_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_person_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_gsb_person';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_gsb_person';
  $strongarm->value = '[node:field_last_name], [node:field_first_name]';
  $export['auto_entitylabel_pattern_node_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_gsb_person';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__gsb_person';
  $strongarm->value = array(
    'view_modes' => array(
      'clubby' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '16',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'workbench_access' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_gsb_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_gsb_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_gsb_person';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_gsb_person';
  $strongarm->value = '0';
  $export['node_preview_gsb_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_gsb_person';
  $strongarm->value = 0;
  $export['node_submitted_gsb_person'] = $strongarm;

  return $export;
}
