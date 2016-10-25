<?php
/**
* @file
* Default theme implementation to display a view of jssor slider.
*
* Available variables:
* - slider_id: Unique slider ID. Unfortunately Jssor Slider require an ID.
* - title: The title of this group of rows. May be empty.
* - rows: A list of the view's row items.
*   - attributes: The row's HTML attributes.
*   - content: The row's content.
* - arrowskin: Arrow skin
* - bulletskin: Bullet skin.
* - bulletnavigator: Enable or not the bullet navigator.
* - arrownavigator: Enable or not the arrow navigator.
*
* @see template_preprocess_jssor()
*
* @ingroup themeable
*/
?>
<?php if (!empty($title)): ?>
<h3><?php print $title; ?></h3>
<?php endif; ?>
<div id="<?php print $slider_id; ?>" class="slider_container" style="position: relative; margin: 0 auto;top: 0px; left: 0px; width: 1300px; height: 800px; overflow: hidden;">
  <!-- Slides Container -->
  <div u="slides" style="cursor: move; position: absolute; overflow: hidden; left: 0px; top: 0px; width: 1300px; height: 800px;">
  <?php foreach ($rows as $row): ?>
    <div <?php print drupal_attributes($row['attributes']); /* Attributes */ ?>>
      <?php print $row['content']; ?>
    </div>
  <?php endforeach; ?>
  </div>
  <?php if ($bulletnavigator): ?>
  <!-- bullet navigator container -->
  <div u="navigator" class="jssorb<?php print $bulletskin; ?>" style="position: absolute; bottom: 16px; right: 6px;">
    <!-- bullet navigator item prototype -->
    <div u="prototype" style="position: absolute; width: 16px; height: 16px;"></div>
  </div>
  <?php endif; ?>
  <?php if($arrownavigator): ?>
  <!-- Arrow Left -->
  <span u="arrowleft" class="jssora<?php print $bulletskin; ?>l" style="top: 100px; left: 8px;"></span>
  <!-- Arrow Right -->
  <span u="arrowright" class="jssora<?php print $bulletskin; ?>r" style="top: 100px; right: 8px"></span>
  <?php endif; ?>
</div>
