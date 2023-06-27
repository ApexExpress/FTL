<?php

echo "Hello, First Token Language!";

import FTL -> system;

use english;
use FTL::Cube;

BEGIN: @COPY(FTL::Cube)

!! !@ !# !$ !% !^ !& !* !( @)

@! @@ @# @$ @% @^ @& @* @( #)
#! #@ ## #$ #% #^ #& #* #( $)
$! $@ $# $$ $% $^ $& $* $( %)
%! %@ %# %$ %% %^ %& %* %( ^)
^! ^@ ^# ^$ ^% ^^ ^& ^* ^( &)
&! &@ &# &$ &% &^ && &* &( *)
*! *@ *# *$ *% *^ *& ** *() ()

  (!) (@) (#) ($) (%) (^) (&) (*) (( !))

return 0;
return 1;

END
EOM EOF EOT

?>
