# This file was automatically generated by Vpl
if { ![info exists _is_init_cmds] } {
  source ./vpl_init.tcl
  source ./ocl_util.tcl
  source ./platform.tcl
  source ./debug_profile_hooks.tcl
  namespace import ocl_util::*

  set _is_init_cmds true
}



# generate cookie file for messaging
write_cookie_file_impl "ydma"

# utilization reports
report_utilization_impl true "ydma" "routed" "level0_i/ulp" $input_dir $vivado_output_dir

# kernel service update
update_kernel_info $steps_log $vpl_output_dir "level0_i/ulp"

# update noc node information
update_profile_metadata_postroute $vpl_output_dir
