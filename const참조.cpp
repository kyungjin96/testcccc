#include <iostream>

using namespace std;

int add(const int &a,const int &b){
    return a+b ;

}

int main()
{
    int num1 =1;
    int num2 =2;
    int num3 =add(num1,num2);
    


    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "Adder(4,5): " << add(4, 5) << endl;

    return 0;
}