<?php
/**
 * @file
 * ombuslide.bean.inc
 */

class ombuslide_bean extends bean_plugin {
  public function values() {
    return array();
  }

  public function form($bean) {
    return array();
  }

  public function view($bean, $content, $view_mode = 'full', $langcode = NULL) {
    return $content;
  }
}
