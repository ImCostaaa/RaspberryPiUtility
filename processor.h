/* Matthew Costa, header file for the processor class, 9/29/2018 /**/
#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <fstream>
#include <sys/sysinfo.h>
class processor
{
public:
processor();
std::string get_vendor();
std::string get_modelname();
std::string get_clockspeed();
unsigned long get_loadtime1();
unsigned long get_loadtime5();
unsigned long get_loadtime15();
std::string to_string();
private:
struct sysinfo info;
unsigned long allloads[3];
//variables that will store load averages
unsigned long load1;
unsigned long load5;
unsigned long load15; 
//variables to store string info on cpu
std::string vendor;
std::string modelname;
std::string clockspeed;
std::string currentload;
};
#endif

