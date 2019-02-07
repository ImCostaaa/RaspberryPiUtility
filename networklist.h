/*Matthew Costa, header file for networklist, 10/2/2018 /**/
#ifndef NETWORKLIST_H
#define NETWORKLIST_H
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <sstream>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include "network.h"
class networklist
{
public:
networklist();
std::vector<network*> get_vector();
std::string to_String();
private:
std::stringstream oo;
std::vector<network*> v;
struct dirent *dir;
DIR *pDir;
};
#endif



