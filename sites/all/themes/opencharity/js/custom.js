(function($) {
       Drupal.behaviors.custombootstrap = {
         attach: function(context, settings){
           $(document).ready(function() {
              $("#main-container-top img, #main-container-gray img").addClass("group-img");
           });

           $(document).ready(function() {
              $(".views-field-view-node").addClass("view-node-btn");
           });

           $(document).ready(function() {
              $("#main-container-bottom li.jcarousel-item").addClass("col-xs-6 col-sm-3");
           });

          }
        };
    })(jQuery);
