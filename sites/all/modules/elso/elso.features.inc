<?php
/**
 * @file
 * elso.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function elso_flag_default_flags() {
  $flags = array();
  // Exported flag: "valami".
  $flags['valami'] = array(
    'entity_type' => 'node',
    'title' => 'valami',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'bla',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag this item',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'elso',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
