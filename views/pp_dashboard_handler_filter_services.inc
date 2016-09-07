<?php
/**
 * @file
 * Views filter handlers for node revisions.
 */

class pp_dashboard_handler_filter_services extends views_handler_filter_in_operator {

  /**
   * Get and filter the services filter select list.
   *
   * @inheritDoc
   */
  public function get_value_options() {

    // Get all used services.
    $nids = db_select('field_revision_field_services', 'service')
      ->fields('service', ['field_services_target_id'])
      ->execute()
      ->fetchCol();
    $nodes = node_load_multiple($nids);


    if (!empty($nodes)) {
      foreach ($nodes as $node) {
        $services[$node->nid] = $node->title;
      }

      // Sort by username.
      natsort($services);

      $this->value_options = $services;

      return $services;
    }
  }

  /**
   * Define the database query conditional.
   */
  public function op_simple() {
    if (empty($this->value)) {
      return;
    }
    $this->ensure_my_table();

    // We use array_values() because the checkboxes keep keys and that can cause
    // array addition problems.
    $this->query->add_where($this->options['group'], "$this->real_field", array_values($this->value), $this->operator);
  }
}
