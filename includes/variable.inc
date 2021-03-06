<?php

// Note that this stuff can override what was set in the installation process!

// Basic site information:
variable_set('site_footer', 'This website was developed by the <a href="http://www.ccsu.edu/imrp">Institute for Municipal and Regional Policy</a> at <a href="http://www.ccsu.edu">Central Connecticut State University</a> using <a href="http://github.com/Eronarn/Thurgood">Thurgood</a>, a custom installation profile for <a href="http://drupal.org">Drupal</a>.');
variable_set('site_mail', 'eronarn@gmail.com');
variable_set('site_name', 'Connecticut Reentry Roundtable Collaborative');
variable_set('site_offline_message', "The Connecticut Reentry Roundtable Collaborative website is currently offline for maintenance. Our apologies for the interruption.");
variable_set('site_slogan', 'Because the underserved aren\'t undeserving.');

$mission = '
<p><strong>Welcome to the online home of the Statewide Reentry Roundtable Collaborative of Connecticut.</strong><p>
<p>We\'ve come together at this site with the goal of making reentry information more accessible to everyone in our communities. The website is always improving, but you can <a href="http://ctreentry.info/place/search">view our current resource listings using the site search.</a></p>
<p>Want to add your own resources to our database? You\'ll need an account first - <a href="http://ctreentry.info/user/register">you can make one here.</a> Logged in users have access to the <a href="http://ctreentry.info/dashboard">Dashboard</a> and can post resources, events, and news related to reentry.</p>
<p>Have any questions or comments? We\'d love to hear from you, so <a href="http://ctreentry.info/contact">please get in touch with us.</a></p>
';

variable_set('site_mission', $mission);

// Core notification settings.
variable_set('update_check_frequency', "1");
variable_set('update_notification_threshold', "all");
variable_set('update_notify_emails', array(0 => "eronarn@gmail.com"));

// Core node settings.
// Don't have anything here yet.
// variable_set('site_frontpage', 'home');
variable_set('default_nodes_main', "5");
variable_set('node_preview', "0");
variable_set('teaser_length', "200");

// Filter settings.
variable_set('allowed_html_1', "<a> <i> <em> <b> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>");
variable_set('filter_html_1', "1");
variable_set('filter_html_help_1', 1);
variable_set('filter_html_nofollow_1', 0);
variable_set('filter_url_length_1', "72");
variable_set('format', "1");

// Having the Search region active breaks OL Geocoder,
// so we disable it here. (Also do other theme settings.)

variable_set('theme_settings', array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_article' => 0,
    'toggle_node_info_event' => 0,
    'toggle_node_info_place' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
));

// Messaging settings.
variable_set('messaging_default_filter', '3');
variable_set('messaging_default_method', 'mail');
variable_set('messaging_log', '9676800');
variable_set('messaging_process_limit', unserialize('a:3:{s:7:"message";s:1:"0";s:4:"time";s:1:"0";s:7:"percent";s:1:"0";}'));
variable_set('messaging_returnpath_mail', '[site-mail]');
variable_set('messaging_sender_mail', '[mail]');
variable_set('messaging_sender_name', '[user]');

