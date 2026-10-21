set_multicycle_path -start -setup -from [get_keepers *m68kp:*|Ir[*]] -to [get_keepers *m68kp:*|microAddr[*]] 2
set_multicycle_path -start -hold  -from [get_keepers *m68kp:*|Ir[*]] -to [get_keepers *m68kp:*|microAddr[*]] 1
set_multicycle_path -start -setup -from [get_keepers *m68kp:*|Ir[*]] -to [get_keepers *m68kp:*|nanoAddr[*]] 2
set_multicycle_path -start -hold  -from [get_keepers *m68kp:*|Ir[*]] -to [get_keepers *m68kp:*|nanoAddr[*]] 1

set_multicycle_path -start -setup -from {*|nanoLatch[*]}             -to {*|mp_excUnit|alu|pswCcr[*]} 2
set_multicycle_path -start -hold  -from {*|nanoLatch[*]}             -to {*|mp_excUnit|alu|pswCcr[*]} 1
set_multicycle_path -start -setup -from {*|mp_excUnit|alu|oper[*]}      -to {*|mp_excUnit|alu|pswCcr[*]} 2
set_multicycle_path -start -hold  -from {*|mp_excUnit|alu|oper[*]}      -to {*|mp_excUnit|alu|pswCcr[*]} 1