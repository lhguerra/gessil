/**
 * @gallery
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.removeUnwantedItem = {
  attach: function(context, settings) {

    var galleryItem = $('.view-gallery .views-row');

    galleryItem.each(function () {
      var itemDescription = $(this).find('.views-field-body');

      if (!itemDescription.length) {
        $(this).remove();
      }
    });

  }
};


})(jQuery, Drupal, this, this.document);
