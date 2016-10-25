<?php
/**
 * Created by PhpStorm.
 * User: cravecode
 * Date: 2/14/15
 * Time: 5:55 PM
 */

namespace Drupal\Core\Form;


class FormStateInterface {
  public $global;
  public $values;
  function __construct($form_state = array()) {
    $this->values = $form_state['values'];
  }

}
