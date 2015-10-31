<?php
/**
 * @file
 * content_type.parceiros.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'parceiros',
  'name' => 'Parceiros',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Nome',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__parceiros' => 'variable.field_bundle_settings_node__parceiros',
  'variable.node_options_parceiros' => 'variable.node_options_parceiros',
  'variable.node_preview_parceiros' => 'variable.node_preview_parceiros',
  'variable.node_submitted_parceiros' => 'variable.node_submitted_parceiros',
  'variable.comment_default_per_page_parceiros' => 'variable.comment_default_per_page_parceiros',
  'variable.comment_form_location_parceiros' => 'variable.comment_form_location_parceiros',
  'variable.comment_preview_parceiros' => 'variable.comment_preview_parceiros',
  'variable.comment_subject_field_parceiros' => 'variable.comment_subject_field_parceiros',
);

$optional = array(
  'field.node.field_logo.parceiros' => 'field.node.field_logo.parceiros',
  'permission.create_parceiros_content' => 'permission.create_parceiros_content',
  'permission.edit_own_parceiros_content' => 'permission.edit_own_parceiros_content',
  'permission.edit_any_parceiros_content' => 'permission.edit_any_parceiros_content',
  'permission.delete_own_parceiros_content' => 'permission.delete_own_parceiros_content',
  'permission.delete_any_parceiros_content' => 'permission.delete_any_parceiros_content',
);

$modules = array(
  0 => 'node',
);
