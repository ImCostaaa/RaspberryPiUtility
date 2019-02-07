/* Matthew costa, gets the needed networkinterfaces and stores them in vector, $ /**/
#include <iostream>
using namespace std;
#include "network.h"
#include "networklist.h"
/* this class' constructor, reads all network interfaces in from /sys/class/net and stores network objects in vector v, also a string stream oo is being prepared to be used in the to_string method for easy output without having to go through the whole vector since the stringstream is filled WHILE filling the vector, no params, no returns/**/
networklist::networklist()
{
pDir = opendir("/sys/class/net");
while ((dir = readdir (pDir)) != NULL)
{
        if (dir->d_name[0]!= '.')
        {
	ifstream file;
	stringstream ss;
        ss << dir->d_name;
	string line;
	file.open("/sys/class/net/"+ss.str()+"/address");
	getline(file,line);
	network a(ss.str(),line);
	network *networkpointer = &a;
	v.push_back(networkpointer);
	oo << v.back()->to_string();
        }
}
closedir(pDir);
}
/* get_vector function, returns the vector containing pointers to all the network objects created and stored in the constructor, no params, returns vector v filled with network pointer /**/
vector<network*>  networklist::get_vector()
{
return v;
}
/* to_string() method for network interfaces, goes through the vector added eac$
no params, return string ready to be outputted to standard output /**/
string networklist::to_String()
{
string temp = "Format: \n Network---Address\n";
temp = temp + oo.str();
return temp;
}
