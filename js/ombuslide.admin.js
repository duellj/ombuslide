(function ($) {
  Drupal.behaviors.ombuslideAdmin = {
    attach: function(context, settings) {
      if (!$(context).hasClass('draggable')) {
        // Hide all current slide forms.
        $('table#field-slide-values tr.draggable:not(:last, .ombuslide-processed)', context).each(function() {
          var $form = $(this).addClass('ombuslide-processed').find("> td:nth-child(2)")
          Drupal.ombuslideAdmin.setupForm($form);
          $form.before(Drupal.ombuslideAdmin.createOverview($form));
        });
        // Hide new slide form.
        $('table#field-slide-values tr.draggable:last', context).each(function() {
          if (!$(this).hasClass('ombuslide-processed')) {
            var $form = $(this).addClass('ombuslide-processed').find("> td:nth-child(2)")
            Drupal.ombuslideAdmin.setupForm($form);
            $form.before(Drupal.ombuslideAdmin.createAdd($form));
          }
        });
      }
    }
  }

  Drupal.ombuslideAdmin = Drupal.ombuslideAdmin || {};

  // Initially hide individual slide forms and add "Save" button when form is 
  // displayed.
  Drupal.ombuslideAdmin.setupForm = function($form) {
    $form.addClass("slide-form").hide();
    var $button = $('<div class="form-actions"><input class="form-submit submit" type="button" value="Save" /></div>').click(function() {
      $form.hide();
      Drupal.ombuslideAdmin.triggerChange();
      $form.before(Drupal.ombuslideAdmin.createOverview($form));
      return false;
    });
    $form.append($button);
  }

  // Create overview page for the add new slide form.
  Drupal.ombuslideAdmin.createAdd = function($form) {
    var html = $(Drupal.theme('ombuslideNewOverview'));

    html.find("a.add").click(function() {
      $form.show();
      $(this).parents('td.overview').remove();
      return false;
    });

    return html;
  };

  // Create overview page for existing slides.
  Drupal.ombuslideAdmin.createOverview = function($form) {
    var html = $(Drupal.theme('ombuslideOverview', $form));

    html.find(".edit").click(function() {
      $form.show();
      $('iframe', $form).height(100);
      $(this).parents('td.overview').remove();
      return false;
    });

    $('input[value="Remove"]:last', $form).appendTo($('.form-actions', html));

    return html;
  };

  // Borrow the changed warning system from tabledrag to indicate to user that 
  // form still needs to be saved.
  Drupal.ombuslideAdmin.triggerChange = function() {
    if (Drupal.tableDrag['field-slide-values'].changed == false) {
      $(Drupal.theme('tableDragChangedWarning')).insertBefore(Drupal.tableDrag['field-slide-values'].table).hide().fadeIn('slow');
      Drupal.tableDrag['field-slide-values'].changed = true;
    }
  }

  Drupal.theme.prototype.ombuslideNewOverview = function() {
    return '<td class="overview"><ul class="links"><li><a class="add" href="#">New Slide</a></li></ul></td>';
  }

  Drupal.theme.prototype.ombuslideOverview = function($form) {
    var html = '<td class="overview"><div class="overview-column">';
    if ($("div.image-preview", $form).html()) {
      html += $("div.image-preview", $form).html();
    }
    html += '</div><div class="overview-column title">';
    if ($(".field-name-field-slide-title input", $form).val()) {
      html += $(".field-name-field-slide-title input", $form).val();
    }
    html += '</div>';
    html += '<div class="overview-column form-actions form-wrapper"><input type="button" class="form-submit edit" value="Edit" />';
    html += '</div>';
    html += '</td>';
    return html;
  }
})(jQuery);
