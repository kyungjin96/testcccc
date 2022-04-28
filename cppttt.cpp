#include<iostream>
#include<string>
using namespace std;

int main(){
    int except_num = 2;
    int *ptr = &except_num;

 
    for(int i = 0; i <= 100; i++)
    
{
    int *ptr2 = &i;
    if (i % except_num == 0)

    {

        continue;

    }

    cout << i << " "<<endl;
    cout << ptr2 <<endl;

}

}
