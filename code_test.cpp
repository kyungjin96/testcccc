#include <iostream>
using namespace std;

int main()
{
    int a ;
    int b =0;
    cin >> a;
    while (a) {
        b = (b * 10) + (a % 10);
        a = a / 10;
    }
    cout << b << endl;
    return 0;
}