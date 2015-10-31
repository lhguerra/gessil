<?php
/**
 * @file
 * context.servicos.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'servicos';
$context->description = '';
$context->tag = '';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'servicos' => 'servicos',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-home-block_1' => array(
        'module' => 'views',
        'delta' => 'home-block_1',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
