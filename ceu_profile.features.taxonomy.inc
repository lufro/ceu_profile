<?php
/**
 * @file
 * ceu_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ceu_profile_taxonomy_default_vocabularies() {
  return array(
    'academic_areas' => array(
      'name' => 'Academic Areas',
      'machine_name' => 'academic_areas',
      'description' => 'Select one or more central research areas.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'academic_year' => array(
      'name' => 'Academic Year',
      'machine_name' => 'academic_year',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Site wide tags.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
