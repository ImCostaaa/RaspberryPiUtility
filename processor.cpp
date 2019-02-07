/* Matthew costa, gets the needed processor info and stores accordingly in attributes, 9/30/2018/**/
#include <iostream>
using namespace std;
#include "processor.h"
/* processor constructor; gathers all information neccessary using both sysinfo()
and ifstream and puts it in the according attributes; no params; no return /*/
processor::processor()
{
sysinfo(&info);
// this stores the loads into allloads array.
for (int i=0;i < 3; i++)
{
allloads[i] = info.loads[i];
}
load1 = allloads[0];
load5 = allloads[1];
load15 = allloads[2];
//  create a string for each line then open the directory needed and loop
//use while loop to loop through and compare first 7 characters of
//each line to see if it is the information required
string line;
ifstream file;
file.open("/proc/cpuinfo");
while (getline(file,line))
	{
	string first_7 = line.substr(0, 7);
	if (!first_7.compare("vendor_"))
	{
	vendor = line;
	}
	else if(!first_7.compare("model n"))
	{
	modelname = line;
	}
	else if(!first_7.compare("cpu MHz"))
        {
        clockspeed = line;
      	}
	}
}
/* get_vendor function, returns vendor id which is a string variable, no 
params, returns a string containing vendor id/*/
string processor::get_vendor()
{
return vendor;
}
/* get_modelname function, returns modelname as a string variable, no params
, returns a string containing modelname. /*/
string processor::get_modelname()
{
return modelname;
}
/* get_clockspeed, returns clockspeed as a string variable, no params, returns
a string containing clockspeed/*/
string processor::get_clockspeed()
{
return clockspeed;
}
unsigned long processor::get_loadtime1()
{
return load1;
}
unsigned long processor::get_loadtime5()
{
return load5;
}
unsigned long processor::get_loadtime15()
{
return load15;
}
/* to_string function gets all information needed and stores in one string that is returned
, no params, returns string ready to be printed to standard output /*/
string processor::to_string()
{
string temp = get_vendor();
temp = temp +"\n"+get_modelname();
temp = temp +"\n"+get_clockspeed();
stringstream ss; 
ss<< "1 minute average load: "<<get_loadtime1()<<"\n"<<"5 minute average load: "<<get_loadtime5()<<"\n"<<"15 minute average load: "<<get_loadtime15();
string loads = ss.str();
temp = temp+"\n"+loads;
return temp;
}

