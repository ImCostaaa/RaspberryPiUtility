/*Matthew Costa, Network class which represents a network object, 10/3/2018/**/
#include <iostream>
using namespace std;
#include "network.h"
/* network constructor, fills attributes as empty strings, no params, no return/**/
network::network()
{
networkname = "";
address = "";
}
/* network constructor with params, fills attributes with params given, 5 params one of eacha ttribute, no return /**/
network::network(string net,string add) 
{
networkname = net;
address = add;
}
/* get_net function, returns networkname, no params /**/
string network::get_net()
{
return networkname;
}
/* get_add function, returns address, no params /**/
string network::get_add()
{
return address;
}
/* to_string fuction, returns string ready to be outputed, no params /**/
string network::to_string()
{
string returnstring = networkname +"---"+address+"\n";
return returnstring;
}


