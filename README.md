# FTL
First Token Language | Created and maintained by CJ (@apexexpress)

This part indicates symbolic routes
```
1. !/1  = 'declare.strings'
2. @/2  = 'id.command'
3. #/3  = 'display.comment'
4. $/4  = 'value.key'
5. %/5  = 'split.objective'
6. ^/6  = 'peek.display'
7. &/7  = 'runtime.ext'
8. */8  = 'permissions.env'
9. (/9  = 'opening.paren'
0. )/0  = 'closed.paren'
```
This part authentication doubles AUTH()

```
!!/11  -> # declare.strings.verification
@@/22  -> # id.command.verification
##/33  -> # display.comment.verification
$$/44  -> # value.key.verification
%%/55  -> # split.objective.verification
^^/66  -> # peek.display.verification
&&/77  -> # runtime.ext.verification
**/88  -> # permissions.env.verification
((/99  -> # opening.paren.verification
))/00  -> # closed.paren.verification
```
                 This one breakdown each row
```
         '! @ # $ % ^ & * ( !)'  # Sequencial Token
 
'!! !@ !# !$ !% !^ !& !* !( @)'  # Statement Keypair Sequencial
'@! @@ @# @$ @% @^ @& @* @( #)'  # Id Keypair Status

'#! #@ ## #$ #% #^ #& #* #( $)'  # Comment Ctrl Objective
'$! $@ $# $$ $% $^ $& $* $( %)'  # Value Keyword Keypair Authorization

'%! %@ %# %$ %% %^ %& %* %( ^)'  # Split Table DATA
'^! ^@ ^# ^$ ^% ^^ ^& ^* ^( &)'  # Peek Serial
'&! &@ &# &$ &% &^ && &* &( *)'  # Runtime Routine

'*! *@ *# *$ *% *^ *& ** *( ()'  # Permission Accessor
'(! (@ (# ($ (% (^ (& (* (( !))' # Open Parameters Finalize
```

The FTL cypher block 
```
'!! !@ !# !$ !% !^ !& !* !( @)'  # Statement Keypair Sequencial
'@! @@ @# @$ @% @^ @& @* @( #)'  # Id Keypair Status
'#! #@ ## #$ #% #^ #& #* #( $)'  # Comment Ctrl Objective
'$! $@ $# $$ $% $^ $& $* $( %)'  # Value Keyword Keypair Authorization
'%! %@ %# %$ %% %^ %& %* %( ^)'  # Split Table DATA
'^! ^@ ^# ^$ ^% ^^ ^& ^* ^( &)'  # Peek Serial
'&! &@ &# &$ &% &^ && &* &( *)'  # Runtime Routine
'*! *@ *# *$ *% *^ *& ** *( ()'  # Permission Accessor
'(! (@ (# ($ (% (^ (& (* (( !))' # Open Parameters Finalize
```

