#include <iostream>

using namespace std;

bool test(int num)
{
    if(num <=0 )
        return false;
    else 
        return true;

}

int main ()
{
    bool tt;
    int num;
    cout << "숫자 : ";
    cin >> num;

    tt = test(num);
    if(test)
    {
        cout << "positive number"<< endl;
    
    }
    else 
    {
    
        cout << "negative number or zero" << endl;
    
    }        
    
    return 0;
}