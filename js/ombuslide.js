(function ($) {
  Drupal.behaviors.ombuslide = {
    attach: function(context, settings) {
      for (var slideshow in settings.ombuslide) {
        if ($('#' + slideshow + ' ul.slides > li').length > 1) {
          $('#' + slideshow + ' ul.slides', context).before('<ul class="pager" id="' + slideshow + '-nav">').cycle({
            timeout: 0,
            pager: '#' + slideshow + '-nav',
            pagerAnchorBuilder: function(index, element) {
              return '<li class="' + index + '"><a href="#">' + (index + 1) + '</a></li>';
            }
          });
        }
      }
    }
  }
})(jQuery);
