<?php
/**
 * @file
 * dashboard.view.inc
 *
 *
 * Default dashboard view.
 */

$view = new view();
$view->name = 'pied_piper_dashboard';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node_revision';
$view->human_name = 'Pied Piper Dashboard';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Pied Piper Dashboard';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view revisions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'title' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  ),
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
  'bef_filter_description' => NULL,
  'any_label' => NULL,
  'filter_rewrite_values' => NULL,
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 50, 100, 150, 200';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'vid' => 'vid',
  'is_locked' => 'is_locked',
  'title' => 'title',
  'type' => 'type',
  'name' => 'name',
  'uid' => 'uid',
  'field_reviewer-revision_id' => 'field_reviewer-revision_id',
  'state' => 'state',
  'nid_1' => 'nid_1',
  'sticky' => 'sticky',
  'field_services-revision_id' => 'field_services-revision_id',
  'field_service_topics_filtered-revision_id' => 'field_service_topics_filtered-revision_id',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'vid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'is_locked' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'uid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_reviewer-revision_id' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'sticky' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_services-revision_id' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_service_topics_filtered-revision_id' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['content'] = 'Showing @start - @end of @total';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'Your search did not find any related articles, please review or refine your search filters and try again.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Workbench Moderation: Node */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Relationship: Content revision: Content */
