<?php
/**
 * @file
 * ahillio_ultimenu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ahillio_ultimenu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ultimenu_settings';
  $strongarm->value = array(
    'blocks' => array(
      'main-menu' => 'main-menu',
    ),
    'regions' => array(
      'ultimenu_main_alec' => 'ultimenu_main_alec',
      'ultimenu_main_contact' => 'ultimenu_main_contact',
      'ultimenu_main_info' => 'ultimenu_main_info',
    ),
    'goodies' => array(),
    'skins' => '',
    'main_menu' => 'ultimenu-vtl:module|ultimenu-basic.css',
  );
  $export['ultimenu_settings'] = $strongarm;

  return $export;
}
