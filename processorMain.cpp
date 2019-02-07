/* Matthew Costa, main function that creates instance of processor and calls tostring  and then prints
that string to the screen, 10/1/2018 /*/
#include <iostream>
using namespace std;
#include "processor.h"
int main()
{
processor a;
string b = a.to_string();
cout << b << endl;
return (0);
}

