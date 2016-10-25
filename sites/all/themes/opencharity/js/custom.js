(function($) {
       Drupal.behaviors.custombootstrap = {
         attach: function(context, settings){
           $(document).ready(function() {
              $("#block-views-mission-block-block img").addClass("group-img");
                $("#main-container-top img, #main-container-gray img").addClass("img-centered");
                $(".views-field-view-node").addClass("view-node-btn");
                  $("#main-container-bottom li.jcarousel-item").addClass("col-xs-6 col-sm-3");
                  $(".jcarousel-view--members--block li").addClass("col-lg-15");
                    



           });
          }
        };
    })(jQuery);
