#include <iostream>
using namespace std;


int main(){
    char a = '*';
    int b;
    cin >> b;
    for(int i=1; i<=b; i++){
       for(int j= 1; j<=i; j++)
       cout<< a;
       cout<<"\n";
       
    }
}
