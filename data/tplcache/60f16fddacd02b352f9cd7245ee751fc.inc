[field:global runphp='yes' name=autoindex]
                    $a="
                    <li class='col-5-1 last not-animated' data-animate='fadeInUp'>";
                      $b="
                    
                    <li class='col-5-1 not-animated' data-animate='fadeInUp'>";
                      if ((@me%5)==0 && @me!=20)  @me=$a;
                      else  @me=$b;
                      [/field:global]
                      <div class="link-img"><a href="[field:arcurl/]" target=""><img src="[field:picname/]" alt="[field:title/]" /></a></div>
                    </li>