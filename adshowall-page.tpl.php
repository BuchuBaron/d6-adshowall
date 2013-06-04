<?php

$content = '<p>'.t('Please support these people and businesses, as their advertising revenue helps fund our website.').'</p>';
foreach ($ads as $ad) {
  $content .= '<a href="'.$ad['redirect'].'"><img src="/'.$ad['filepath'].'" title="'.$ad['tooltip'].'" align="left" style="float:left" /></a>';
  $content .= '<h2><a href="'.$ad['redirect'].'">'.$ad['title'].'</a></h2><p>'.$ad['tooltip'].'<br /><a href="'.$ad['redirect'].'">'.$ad['url'].'</a></p><br clear="all" /><hr />';
}
print $content;
