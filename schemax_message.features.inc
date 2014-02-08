<?php
/**
 * @file
 * schemax_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_message_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function schemax_message_default_message_type() {
  $items = array();
  $items['schemax_message'] = entity_import('message_type', '{
    "name" : "schemax_message",
    "description" : "Schemax Message",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "This is the subject",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EThis is the subject\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "This is the body",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EThis is the body\\u003C\\/p\\u003E\\n"
        }
      ],
      "und" : [
        {
          "value" : "This is the subject",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EThis is the subject\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
