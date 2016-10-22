<?php
/**
 * @file
 * panopoly_session.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function panopoly_session_default_rules_configuration() {
  $items = array();
  $items['rules_approve_session'] = entity_import('rules_config', '{ "rules_approve_session" : {
      "LABEL" : "Approve Session",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "session" : { "label" : "Session", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "session" ],
            "type" : { "value" : { "session" : "session" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "session:field-panopoly-acceptance-status" ],
            "value" : "Accepted"
          }
        },
        { "node_publish" : { "node" : [ "session" ] } }
      ]
    }
  }');
  $items['rules_deny_session'] = entity_import('rules_config', '{ "rules_deny_session" : {
      "LABEL" : "Deny Session",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "session" : { "label" : "Session", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "session" ],
            "type" : { "value" : { "session" : "session" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "session:field-panopoly-acceptance-status" ],
            "value" : "Denied"
          }
        }
      ]
    }
  }');
  $items['rules_move_back_to_unprocessed'] = entity_import('rules_config', '{ "rules_move_back_to_unprocessed" : {
      "LABEL" : "Move Back to Unprocessed",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "session" : { "label" : "Session", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "session" ],
            "type" : { "value" : { "session" : "session" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "session:field-panopoly-acceptance-status" ],
            "value" : "Unprocessed"
          }
        }
      ]
    }
  }');
  return $items;
}
