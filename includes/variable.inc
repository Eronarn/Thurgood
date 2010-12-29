<?php

// Basic site information

variable_set('site_footer', 'Developed by the Institute for Municipal and Regional Policy at Central Connecticut State University.');
variable_set('site_frontpage', 'home');
variable_set('site_mail', 'eronarn@gmail.com');
variable_set('site_mission', 'Welcome to the test page of the Connecticut Reentry Collaborative.');
variable_set('site_name', 'Connecticut Reentry Collaborative');
variable_set('site_offline_message', 'The Connecticut Reentry Collaborative test page is currently offline.');
variable_set('site_slogan', 'If we had a slogan it would go here.');

// Date settings
variable_set('date_db_tz_support', 0);
variable_set('date_default_timezone', -14400);
variable_set('date_default_timezone_name', "America/New_York");
variable_set('date_first_day', 0);
variable_set('date_format_long', "l, F j, Y - H:i");
variable_set('date_format_medium', "D, Y-m-d H:i");
variable_set('date_format_short', "Y-m-d H:i");

// Image settings.
variable_set('imageapi_image_toolkit', "imageapi_gd");
variable_set('image_toolkit', "gd");

// Search settings.
variable_set('search_cron_limit', "100");

// Input filter settings
variable_set('filter_default_format', '2');

// Vertical Tabs settings
variable_set('vertical_tabs_default', 1);
variable_set('vertical_tabs_minimum', '1');
variable_set('vertical_tabs_node_type_settings', 1);

// Pathauto settings
// Default:
variable_set('pathauto_node_pattern', '[title-raw]');

// Contact form settings.
variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_default_status', 1);
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback about site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 1),
    array("cid" => 2, "category" => "Help with using the site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
    array("cid" => 3, "category" => "Wrong information on site", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
    array("cid" => 4, "category" => "Request for further information", "recipients" => "eronarn@gmail.com", "reply" = '', "weight" = 0, "selected" = 0),
);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>