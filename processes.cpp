/*  Matthew Costa, processes.cpp file that represents a processes object, 10/3/2018/**/
#include <iostream>
using namespace std;
#include  "processes.h"
/*processes constructor with no params, sets all processes  attributes to empty, no params, no return /**/
processes::processes()
{
pid = "";
name = "";
owneruid = "";
parentpid = "";
state = "";
}
/* processes constructor with 5 params, sets all processes attributes according to the params, 5 string params, returns nothing /**/
processes::processes(string pide, string namee, string owneruide,string parentpide,string statee)
{
pid = pide;
name = namee;
owneruid = owneruide;
parentpid = parentpide;
state = statee;
}
/* get_pid function, returns pid, no params, retuns string pid /**/
string processes::get_pid()
{
return pid;
}
/* get_name function, returns name, no params, retuns string name /**/
string processes::get_name()
{
return name;
}
/* get_owneruid function, returns owneruid, no params, retuns string owneruid /**/

string processes::get_owneruid()
{
return owneruid;
}
/* get_parentpid function, returns ppid, no params, retuns string parentpid /**/
string processes::get_parentpid()
{
return parentpid;
}
/* get_state function, returns state, no params, retuns string state /**/

string processes::get_state()
{
return state;
}
/* to_string function, returns string ready to be outputted to standard output, no params, returns returnstring /**/
string processes::to_string()
{
string returnstring = "\n"+pid+"\n"+name+"\n"+owneruid+"\n"+parentpid+"\n"+state+"\n";
return returnstring;
}
