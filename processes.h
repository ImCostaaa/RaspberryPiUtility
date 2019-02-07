/*Matthew Costa, header file for processes.cpp, 10/2/2018 /**/
#ifndef PROCESSES_H
#define PROCESSES_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <fstream>
class processes
{
public:
processes();
processes(std::string,std::string,std::string,std::string,std::string);
std::string get_pid();
std::string get_name();
std::string get_owneruid();
std::string get_parentpid();
std::string get_state();
std::string to_string();
private:
std::stringstream ss;
std::string pid;
std::string name;
std::string owneruid;
std::string parentpid;
std::string state;
};
#endif