// Notifications settings.
variable_set('notifications_content_per_type', '0');
variable_set('notifications_content_type', unserialize('a:5:{s:8:"taxonomy";s:8:"taxonomy";s:6:"thread";s:6:"thread";s:8:"nodetype";s:8:"nodetype";s:6:"author";i:0;s:10:"typeauthor";i:0;}'));
variable_set('notifications_default_send_interval', 86400);
variable_set('notifications_digest_methods', unserialize('a:3:{i:0;s:0:"";i:86400;s:4:"long";i:604800;s:4:"long";}'));
variable_set('notifications_log', "9676800");
variable_set('notifications_process_limit', unserialize('a:4:{s:3:"row";s:1:"0";s:7:"message";s:1:"0";s:4:"time";s:1:"0";s:7:"percent";s:1:"0";}'));
variable_set('notifications_process_on_cron', 1);
variable_set('notifications_sender', "0");
variable_set('notifications_sendself', 0);
variable_set('notifications_send_immediate', 1);
variable_set('notifications_send_intervals', unserialize('a:3:{i:0;s:36:"Separate email for each notification";i:86400;s:18:"Daily email digest";i:604800;s:19:"Weekly email digest";}'));
variable_set('notifications_tags_showsubscribed', 0);
variable_set('notifications_tags_vocabularies', unserialize('a:4:{i:3;i:3;i:2;i:2;i:4;i:4;i:1;i:1;}'));
variable_set('notifications_ui_account_options', unserialize('a:2:{s:5:"links";s:5:"links";s:5:"block";s:5:"block";}'));
variable_set('notifications_ui_node', unserialize('a:6:{s:5:"links";s:5:"links";s:4:"form";i:0;s:7:"comment";i:0;s:11:"teaserlinks";i:0;s:7:"subform";i:0;s:5:"block";i:0;}'));
variable_set('notifications_ui_per_type', "0");
variable_set('notifications_ui_types', unserialize('a:5:{s:6:"thread";s:6:"thread";s:8:"taxonomy";i:0;s:8:"nodetype";i:0;s:6:"author";i:0;s:10:"typeauthor";i:0;}'));
variable_set('notifications_ui_user', unserialize('a:2:{s:4:"page";s:4:"page";s:6:"create";s:6:"create";}'));

// OpenLayers settings.
// Default preset is the same one used on the node editing page.
variable_set('openlayers_default_preset', 'thurgood_form');

// Google Maps API key. Obviously, this depends on your domain!
variable_set('openlayers_layers_google_api', 'ABQIAAAAYxy6rrenR0GtIuGHI9I35BS31JS7lLTyVkZkrmJvmWOn6proUxQh9Z_wcnDGfs4-wuC02ZFkd997uQ');

// Google Analytics settings. Again, this is tied to domain!
variable_set('googleanalytics_account', "UA-15311544-3");
variable_set('googleanalytics_cache', 0);
variable_set('googleanalytics_codesnippet_after', "0");
variable_set('googleanalytics_codesnippet_before', "0");
variable_set('googleanalytics_custom', "0");

