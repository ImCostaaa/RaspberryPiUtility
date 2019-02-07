/* Matthew Costa, header file for operatingsystem.cpp, 9/28/2018 /**/
#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <sys/sysinfo.h>
#include <sys/utsname.h>
class operatingsystem
{
public:
operatingsystem();
char* get_osname();
char* get_release();
char* get_version();
char* get_machinedata();
long  get_uptime();
std::string get_uptimeformatted();
std::string to_string();
private:
std::stringstream ss;
struct sysinfo info;
struct utsname unameinfo;
};
#endif
