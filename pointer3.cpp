#include <iostream>

using namespace std;

void swapb(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main ()
{
    int val1 = 10;
    int val2 = 20;

    cout << "befor swapping" << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;

    swapb(val1, val2);

    cout << "after swapping" << endl;
    cout << "val1 :" << val1 << endl;
    cout << "val2 :" << val2 << endl;

    return 0; 
}