variable_set('googleanalytics_custom_var',
// Just uses the default settings, so leaving it unserialized rather than expanding it to an array.
unserialize('a:1:{s:5:"slots";a:5:{
i:1;a:4:{s:4:"slot";i:1;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:2;a:4:{s:4:"slot";i:2;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:3;a:4:{s:4:"slot";i:3;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:4;a:4:{s:4:"slot";i:4;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:5;a:4:{s:4:"slot";i:5;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
}}')
);

variable_set('googleanalytics_pages',"
admin

admin/*

user/*/*

node/add*

node/*/*
");

variable_set('googleanalytics_roles', array(
1 => 0,
2 => 0,
3 => 0,
4 => 0,
5 => 0,
6 => 0,
7 => 0,
8 => 0,
9 => 0,
10 => 0,
11 => 0
));

variable_set('googleanalytics_site_search', 1);
variable_set('googleanalytics_trackadsense', 0);
variable_set('googleanalytics_tracker_anonymizeip', 0);
variable_set('googleanalytics_trackfiles', 1);
variable_set('googleanalytics_trackfiles_extensions', "7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip");
variable_set('googleanalytics_trackmailto', 1);
variable_set('googleanalytics_trackoutboundaspageview', 0);
variable_set('googleanalytics_trackoutgoing', 1);
variable_set('googleanalytics_visibility', "0");
variable_set('googleanalytics_visibility_roles', "0");

// Location of local OpenLayers.js file. Not currently used.
// variable_set(' ', 'http://ctreentry.info/OpenLayers.js');

// Performance settings
variable_set('preprocess_css', "1");

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
variable_set('search_cron_limit', 200);

// Faceted Search environment settings.
$fs_env_settings = array(
    'title' => 'Place Search',
    'ignore_status' => 1,
    'types' => array
        (
            'place' => 'place',
            'article' => 0,
            'event' => 0
        ),
    'base_path' => 'place/search',
    'start_page' => 'place/search/results',
    'results_style' => 'faceted_search_views:thurgood_search_map',
    'results_style_selective_extracts' => 0,
    'current_block' => 1,
    'keyword_block' => 1,
    'keyword_mode' => 'refine',
    'keyword_field_selector' => 0,
    'guided_block' => 1,
    'sort_block' => 0,
    'tooltips' => 1,
    'related_block' => 1,
    'related_style' => 'list_grouped'
);

  $env = new faceted_search();
  $env->name = 'thurgood_search_environment';
  $env->description = 'Thurgood: Search Environment';

  foreach ($fs_env_settings as $key => $value) {
      $env->settings[$key] = $value;
  }

  // Save to database, obtaining a new env_id if not updating an existing
  // environment.
  drupal_write_record('faceted_search_env', $env, NULL);

  // Faceted Search filters settings.

  $fs_filters_query = "
  INSERT INTO `faceted_search_filters` (`env_id`, `filter_key`, `filter_id`, `status`, `weight`, `sort`, `max_categories`) VALUES
(1, 'node', 'keyword', 1, -999, '', 0),
(1, 'taxonomy', '1', 1, 4, 'term', 0),
(1, 'taxonomy', '2', 1, 1, 'term', 0),
(1, 'taxonomy', '3', 1, 3, 'term', 0),
(1, 'taxonomy', '4', 1, 2, 'term', 0)
  ";

  db_query($fs_filters_query);

  // Admin settings
  variable_set('admin_toolbar', array(
    'layout' => "horizontal",
    'position' => "sw",
    'behavior' => "df",
    'blocks' => array
        (
            'context_ui-editor' => -1,
            'context_ui-devel' => -1,
            'admin-create' => -1,
            'admin-theme' => 1,
            'admin-account' => -1,
            'admin-menu' => 1,
            'admin-devel' => -1
        )

  ));

// Hierarchical Select settings.

$taxonomy_populations =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_populations',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Population',
                ),

        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => ''
                ),

            'allowed_levels' => Array
                (
                    '0' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_region =
array 
(
    'config_id' => 'content-taxonomy-field_taxonomy_region',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'City',
                    '1' => 'Neighborhood',
                ),
        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_services =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_services',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Category',
                    '1' => 'Subcategory',
                ),

        ),
    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),
);

variable_set('hs_config_content-taxonomy-field_taxonomy_populations', $taxonomy_populations);
variable_set('hs_config_content-taxonomy-field_taxonomy_region', $taxonomy_region);
variable_set('hs_config_content-taxonomy-field_taxonomy_services', $taxonomy_services);

// Admin Menu settings
variable_set('admin_menu_margin_top', 1);
variable_set('admin_menu_position_fixed', 1);
variable_set('admin_menu_tweak_modules', 1);
variable_set('admin_menu_tweak_tabs', 0);

// Vertical Tabs settings
variable_set('vertical_tabs_default', 1);
variable_set('vertical_tabs_minimum', 1);
variable_set('vertical_tabs_node_type_settings', 0);

// Quicktabs settings
variable_set('quicktabs_tabstyle', "Sky");

// Pathauto settings
variable_set('pathauto_node_pattern', '[type]/[title-raw]');
variable_set('pathauto_reduce_ascii', 1);
variable_set('pathauto_update_action', "1");
variable_set('pathauto_max_bulk_update', "100");

// Contact form settings.
variable_set('contact_default_status', 0);
variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback about site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 1),
    array("cid" => 2, "category" => "Help with using the site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 3, "category" => "Wrong information on site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 4, "category" => "Request for further information", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>