```
'!! !@ !# !$ !% !^ !& !* !( @)': Statement Keypair Sequential
This sequence appears to represent a sequence of statement keypairs, where each keypair consists of a symbol followed by an at sign (@). The exclamation mark (!) indicates the beginning of a statement, and the at sign (@) separates the key and value of each keypair. The symbols after the at sign seem to represent different attributes or values associated with each key.

'@! @@ @# @$ @% @^ @& @* @( #)': Id Keypair Status
This sequence represents id keypairs with status indicators. Each keypair starts with an at sign (@), followed by a symbol representing the id, and then another symbol representing the status. The status symbols may indicate different states or conditions associated with each id.

'#! #@ ## #$ #% #^ #& #* #( $)': Comment Ctrl Objective
This sequence represents comment control objectives. The exclamation mark (!) indicates the beginning of a comment, and the hashtag (#) separates the control and objective symbols. The control symbols may represent different types of control actions or directives, while the objective symbols may represent specific objectives or goals.

'$! $@ $# $$ $% $^ $& $* $( %)': Value Keyword Keypair Authorization
This sequence represents value keyword keypairs with authorization indicators. Each keypair starts with a dollar sign ($), followed by a symbol representing the value keyword, and then another symbol representing the authorization status. The authorization symbols may indicate different levels of access or permission associated with each value keyword.

'%! %@ %# %$ %% %^ %& %* %( ^)': Split Table DATA
This sequence represents a split table with data. The percentage symbol (%) separates the table columns, and the symbols after the percentage symbol represent different data values within each column. The caret (^) symbol seems to indicate a split or break between rows.

'^! ^@ ^# ^$ ^% ^^ ^& ^* ^( &)': Peek Serial
This sequence represents a peek serial operation. The caret (^) symbol indicates the start of the operation, and the symbols after the caret represent different components or steps of the serial operation. The ampersand (&) symbol may indicate some form of interaction or combination between the components.

'&! &@ &# &$ &% &^ && &* &( )': Runtime Routine
This sequence represents a runtime routine. The ampersand (&) symbol indicates the start of the routine, and the symbols after the ampersand represent different steps or actions within the routine. The asterisk () symbol at the end may indicate the completion or finalization of the routine.

'*! *@ *# *$ *% *^ *& ** ( ()': Permission Accessor
This sequence represents a permission accessor. The asterisk () symbol indicates the start of the accessor, and the symbols after the asterisk represent different components or attributes associated with the permission. The parentheses () at the end may indicate the encapsulation or grouping of the components.

'(! (@ (# ($ (% (^ (& (* (( !))': Open Parameters Finalize
This sequence represents the opening and finalizing of parameters. The exclamation mark (!) at the beginning and end indicates the beginning and completion of the parameters. The symbols within parentheses () represent different parameter values or attributes. The symbols after the ampersand (&) may indicate some form of interaction or combination between the parameters.
```
```
// Statement Keypair Sequential
let statement_keypair_sequential = vec!["!", "@", "#", "$", "%", "^", "&", "*", "(", "@"];

// Id Keypair Status
let id_keypair_status = vec!["@!", "@@", "@#", "@$", "@%", "@^", "@&", "@*", "@(", "#"];

// Comment Ctrl Objective
let comment_ctrl_objective = vec!["#!", "#@", "##", "#$", "#%", "#^", "#&", "#*", "#(", "$"];

// Value Keyword Keypair Authorization
let value_keyword_keypair_authorization = vec![
    "$!", "$@", "$#", "$$", "$%", "$^", "$&", "$*", "$(", "%"
];

// Split Table DATA
let split_table_data = vec![
    "%!", "%@", "%#", "%$", "%%", "%^", "%&", "%*", "%(", "^"
];

// Peek Serial
let peek_serial = vec![
    "^!", "^@", "^#", "^$", "^%", "^^", "^&", "^*", "^( &)"
];

// Runtime Routine
let runtime_routine = vec![
    "&!", "&@", "&#", "&$", "&%", "&^", "&&", "&*", "&(", "*)"
];

// Permission Accessor
let permission_accessor = vec![
    "*!", "*@", "*#", "*$", "*%", "*^", "*&", "**", "*(", "()"
];

// Open Parameters Finalize
let open_parameters_finalize = vec![
    "(!", "(@", "(#", "($", "(%", "(^", "(&", "(*", "(( !))"
];

// Print the sequences
println!("{:?}", statement_keypair_sequential);
println!("{:?}", id_keypair_status);
println!("{:?}", comment_ctrl_objective);
println!("{:?}", value_keyword_keypair_authorization);
println!("{:?}", split_table_data);
println!("{:?}", peek_serial);
println!("{:?}", runtime_routine);
println!("{:?}", permission_accessor);
println!("{:?}", open_parameters_finalize);
```
```
Certainly! Here's a rewrite of the provided code:

```python
statement_keypair_sequential = {
    '!': 'Statement',
    '@': 'Key',
    '#': 'Symbol',
    '$': 'Value',
    '%': 'Attribute',
    '^': 'Value',
    '&': 'Attribute',
    '*': 'Value',
    '(': 'At'
}

id_keypair_status = {
    '@': 'Id',
    '!': 'Key',
    '#': 'Status',
    '$': 'Id',
    '%': 'Status',
    '^': 'Id',
    '&': 'Status',
    '*': 'Id',
    '(': 'Status'
}

comment_ctrl_objective = {
    '#': 'Comment',
    '!': 'Control',
    '@': 'Objective',
    '$': 'Comment',
    '%': 'Control',
    '^': 'Objective',
    '&': 'Control',
    '*': 'Objective',
    '(': 'Control'
}

value_keyword_keypair_authorization = {
    '$': 'Value',
    '!': 'Keyword',
    '@': 'Key',
    '#': 'Authorization',
    '%': 'Value',
    '^': 'Keyword',
    '&': 'Key',
    '*': 'Authorization',
    '(': 'Value',
    ')': 'Authorization',
    '%': 'Authorization'
}

