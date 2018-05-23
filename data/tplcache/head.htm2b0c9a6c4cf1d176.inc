<?php
$z[0]=Array("global","",400,426);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",1441,1467);
$z[1][4]=array();
$z[1][4]['name']="cfg_dianhua";
$z[2]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",2096,2188);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","\r\n                <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\r\n                  <ul class=\"\">\r\n                    {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}\r\n                    <li class=\"\"><a class=\"\" href=\"[field:typedir function=\"cn_substr(@me,200,9) \" /]\" target=\"\"><strong>[field:typename/]</strong></a></li>\r\n                    {/dede:sql}\r\n                  </ul>\r\n                </li>\r\n                ",2288,2949);
$z[3][4]=array();
$z[3][4]['typeid']="2,7,20,21,22,26,0";
$z[3][4]['currentstyle']="current";
$z[4]=Array("global","",3403,3429);
$z[4][4]=array();
$z[4][4]['name']="cfg_webname";
$z[5]=Array("channelartlist","\r\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\r\n                <ul>\r\n                  {dede:channel type='son' noself='yes' }\r\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n                  {/dede:channel}\r\n                </ul>\r\n              </li>\r\n              ",4631,5078);
$z[5][4]=array();
$z[5][4]['typeid']="2,7,0";
$z[6]=Array("channelartlist","\r\n              <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\r\n              ",5094,5281);
$z[6][4]=array();
$z[6][4]['typeid']="20,21,0";
$z[7]=Array("channelartlist","\r\n              <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\r\n                <ul>\r\n                  {dede:channel type='son' noself='yes' }\r\n                  <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n                  {/dede:channel}\r\n                </ul>\r\n              </li>\r\n              ",5297,5746);
$z[7][4]=array();
$z[7][4]['typeid']="22,26,0";

?>