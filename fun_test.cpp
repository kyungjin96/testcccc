#include <iostream>
using namespace std;

int fun() {
    int a = 2;
    return a;

}


int fun2(){
    int a = 3;
    return a;

}

int main()
{
    const int &b = fun();
    int c = fun2();
    return 0;
}