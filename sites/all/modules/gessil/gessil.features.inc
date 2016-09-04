<?php
/**
 * @file
 * gessil.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gessil_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function gessil_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gessil_node_info() {
  $items = array(
    'destaques' => array(
      'name' => t('Destaques'),
      'base' => 'node_content',
      'description' => t('Imagens destacadas na pagina inicial'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
