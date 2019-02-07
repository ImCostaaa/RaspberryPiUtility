// Matthew Costa, header file for memory.cpp, 9/28/2018
#ifndef MEMORY_H
#define MEMORY_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <sys/sysinfo.h>
class memory
{
public:
memory();
unsigned long get_totalmemory();
unsigned long get_freememory();
std::string to_string();

private:
std::stringstream ss;
struct sysinfo info;
unsigned long totalmemory;
unsigned long freememory;
};
#endif
