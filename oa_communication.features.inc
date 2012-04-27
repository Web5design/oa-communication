<?php
/**
 * @file
 * oa_communication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oa_communication_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oa_communication_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function oa_objects_node_info() {
  $items = array(
    'communication' => array(
      'name' => t('Communication'),
      'base' => 'node_content',
      'description' => t('Provides a content type for communication.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}