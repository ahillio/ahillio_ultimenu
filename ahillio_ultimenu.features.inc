<?php
/**
 * @file
 * ahillio_ultimenu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ahillio_ultimenu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
