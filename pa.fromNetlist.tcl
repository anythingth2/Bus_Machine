
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Bus_Machine -dir "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/planAhead_run_3" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/Bus_Machine.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine} }
set_property target_constrs_file "Bus_Machine.ucf" [current_fileset -constrset]
add_files [list {Bus_Machine.ucf}] -fileset [get_property constrset [current_run]]
link_design
