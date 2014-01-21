float tmax = 0.5		// simulation time in sec
float dt = 0.00005		// simulation time step in sec
setclock  0  {dt}		// set the simulation clock

function createCell(path)
    str path
    create hsolve {path} 
    create compartment {path}/soma
    setfield {path}/soma Rm 1e7 Vm -0.06
    setfield {path}/soma Cm 1e-9 Em -0.06 initVm -0.07 inject 5 
    
    //Solver
    //create hsolve {path}/solver
    //setfield {path}/solver path "/cell1/##[][TYPE=compartment]"
    setmethod 11
    //setfield {path}/solver chanmode 3
    call {path} SETUP
end

createCell "/cell1"
//createCell "/cell2"

//Prepare writer
create asc_file /out
setfield /out    flush 1  leave_open 1 append 1  float_format %0.9g
setclock 1 0.0005
useclock /out 1

// Parameters that we want to save
addmsg       /cell1/soma     /out       SAVE Vm
//addmsg       /cell1/soma     /out       SAVE Vm

setfield /out filename output2.log
call /out OUT_OPEN
//call /out OUT_WRITE "Run #2"        // Write a header
//setfield /cell1/soma inject 0.2e-9
reset
step .3 -t

exit

