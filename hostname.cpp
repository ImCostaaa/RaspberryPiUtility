/* Matthew Costa, Obtains host name and stores in string variable hostnamevariable,9/28/2018 /**/
#include <iostream>
using namespace std;
#include "hostname.h"
/* constructor which obtains hostname through gethostname call and stores in variable
hostName of type stringstream /**/
hostname::hostname() // constructor which initializes char array name
	{
	// this chunk of code results in host name being stored in name
	length=64; // longest name of host is 63 so we set to 64 for null
	gethostname(name,length);
	hostName << name<< endl; // hostName now is a stringstream containing host name
	}
/* get_hostname(); returns string containing hostname,no parameters /**/ 
char* hostname::get_hostname() // returns string containing hostname 
	{
	return name;
	}
/* to_string(); turns the stringstream input into a string, no parameters, returns hostname as a string /**/
string hostname::to_string()
	{
	hostnamevariable="Hostname: "+ hostName.str();
	return hostnamevariable;
	}