$handler->display->display_options['relationships']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['relationships']['nid_1']['table'] = 'node_revision';
$handler->display->display_options['relationships']['nid_1']['field'] = 'nid';
$handler->display->display_options['relationships']['nid_1']['label'] = 'Get the actual content from a content revision with NID';
/* Relationship: Entity Reference: Referencing entity */
$handler->display->display_options['relationships']['reverse_field_content_notifications']['id'] = 'reverse_field_content_notifications';
$handler->display->display_options['relationships']['reverse_field_content_notifications']['table'] = 'node';
$handler->display->display_options['relationships']['reverse_field_content_notifications']['field'] = 'reverse_field_content_notifications';
$handler->display->display_options['relationships']['reverse_field_content_notifications']['relationship'] = 'nid';
$handler->display->display_options['relationships']['reverse_field_content_notifications']['label'] = 'Notifications referencing Content ';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['relationships']['uid_1']['table'] = 'node';
$handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
$handler->display->display_options['relationships']['uid_1']['relationship'] = 'nid';
/* Relationship: Content revision: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Bulk operations: Content revision */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node_revision';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::vbo_search_and_replace_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'checkbox_columns' => 0,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::workbench_moderation_set_state_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::xmlsitemap_vbo_remove_from_xmlsitemap_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content revision: Vid */
$handler->display->display_options['fields']['vid']['id'] = 'vid';
$handler->display->display_options['fields']['vid']['table'] = 'node_revision';
$handler->display->display_options['fields']['vid']['field'] = 'vid';
$handler->display->display_options['fields']['vid']['exclude'] = TRUE;
/* Field: Content Lock: Is Locked */
$handler->display->display_options['fields']['is_locked']['id'] = 'is_locked';
$handler->display->display_options['fields']['is_locked']['table'] = 'content_lock';
$handler->display->display_options['fields']['is_locked']['field'] = 'is_locked';
$handler->display->display_options['fields']['is_locked']['relationship'] = 'nid_1';
$handler->display->display_options['fields']['is_locked']['label'] = 'Locked';
$handler->display->display_options['fields']['is_locked']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['is_locked']['alter']['text'] = '<div class=\'dashboard-lock[is_locked]\'>[is_locked]</div>';
$handler->display->display_options['fields']['is_locked']['type'] = 'custom';
$handler->display->display_options['fields']['is_locked']['type_custom_true'] = 'locked';
$handler->display->display_options['fields']['is_locked']['type_custom_false'] = 'unlocked';
$handler->display->display_options['fields']['is_locked']['not'] = 0;
/* Field: Content revision: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node_revision';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/revisions/[vid]/view';
$handler->display->display_options['fields']['title']['alter']['alt'] = 'View [title] revision';
/* Field: Dashboard: Dashboard links */
$handler->display->display_options['fields']['dashboard_actions']['id'] = 'dashboard_actions';
$handler->display->display_options['fields']['dashboard_actions']['table'] = 'node_revision';
$handler->display->display_options['fields']['dashboard_actions']['field'] = 'dashboard_actions';
$handler->display->display_options['fields']['dashboard_actions']['label'] = 'Title';
/* Field: Content: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['relationship'] = 'nid';
/* Field: User: Uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'users';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['uid']['label'] = 'UID';
/* Field: User: First Name */
$handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
$handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
/* Field: User: Last Name */
$handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
$handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid_1';
$handler->display->display_options['fields']['name']['label'] = 'NetID';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[field_last_name], [field_first_name] - [name]';
/* Field: Content (historical data): Assignee */
$handler->display->display_options['fields']['field_assignee-revision_id']['id'] = 'field_assignee-revision_id';
$handler->display->display_options['fields']['field_assignee-revision_id']['table'] = 'field_revision_field_assignee';
$handler->display->display_options['fields']['field_assignee-revision_id']['field'] = 'field_assignee-revision_id';
$handler->display->display_options['fields']['field_assignee-revision_id']['settings'] = array(
  'link' => 1,
);
/* Field: Content (historical data): Reviewer */
$handler->display->display_options['fields']['field_reviewer-revision_id']['id'] = 'field_reviewer-revision_id';
$handler->display->display_options['fields']['field_reviewer-revision_id']['table'] = 'field_revision_field_reviewer';
$handler->display->display_options['fields']['field_reviewer-revision_id']['field'] = 'field_reviewer-revision_id';
$handler->display->display_options['fields']['field_reviewer-revision_id']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_reviewer-revision_id']['delta_offset'] = '0';
/* Field: Workbench Moderation: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['machine_name'] = 0;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
$handler->display->display_options['fields']['nid_1']['table'] = 'node';
$handler->display->display_options['fields']['nid_1']['field'] = 'nid';
$handler->display->display_options['fields']['nid_1']['relationship'] = 'nid';
$handler->display->display_options['fields']['nid_1']['label'] = 'ID';
/* Field: Content: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['relationship'] = 'nid';
$handler->display->display_options['fields']['sticky']['label'] = 'Attributes';
$handler->display->display_options['fields']['sticky']['type'] = 'custom';
$handler->display->display_options['fields']['sticky']['type_custom_true'] = 'sticky';
$handler->display->display_options['fields']['sticky']['type_custom_false'] = 'not-sticky';
$handler->display->display_options['fields']['sticky']['not'] = 0;
/* Field: Content (historical data): Service */
$handler->display->display_options['fields']['field_services-revision_id']['id'] = 'field_services-revision_id';
$handler->display->display_options['fields']['field_services-revision_id']['table'] = 'field_revision_field_services';
$handler->display->display_options['fields']['field_services-revision_id']['field'] = 'field_services-revision_id';
$handler->display->display_options['fields']['field_services-revision_id']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_services-revision_id']['delta_offset'] = '0';
/* Field: Content (historical data): Service Topics */
$handler->display->display_options['fields']['field_service_topics_filtered-revision_id']['id'] = 'field_service_topics_filtered-revision_id';
$handler->display->display_options['fields']['field_service_topics_filtered-revision_id']['table'] = 'field_revision_field_service_topics_filtered';
$handler->display->display_options['fields']['field_service_topics_filtered-revision_id']['field'] = 'field_service_topics_filtered-revision_id';
$handler->display->display_options['fields']['field_service_topics_filtered-revision_id']['settings'] = array(
  'link' => 1,
);
$handler->display->display_options['fields']['field_service_topics_filtered-revision_id']['delta_offset'] = '0';
/* Field: Notifications: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'eck_notifications';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_content_notifications';
$handler->display->display_options['fields']['title_1']['label'] = 'Notifications';
/* Field: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Last Modified';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
$handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'D Y-m-d';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'month_day_year';
/* Sort criterion: Notifications: Content (field_content) */
$handler->display->display_options['sorts']['field_content_target_id']['id'] = 'field_content_target_id';
$handler->display->display_options['sorts']['field_content_target_id']['table'] = 'field_data_field_content';
$handler->display->display_options['sorts']['field_content_target_id']['field'] = 'field_content_target_id';
$handler->display->display_options['sorts']['field_content_target_id']['relationship'] = 'reverse_field_content_notifications';
$handler->display->display_options['sorts']['field_content_target_id']['order'] = 'DESC';
/* Sort criterion: Content revision: Updated date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
$handler->display->display_options['sorts']['timestamp']['granularity'] = 'minute';
/* Contextual filter: Content: User posted or commented */
$handler->display->display_options['arguments']['uid_touch']['id'] = 'uid_touch';
$handler->display->display_options['arguments']['uid_touch']['table'] = 'node';
$handler->display->display_options['arguments']['uid_touch']['field'] = 'uid_touch';
$handler->display->display_options['arguments']['uid_touch']['relationship'] = 'nid_1';
$handler->display->display_options['arguments']['uid_touch']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid_touch']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid_touch']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid_touch']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid_touch']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Content (historical data): Reviewer (field_reviewer) */
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['id'] = 'field_reviewer_target_id_1';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['table'] = 'field_revision_field_reviewer';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['field'] = 'field_reviewer_target_id';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_reviewer_target_id_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'OR',
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'nid';
$handler->display->display_options['filters']['type']['value'] = array(
  'all' => 'all',
  'page' => 'page',
  'slider' => 'slider',
  'event' => 'event',
  'feed' => 'feed',
  'guide' => 'guide',
  'it_group' => 'it_group',
  'knowledge_base_article' => 'knowledge_base_article',
  'link_library' => 'link_library',
  'gallery' => 'gallery',
  'news' => 'news',
  'phishing_emails' => 'phishing_emails',
  'project' => 'project',
  'service' => 'service',
  'support_contact' => 'support_contact',
  'testimonial' => 'testimonial',
  'verified_emails' => 'verified_emails',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Workbench Moderation: Current */
$handler->display->display_options['filters']['is_current']['id'] = 'is_current';
$handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['is_current']['field'] = 'is_current';
$handler->display->display_options['filters']['is_current']['value'] = '1';
$handler->display->display_options['filters']['is_current']['group'] = 2;
/* Filter criterion: Workbench Moderation: Published */
$handler->display->display_options['filters']['published']['id'] = 'published';
$handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['published']['field'] = 'published';
$handler->display->display_options['filters']['published']['value'] = '1';
$handler->display->display_options['filters']['published']['group'] = 2;
/* Filter criterion: Content revision: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node_revision';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Dashboard: Select List Services. */
$handler->display->display_options['filters']['services_select']['id'] = 'services_select';
$handler->display->display_options['filters']['services_select']['table'] = 'field_revision_field_services';
$handler->display->display_options['filters']['services_select']['field'] = 'services_select';
$handler->display->display_options['filters']['services_select']['exposed'] = TRUE;
$handler->display->display_options['filters']['services_select']['expose']['operator_id'] = 'services_select_op';
$handler->display->display_options['filters']['services_select']['expose']['label'] = 'Services.';
$handler->display->display_options['filters']['services_select']['expose']['operator'] = 'services_select_op';
$handler->display->display_options['filters']['services_select']['expose']['identifier'] = 'services';
$handler->display->display_options['filters']['services_select']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Dashboard: Select List Service Topics. */
$handler->display->display_options['filters']['services_topic_select']['id'] = 'services_topic_select';
$handler->display->display_options['filters']['services_topic_select']['table'] = 'field_revision_field_service_topics_filtered';
$handler->display->display_options['filters']['services_topic_select']['field'] = 'services_topic_select';
$handler->display->display_options['filters']['services_topic_select']['exposed'] = TRUE;
$handler->display->display_options['filters']['services_topic_select']['expose']['operator_id'] = 'services_topic_select_op';
$handler->display->display_options['filters']['services_topic_select']['expose']['label'] = 'Service Topics';
$handler->display->display_options['filters']['services_topic_select']['expose']['operator'] = 'services_topic_select_op';
$handler->display->display_options['filters']['services_topic_select']['expose']['identifier'] = 'topics';
$handler->display->display_options['filters']['services_topic_select']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Content (historical data): Keywords (field_tags) */
$handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_revision_field_tags';
$handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
$handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Keywords';
$handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
$handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'keywords';
$handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
$handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'tags';
$handler->display->display_options['filters']['field_tags_tid']['hierarchy'] = 1;
/* Filter criterion: Content (historical data): Audience (field_audience) */
$handler->display->display_options['filters']['field_audience_tid']['id'] = 'field_audience_tid';
$handler->display->display_options['filters']['field_audience_tid']['table'] = 'field_revision_field_audience';
$handler->display->display_options['filters']['field_audience_tid']['field'] = 'field_audience_tid';
$handler->display->display_options['filters']['field_audience_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_audience_tid']['expose']['operator_id'] = 'field_audience_tid_op';
$handler->display->display_options['filters']['field_audience_tid']['expose']['label'] = 'Audience';
$handler->display->display_options['filters']['field_audience_tid']['expose']['operator'] = 'field_audience_tid_op';
$handler->display->display_options['filters']['field_audience_tid']['expose']['identifier'] = 'audience';
$handler->display->display_options['filters']['field_audience_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
$handler->display->display_options['filters']['field_audience_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_audience_tid']['vocabulary'] = 'audience';
$handler->display->display_options['filters']['field_audience_tid']['hierarchy'] = 1;
/* Filter criterion: Content (historical data): Operating System (field_operating_system) */
$handler->display->display_options['filters']['field_operating_system_tid']['id'] = 'field_operating_system_tid';
$handler->display->display_options['filters']['field_operating_system_tid']['table'] = 'field_revision_field_operating_system';
$handler->display->display_options['filters']['field_operating_system_tid']['field'] = 'field_operating_system_tid';
$handler->display->display_options['filters']['field_operating_system_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_operating_system_tid']['expose']['operator_id'] = 'field_operating_system_tid_op';
$handler->display->display_options['filters']['field_operating_system_tid']['expose']['label'] = 'Operating System';
$handler->display->display_options['filters']['field_operating_system_tid']['expose']['operator'] = 'field_operating_system_tid_op';
$handler->display->display_options['filters']['field_operating_system_tid']['expose']['identifier'] = 'operating_system';
$handler->display->display_options['filters']['field_operating_system_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
$handler->display->display_options['filters']['field_operating_system_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_operating_system_tid']['vocabulary'] = 'operating_system';
$handler->display->display_options['filters']['field_operating_system_tid']['hierarchy'] = 1;
/* Filter criterion: Dashboard: Select List Reviewers. */
$handler->display->display_options['filters']['reviewer_select']['id'] = 'reviewer_select';
$handler->display->display_options['filters']['reviewer_select']['table'] = 'field_revision_field_reviewer';
$handler->display->display_options['filters']['reviewer_select']['field'] = 'reviewer_select';
$handler->display->display_options['filters']['reviewer_select']['exposed'] = TRUE;
$handler->display->display_options['filters']['reviewer_select']['expose']['operator_id'] = 'reviewer_select_op';
$handler->display->display_options['filters']['reviewer_select']['expose']['label'] = 'Reviewers.';
$handler->display->display_options['filters']['reviewer_select']['expose']['operator'] = 'reviewer_select_op';
$handler->display->display_options['filters']['reviewer_select']['expose']['identifier'] = 'reviewer';
$handler->display->display_options['filters']['reviewer_select']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Content (historical data): Publish Date (field_publish_date) */
$handler->display->display_options['filters']['field_publish_date_value']['id'] = 'field_publish_date_value';
$handler->display->display_options['filters']['field_publish_date_value']['table'] = 'field_revision_field_publish_date';
$handler->display->display_options['filters']['field_publish_date_value']['field'] = 'field_publish_date_value';
$handler->display->display_options['filters']['field_publish_date_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_publish_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_publish_date_value']['expose']['operator_id'] = 'field_publish_date_value_op';
$handler->display->display_options['filters']['field_publish_date_value']['expose']['label'] = 'Publish Date';
$handler->display->display_options['filters']['field_publish_date_value']['expose']['operator'] = 'field_publish_date_value_op';
$handler->display->display_options['filters']['field_publish_date_value']['expose']['identifier'] = 'publish_date';
$handler->display->display_options['filters']['field_publish_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
$handler->display->display_options['filters']['field_publish_date_value']['form_type'] = 'date_popup';
/* Filter criterion: Content (historical data): Refresh Date (field_refresh_date) */
$handler->display->display_options['filters']['field_refresh_date_value']['id'] = 'field_refresh_date_value';
$handler->display->display_options['filters']['field_refresh_date_value']['table'] = 'field_revision_field_refresh_date';
$handler->display->display_options['filters']['field_refresh_date_value']['field'] = 'field_refresh_date_value';
$handler->display->display_options['filters']['field_refresh_date_value']['operator'] = 'between';
$handler->display->display_options['filters']['field_refresh_date_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_refresh_date_value']['expose']['operator_id'] = 'field_refresh_date_value_op';
$handler->display->display_options['filters']['field_refresh_date_value']['expose']['label'] = 'Refresh Date';
$handler->display->display_options['filters']['field_refresh_date_value']['expose']['operator'] = 'field_refresh_date_value_op';
$handler->display->display_options['filters']['field_refresh_date_value']['expose']['identifier'] = 'refresh_date';
$handler->display->display_options['filters']['field_refresh_date_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
$handler->display->display_options['filters']['field_refresh_date_value']['form_type'] = 'date_popup';
/* Filter criterion: Content (historical data): Minor Update (field_minor_update) */
$handler->display->display_options['filters']['field_minor_update_value']['id'] = 'field_minor_update_value';
$handler->display->display_options['filters']['field_minor_update_value']['table'] = 'field_revision_field_minor_update';
$handler->display->display_options['filters']['field_minor_update_value']['field'] = 'field_minor_update_value';
$handler->display->display_options['filters']['field_minor_update_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_minor_update_value']['expose']['operator_id'] = 'field_minor_update_value_op';
$handler->display->display_options['filters']['field_minor_update_value']['expose']['label'] = 'Minor Update';
$handler->display->display_options['filters']['field_minor_update_value']['expose']['operator'] = 'field_minor_update_value_op';
$handler->display->display_options['filters']['field_minor_update_value']['expose']['identifier'] = 'minor_update';
$handler->display->display_options['filters']['field_minor_update_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Content (historical data): Assignee (field_assignee) */
$handler->display->display_options['filters']['field_assignee_target_id']['id'] = 'field_assignee_target_id';
$handler->display->display_options['filters']['field_assignee_target_id']['table'] = 'field_revision_field_assignee';
$handler->display->display_options['filters']['field_assignee_target_id']['field'] = 'field_assignee_target_id';
$handler->display->display_options['filters']['field_assignee_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_assignee_target_id']['expose']['operator_id'] = 'field_assignee_target_id_op';
$handler->display->display_options['filters']['field_assignee_target_id']['expose']['label'] = 'Assignee';
$handler->display->display_options['filters']['field_assignee_target_id']['expose']['operator'] = 'field_assignee_target_id_op';
$handler->display->display_options['filters']['field_assignee_target_id']['expose']['identifier'] = 'assignee';
$handler->display->display_options['filters']['field_assignee_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Content: Updated/commented date */
$handler->display->display_options['filters']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['filters']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['relationship'] = 'nid_1';
$handler->display->display_options['filters']['last_updated']['exposed'] = TRUE;
$handler->display->display_options['filters']['last_updated']['expose']['operator_id'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['label'] = 'Last Updated';
$handler->display->display_options['filters']['last_updated']['expose']['operator'] = 'last_updated_op';
$handler->display->display_options['filters']['last_updated']['expose']['identifier'] = 'last_updated';
$handler->display->display_options['filters']['last_updated']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Workbench Moderation: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'Publication State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'publication_state';
$handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);
/* Filter criterion: Content: Has new content */
$handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['table'] = 'history';
$handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['relationship'] = 'nid';
$handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
$handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['timestamp']['expose']['label'] = 'New / Updated';
$handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
$handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'updated';
$handler->display->display_options['filters']['timestamp']['expose']['remember_roles'] = array(
  2 => '2',
  3 => '3',
  5 => '5',
  4 => '4',
  7 => '7',
  6 => '6',
  8 => '8',
  9 => '9',
  10 => '10',
  11 => '11',
  1 => 0,
);
/* Filter criterion: Content (historical data): Private Content (field_private_content) */
$handler->display->display_options['filters']['field_private_content_value']['id'] = 'field_private_content_value';
$handler->display->display_options['filters']['field_private_content_value']['table'] = 'field_revision_field_private_content';
$handler->display->display_options['filters']['field_private_content_value']['field'] = 'field_private_content_value';
$handler->display->display_options['filters']['field_private_content_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_private_content_value']['expose']['operator_id'] = 'field_private_content_value_op';
$handler->display->display_options['filters']['field_private_content_value']['expose']['label'] = 'Private Content (field_private_content)';
$handler->display->display_options['filters']['field_private_content_value']['expose']['operator'] = 'field_private_content_value_op';
$handler->display->display_options['filters']['field_private_content_value']['expose']['identifier'] = 'private_content';
$handler->display->display_options['filters']['field_private_content_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  5 => 0,
  4 => 0,
  7 => 0,
  6 => 0,
  8 => 0,
  9 => 0,
  10 => 0,
  11 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'pied-piper/dashboard';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Pied Piper Dashboard';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
