<?php
/**
 * @file
 * ceu_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ceu_profile_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profiles';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Field: Unit (s) */
  $handler->display->display_options['fields']['field_unit']['id'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['table'] = 'field_data_field_unit';
  $handler->display->display_options['fields']['field_unit']['field'] = 'field_unit';
  $handler->display->display_options['fields']['field_unit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_unit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_unit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_unit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_unit']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_unit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_unit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_unit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_unit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_unit']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_unit']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_unit']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_unit']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_unit']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_unit']['field_api_classes'] = 0;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_position']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_position']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_position']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_position']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_position']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_position']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile_alumni' => 'profile_alumni',
    'profile_faculty' => 'profile_faculty',
    'profile_phd' => 'profile_phd',
    'profile_research_fellow' => 'profile_research_fellow',
    'profile_staff' => 'profile_staff',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'profiles';
  $export['profiles'] = $view;

  return $export;
}
