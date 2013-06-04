<?php

/**
 * Function used to display the advert page
 */
function adshowall_page() {
  // get all the ads
  $sql =<<< EOS
SELECT a.redirect, ai.url, ai.tooltip, f.filepath, n.title
FROM ads a
JOIN node n ON n.nid=a.aid
JOIN ad_image ai ON ai.aid=a.aid
JOIN files f ON f.fid=ai.fid
WHERE a.adstatus='active'
ORDER BY a.activated ASC;
EOS;
  $result = db_query($sql);
  $ads = array();
  while ($row = db_fetch_array($result)) {
    $ads[] = $row;
  }
  // display them
  return theme('adshowall_page', $ads);
}

