/*Matthew Costa, header file for networklist, 10/2/2018 /**/
#ifndef NETWORK_H
#define NETWORK_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <fstream>
class network
{
public:
network();
network(std::string,std::string);
std::string get_net();
std::string get_add();
std::string to_string();
private:
std::string networkname;
std::string address;
std::stringstream sa;
};
#endif


