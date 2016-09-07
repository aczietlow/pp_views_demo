<?php
/**
 * @file
 * Views filter handlers for node revisions.
 */

class pp_dashboard_handler_filter_service_topics extends views_handler_filter_in_operator {

  /**
   * Get and filter the services filter select list.
   *
   * @inheritDoc
   */
  public function get_value_options() {

    // Get all used service topics.
    $tids = db_select('field_revision_field_service_topics_filtered', 'topic')
      ->fields('topic', ['field_service_topics_filtered_target_id'])
      ->execute()
      ->fetchCol();
    $taxonmies = taxonomy_term_load_multiple($tids, array('vid' => 6));


    if (!empty($taxonmies)) {
      foreach ($taxonmies as $taxonmy) {
        $topics[$taxonmy->tid] = $taxonmy->name;
      }

      // Sort by username.
      natsort($topics);

      $this->value_options = $topics;

      return $topics;
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
