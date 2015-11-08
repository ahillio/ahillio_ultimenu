<?php
/**
 * @file
 * ahillio_ultimenu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ahillio_ultimenu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-about'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'about',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ahillio' => array(
        'region' => 'ultimenu_main_info',
        'status' => 1,
        'theme' => 'ahillio',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-alec_hill'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'alec_hill',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ahillio' => array(
        'region' => 'ultimenu_main_alec',
        'status' => 1,
        'theme' => 'ahillio',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-connect'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'connect',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'ahillio' => array(
        'region' => 'ultimenu_main_contact',
        'status' => 1,
        'theme' => 'ahillio',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
