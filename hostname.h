// Matthew COsta, header file for hostname.cpp , 9/28/2018
#ifndef HOSTNAME_H
#define HOSTNAME_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
class hostname
{
public:
hostname();
char* get_hostname();
std::string to_string();
private:
char name[64];
size_t length;
std::stringstream hostName;
std::string hostnamevariable;

};

#endif

