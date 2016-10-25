<?php
/**
 * Created by PhpStorm.
 * User: cravecode
 * Date: 2/14/15
 * Time: 6:06 PM
 */

namespace Drupal\Core\Template;


class Attribute {
  public $attributes;
  function __construct($attributes) {
    $this->attributes = $attributes;
  }
}
