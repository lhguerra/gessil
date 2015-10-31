<?php
/**
 * @file
 * permission.edit_any_parceiros_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any parceiros content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.parceiros' => 'content_type.parceiros',
);

$optional = array();

$modules = array(
  0 => 'node',
);
