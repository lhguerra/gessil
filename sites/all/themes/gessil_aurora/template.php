<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function gessil_aurora_preprocess_maintenance_page(&$vars) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // gessil_aurora_preprocess_html($vars);
  // gessil_aurora_preprocess_page($vars);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'gessil_aurora';
  // Also, check $vars['db_is_active'] before doing any db queries.
}

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_modernizr_load_alter(&$load) {

}

/**
 * Implements hook_preprocess_html()
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_html(&$vars) {

}

/**
 * Override or insert variables into the page template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function gessil_aurora_preprocess_page(&$vars) {
  dsm($vars);
  $vars['page']['content']['views_home-block_1']['#weight'] = 10;
}

/**
 * Override or insert variables into the region templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_region(&$vars) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_block(&$vars) {

}
// */

/**
 * Override or insert variables into the entity template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_entity(&$vars) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_node(&$vars) {
  $node = $vars['node'];
}
// */

/**
 * Override or insert variables into the field template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_field(&$vars, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_preprocess_comment(&$vars) {
  $comment = $vars['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $vars
 *   An array of variables to pass to the theme template.
 */
function gessil_aurora_preprocess_views_view(&$vars) {

  $view = $vars['view'];

// Add title for page views
  if ($view->display_handler->plugin_name == 'page') {
    if ($vars['title'] = $view->get_title()) {
      $vars['title_prefix'] = array('#markup' => '<h2>');
      $vars['title_suffix'] = array('#markup' => '</h2>');
    }
  }
}

/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_css_alter(&$css) {

}
// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function gessil_aurora_js_alter(&$js) {

}
// */
