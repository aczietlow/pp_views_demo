<?php
/**
 * @file
 * Views filter handlers for node revisions.
 */

class ppdashboard_handler_filter_reviewer extends views_handler_filter_in_operator {

  /**
   * Get and filter the services filter select list.
   *
   * @inheritDoc
   */
  public function get_value_options() {

    // Get all used reviewers.
    $uids = db_select('field_revision_field_reviewer', 'reviewer')
      ->fields('reviewer', ['field_reviewer_target_id'])
      ->execute()
      ->fetchCol();
    $users = user_load_multiple($uids);


    if (!empty($users)) {
      foreach ($users as $user) {
        $reviewers[$user->uid] = $user->name;
      }

      // Sort by username.
      natsort($reviewers);

      $this->value_options = $reviewers;

      return $reviewers;
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
