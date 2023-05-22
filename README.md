# FTL
First Token Language | Bug Bounty Gist

(FTL)
First Token Language Was inspired by Perl, Regex & many other languages. A Token Based Machine Learning Language System.

```
1. !/  = declare.strings
2. @/  = id.command
3. #/  = display.comment
4. $/  = value.key
5. %/  = split.objective
6. ^/  = peek.display
7. &/  = runtime.ext
8. */  = permissions.env
9. (/  = opening.paren
0. )/  = closed.paren
```
## Verification "Block Stepping"
```
!!/ declare.strings.verification
@@/ id.command.verification
##/ display.comment.verification
$$/ value.key.verification
%%/ split.objective.verification
^^/ peek.display.verification
&&/ runtime.ext.verification
**/ permissions.env.verification
((/ opening.paren.verification
))/ closed.paren.verification
```
```
'! @ # $ % ^ & * ( !)'
'!! !@ !# !$ !% !^ !& !* !( @)'
'@! @@ @# @$ @% @^ @& @* @( #)'
'#! #@ ## #$ #% #^ #& #* #( $)'
'$! $@ $# $$ $% $^ $& $* $( %)'
'%! %@ %# %$ %% %^ %& %* %( ^)'
'^! ^@ ^# ^$ ^% ^^ ^& ^* ^( &)'
'&! &@ &# &$ &% &^ && &* &( *)'
'*! *@ *# *$ *% *^ *& ** *( ()'
'(! (@ (# ($ (% (^ (& (* (( !))'
```
