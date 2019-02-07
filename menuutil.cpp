/* Matthew Costa, menu UI that exits on enterin digit 7, 10/4/2018 /**/
#include <iostream>
#include "hostname.h"
#include "memory.h"
#include "operatingsystem.h"
#include "processor.h"
#include "network.h"
#include "networklist.h"
#include "processes.h"
#include "processeslist.h"
using namespace std;
int main()
{
string choice;
string menu;
menu= "Please Enter digit associated with function to run: \n(1) Hostname\n(2) Memory\n(3) Operating System\n(4) processor\n(5) Networks\n(6) Processes\n(7) Exit\n";
cout << menu << endl;

while (getline(cin, choice))
{
	if(choice == "1")
	{
	hostname a;
	cout << a.to_string()<<endl;
	cout  << menu << endl;
	}
	if(choice == "2")
        {
        memory a;
        cout << a.to_string()<<endl;
        cout  << menu << endl;
        }
	if(choice == "3")
        {
        operatingsystem a;
        cout << a.to_string()<<endl;
        cout  << menu << endl;
        }
	if(choice == "4")
        {
        processor a;
        cout << a.to_string()<< "\n"<<endl;
        cout  << menu << endl;
        }
	if(choice == "5")
        {
        networklist a;
        cout << a.to_String()<<endl;
        cout  << menu << endl;
        }
	if(choice == "6")
        {
        processeslist a;
        cout << a.to_string()<<endl;
        cout  << menu << endl;
        }
	if(choice == "7")
        {
        cout << "Exit command entered, Goodbye!"<<endl;
        break;
        }
}
return(0);
}
