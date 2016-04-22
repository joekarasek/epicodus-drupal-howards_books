<?php
/**
 * @file
 * contact_config.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_config_contact_categories_defaults() {
  return array(
    'Product Information' => array(
      'category' => 'Product Information',
      'recipients' => 'joseph.karasek@gmail.com',
      'reply' => 'Thank you for your inquiry. This reply was auto-generated to let you know that your inquiry has been received. We will get back to you as soon as possible.

Thanks,
Howard\'s Books',
      'weight' => 0,
      'selected' => 1,
    ),
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'joseph.karasek@gmail.com',
      'reply' => 'Thank you for the website feedback. This reply was auto-generated to let you know that your feedback has been received. We will get back to you as soon as possible.

Thanks,
Howard\'s Books',
      'weight' => 1,
      'selected' => 0,
    ),
  );
}
