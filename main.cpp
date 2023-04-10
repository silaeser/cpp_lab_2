//Variable and Types
#include <iostream>

using namespace std;

int main()
{
///Integer Types (Identifiers : char,short,long ,long long ,int)
//Variables can use a-z and A-Z letters, 0-9 Numbers,
//           can NOT start with a numbers, use c/c++ keywords
 char a = 35+17 ; // 1 byte  = 8 bits
 short sh = 12345; // 2 bytes = 16 bits
 long lng; // 4 bytes = 32 bits
 int  data;//? bytes = ? bites (depends pn OpSys and compiler- - today mostly 8 bytes)
 long long _abc123; // 8 bytes = 64 bits
 short a1b2c3;
 char _123abc;
 //Floating Point Types
 //Runs on FPU (Floating Point Unit) 80 bits
 float realNumber8; // 4 bytes Real number with 8 figures precisionqq
 double realNumber16; // 8 bytes Real number with 16 figures precision
 long double realNumber32; // 10 bytes Real number with precision not less than double

 cout << "a= " << a << endl;
 cout << "sh= " << sh << endl;
return 0;
}
