#include <string>
#include <iostream>

using namespace std;


int main()
{

    char* b = "kyung";
    string a = "kyungjin";
    char*& ab = b;


    cout << a << endl;
    cout << *b << endl;
    cout << ab << endl;
    cout << a[5] << endl;

    return 0;

}