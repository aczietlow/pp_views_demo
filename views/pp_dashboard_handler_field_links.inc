<?php
/**
 * @file
 * Provides dashboard links for Views.
 */

class ppdashboard_handler_field_links extends views_handler_field {
  /**
   * Add some required fields needed on render().
   */
  public function construct() {
    parent::construct();
    $this->additional_fields['nid'] = [
      'table' => 'node_revision',
      'field' => 'nid',
    ];
    $this->additional_fields['vid'] = [
      'table' => 'node_revision',
      'field' => 'vid',
    ];
    $this->additional_fields['title'] = [
      'table' => 'node_revision',
      'field' => 'title',
    ];
  }

  /**
   * Loads additional fields.
   */
  public function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Renders the field handler.
   */
  public function render($values) {
    $node = node_load(
      $values->{$this->aliases['nid']},
      $values->{$this->aliases['vid']}
    );
    return theme(
      'links',
      [
        'links' => ppdashboard_get_dashboard_links($node, ['html' => TRUE]),
        'attributes' => [
         'class' => ['dashboard-links'],
       ],
      ]
    );
  }
}
