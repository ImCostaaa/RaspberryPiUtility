/* Matthew Costa, gets all operating system info necessary and makes the attributes accessible through getters and a to_string(), 10/2/2018 /**/
#include <iostream>
using namespace std;
#include "operatingsystem.h"
/* operatingsystem constructor, initializes sysinfo and uname structs and makes them accessible through info and unameinfo, no params, no return /**/
operatingsystem::operatingsystem()
{
sysinfo(&info);
uname(&unameinfo);
}
/* getter for os name, returns the osname as a char array, no params, returns char array containing os name /**/
char* operatingsystem::get_osname()
{
	return unameinfo.sysname;
}
/* getter for release, returns the release as a char array, no params, returns char array containing release /**/

char* operatingsystem::get_release()
{
	return unameinfo.release;
}
/* getter for version, returns the version as a char array, no params, returns char array containing version /**/

char* operatingsystem::get_version()
{
        return unameinfo.version;
}
/* getter for machinedata, returns the machinedata as a char array, no params, returns char array containing machine data /**/

char* operatingsystem::get_machinedata()
{
        return unameinfo.machine;
}
/* getter for uptime, returns the uptime as a long, no params, returns long containing uptime /**/

long operatingsystem::get_uptime()
{
	return info.uptime; 
}
/* getter for formatted uptime as a string, returns formatted uptime as a string, no params, returns string containing formatted uptime /**/
string operatingsystem::get_uptimeformatted()
{
string formatted = "Uptime formatted (D/H/M/S): ";
long uptime = get_uptime(); // get uptime in seconds then do calculations to get proper days hours minutes seconds
long days = uptime/60/60/24;
long hours =(uptime/60/60) %24;
long minutes = (uptime/60)%60;
long seconds = uptime%60;
ss << days << ":" << hours << ":" << minutes << ":" << seconds << endl;
formatted = formatted + ss.str();
return formatted;
}
/* tostring method that returns a string ready to be outputed to standard output, returns string formatted properly with all neccasssary information, no params, returns string containing all info ready to be sent to standard output /**/
string operatingsystem::to_string()
{
string output;
ss << "OS Name: " << get_osname() << endl << "Release: " << get_release() << endl << "Version: " << get_version() << endl << "Machine Data: " << get_machinedata() << endl;
output = output + ss.str();
ss.str("");
output = output + get_uptimeformatted();
return output;
}
