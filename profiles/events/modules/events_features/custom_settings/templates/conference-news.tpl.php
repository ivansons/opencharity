<h2 class="pane-title">Conference Info & News</h2>
<div class="view-content">
  <table class="views-table cols-0">
    <tbody>
	   	<?php 
	      $i = 1;
	      foreach ($result as $record) {
		    ?>
	      <tr class="<?php print ($i%2 == 0 ? 'even': 'odd'); ?>">
	        <td class="views-field views-field-title">
            <?php print l($record->node_title, 'node/' . $record->nid); ?>
	        </td>
	       </tr>
			<?php
			  $i++;
			  } ?>
    </tbody>
  </table>
</div>