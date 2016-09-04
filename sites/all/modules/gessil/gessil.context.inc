<?php
/**
 * @file
 * gessil.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gessil_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-destaques-block' => array(
          'module' => 'views',
          'delta' => 'destaques-block',
          'region' => 'content',
          'weight' => '-15',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content',
          'weight' => '-14',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content',
          'weight' => '-13',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home'] = $context;

  return $export;
}
