#include <iostream>
using namespace std;

int fun() {
    int a = 2;
    return a;

}

int main()
{
    const int &b = fun();
    return 0;
}