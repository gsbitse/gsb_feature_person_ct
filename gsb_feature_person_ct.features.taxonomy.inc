<?php
/**
 * @file
 * gsb_feature_person_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_person_ct_taxonomy_default_vocabularies() {
  return array(
    'program' => array(
      'name' => 'Program',
      'machine_name' => 'program',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