split_table_data = {
    '%': 'Split',
    '!': 'Table',
    '@': 'DATA',
    '#': 'Split',
    '$': 'Table',
    '%': 'DATA',
    '^': 'Split',
    '&': 'Table',
    '*': 'DATA',
    '^': 'Split',
    '&': 'Table',
    '*': 'DATA',
    '^': 'Split',
    '&': 'Table',
    '*': 'DATA'
}

peek_serial = {
    '^': 'Peek',
    '!': 'Serial',
    '@': 'Peek',
    '#': 'Serial',
    '$': 'Peek',
    '%': 'Serial',
    '^': 'Peek',
    '&': 'Serial',
    '*': 'Peek',
    '^': 'Serial',
    '&': 'Peek',
    '*': 'Serial',
    '^': 'Peek',
    '&': 'Serial'
}

runtime_routine = {
    '&': 'Runtime',
    '!': 'Routine',
    '@': 'Runtime',
    '#': 'Routine',
    '$': 'Runtime',
    '%': 'Routine',
    '^': 'Runtime',
    '&': 'Routine',
    '*': 'Runtime',
    '(': 'Routine',
    ')': 'Routine'
}

permission_accessor = {
    '*': 'Permission',
    '!': 'Accessor',
    '@': 'Permission',
    '#': 'Accessor',
    '$': 'Permission',
    '%': 'Accessor',
    '^': 'Permission',
    '&': 'Accessor',
    '*': 'Permission',
    '(': 'Accessor',
    ')': 'Accessor'
}

open_parameters_finalize = {
    '(': 'Open',
    '!': 'Parameters',
    '@': 'Finalize',
    '#': 'Open',
    '$': 'Parameters',
    '%': 'Finalize',
    '^': 'Open',
    '&': 'Parameters',
    '*': 'Finalize',
    ')': 'Open',
    ')': 'Finalize'
}
```

I have rewritten the code as Python dictionaries, where each symbol represents a key and the associated value represents the meaning or attribute associated with that symbol.

## Configure File

```
{
  "statement_keypair_sequential": {
    "!": "Statement",
    "@": "Key",
    "#": "Symbol",
    "$": "Value",
    "%": "Attribute",
    "^": "Value",
    "&": "Attribute",
    "*": "Value",
    "(": "At"
  },
  "id_keypair_status": {
    "@": "Id",
    "!": "Key",
    "#": "Status",
    "$": "Id",
    "%": "Status",
    "^": "Id",
    "&": "Status",
    "*": "Id",
    "(": "Status"
  },
  "comment_ctrl_objective": {
    "#": "Comment",
    "!": "Control",
    "@": "Objective",
    "$": "Comment",
    "%": "Control",
    "^": "Objective",
    "&": "Control",
    "*": "Objective",
    "(": "Control"
  },
  "value_keyword_keypair_authorization": {
    "$": "Value",
    "!": "Keyword",
    "@": "Key",
    "#": "Authorization",
    "%": "Value",
    "^": "Keyword",
    "&": "Key",
    "*": "Authorization",
    "(": "Value",
    ")": "Authorization"
  },
  "split_table_data": {
    "%": "Split",
    "!": "Table",
    "@": "DATA",
    "#": "Split",
    "$": "Table",
    "%": "DATA",
    "^": "Split",
    "&": "Table",
    "*": "DATA"
  },
  "peek_serial": {
    "^": "Peek",
    "!": "Serial",
    "@": "Peek",
    "#": "Serial",
    "$": "Peek",
    "%": "Serial",
    "&": "Peek",
    "*": "Serial"
  },
  "runtime_routine": {
    "&": "Runtime",
    "!": "Routine",
    "@": "Runtime",
    "#": "Routine",
    "$": "Runtime",
    "%": "Routine",
    "^": "Runtime",
    "&": "Routine",
    "*": "Runtime",
    "(": "Routine",
    ")": "Routine"
  },
  "permission_accessor": {
    "*": "Permission",
    "!": "Accessor",
    "@": "Permission",
    "#": "Accessor",
    "$": "Permission",
    "%": "Accessor",
    "^": "Permission",
    "&": "Accessor",
    "*": "Permission",
    "(": "Accessor",
    ")": "Accessor"
  },
  "open_parameters_finalize": {
    "(": "Open",
    "!": "Parameters",
    "@": "Finalize",
    "#": "Open",
    "$": "Parameters",
    "%": "Finalize",
    "^": "Open",
    "&": "Parameters",
    "*": "Finalize",
    ")": "Open"
  }
}
```
