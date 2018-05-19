
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Bus_Machine -dir "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/planAhead_run_2" -part xc6slx9tqg144-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "Bus_Machine.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Bus_Machine.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top Bus_Machine $srcset
add_files [list {Bus_Machine.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-3
