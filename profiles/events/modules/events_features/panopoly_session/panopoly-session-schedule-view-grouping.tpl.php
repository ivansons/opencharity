<?php if ($show_date_row): ?>
  <?php if (!$is_first_row): ?>
    </table>
  <?php endif; ?>
  <table class="session-calendar multi-column-schedule">
    <caption>
      <?php print $current_date; ?>
    </caption>
    <tr>
      <th><?php print t('Time'); ?></th>
      <?php foreach ($rooms as $room): ?>
        <th><span class="room-label">
          <?php print $room;?>
        </span></th>
      <?php endforeach ?>
    </tr>
<?php endif; ?>

<tr class="<?php print $zebra = $zebra == 'even' ? 'odd':'even'; ?>">
  <td class="time-label">
    <?php print $rendered_date; ?>
  </td>
  <?php if (!$is_big_session): ?>
    <?php foreach ($rooms as $room): ?>
      <?php if (isset($sessions[$room])): ?>
        <td>
          <?php foreach ($sessions[$room] as $session): ?>
            <div>
              <?php print $session; ?>
            </div>
          <?php endforeach; ?>
        </td>
      <?php endif; ?>
    <?php endforeach; ?>
  <?php else: ?>
    <td colspan="<?php print $colspan?>" class="big-session">
      <?php foreach ($sessions as $session): ?>
        <div>
          <?php print $session; ?>
        </div>
      <?php endforeach; ?>
    </td>
  <?php endif; ?>
</tr>

<?php if ($is_last_row): ?>
  </table>
<?php endif; ?>
