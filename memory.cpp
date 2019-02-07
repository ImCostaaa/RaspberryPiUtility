
#include <iostream>
using namespace std;
#include "memory.h"
/* memory constructor which creates the string stream for what we need to print
and also stores the totalmemory and freememory from info struct into according
variables; no params; no return /*/
memory::memory()
{
	sysinfo(&info);
	totalmemory = info.totalram;
	freememory =info.freeram;
}
/* get_totalmemory function; returns totalmemory as unsigned long int; no params; returns unsigned long int representing
total memory /*/
unsigned long memory::get_totalmemory()
{
return totalmemory;
}
/* get freememory function; returns freememory as unsigned long int; no params; returns freememory unsigned long /*/
unsigned long  memory::get_freememory()
{
return freememory;
}
/* to_string function;formats information into a proper string by turning the stringstream i had into a string variable
and then we return that string; no params; returns string that is to be printed
to standard output through main /*/
string memory::to_string()
{
ss << "Total Memory: " << totalmemory <<" kB" << "\nFree Memory: " << freememory << " kB"<< endl ;
string temp = ss.str();
return temp; 

}
