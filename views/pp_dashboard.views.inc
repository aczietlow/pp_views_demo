<?php
/**
 * @file
 * Views configuration.
 */

/**
 * Implements hook_views_data_alter().
 */
function pp_dashboard_views_data_alter(&$data) {
  // Define dashboard service filter handler.
  $data['field_revision_field_services']['services_select'] = [
    'title' => t('Select List Services.'),
    'group' => t('Dashboard'),
    'help' => t('Filter by services, choosing from drop down list.'),
    'real field' => 'field_services_target_id',
    'filter' => [
      'handler' => 'pp_dashboard_handler_filter_services',
    ],
  ];

  // Define dashboard service filter handler.
  $data['field_revision_field_service_topics_filtered']['services_topic_select'] = [
    'title' => t('Select List Service Topics.'),
    'group' => t('Dashboard'),
    'help' => t('Filter by service topics, choosing from drop down list.'),
    'real field' => 'field_service_topics_filtered_target_id',
    'filter' => [
      'handler' => 'pp_dashboard_handler_filter_service_topics',
    ],
  ];

  // Define dashboard reviewer filter handler.
  $data['field_revision_field_reviewer']['reviewer_select'] = [
    'title' => t('Select List Reviewers.'),
    'group' => t('Dashboard'),
    'help' => t('Filter by Reviewers, choosing from drop down list.'),
    'real field' => 'field_reviewer_target_id',
    'filter' => [
      'handler' => 'pp_dashboard_handler_filter_reviewer',
    ],
  ];

  // Define dashboard link field handler.
  $data['node_revision']['dashboard_actions'] = [
    'title' => t('Dashboard actions'),
    'group' => t('Dashboard'),
    'help' => t('Dashboard quick links for moderated content.'),
    'real field' => 'vid',
    'field' => [
      'title' => t('Dashboard links'),
      'handler' => 'pp_dashboard_handler_field_links',
      'click sortable' => FALSE,
    ],
  ];
}

