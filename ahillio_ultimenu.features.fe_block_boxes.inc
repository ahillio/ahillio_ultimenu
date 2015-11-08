<?php
/**
 * @file
 * ahillio_ultimenu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ahillio_ultimenu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'about block';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'about';
  $fe_block_boxes->body = '<p>Here, I\'d like to share my work with you...</p>
';

  $export['about'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'alec menu item';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'alec_hill';
  $fe_block_boxes->body = '<p><span id="alexander">Alexander Wilson Hill</span><br />
	input||output<br />
	Alec with a C</p>
';

  $export['alec_hill'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'connect block';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'connect';
  $fe_block_boxes->body = '<p>email form, hey ahillio graphic, social media links</p>
';

  $export['connect'] = $fe_block_boxes;

  return $export;
}
