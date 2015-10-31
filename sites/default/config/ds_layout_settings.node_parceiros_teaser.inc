<?php
/**
 * @file
 * ds_layout_settings.node_parceiros_teaser.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|parceiros|teaser';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'parceiros';
$ds_layout->view_mode = 'teaser';
$ds_layout->layout = 'ds_1col';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_logo',
    ),
  ),
  'fields' => array(
    'field_logo' => 'ds_content',
  ),
  'classes' => array(),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
