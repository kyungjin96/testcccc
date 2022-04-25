#include <iostream>
using namespace std;

int main(){
    int i;
    int j;
    cout << "알고싶은 구구단이 몇단인가?:"<<endl;
    cin >> i;

        for(j = 1; j < 10; j++){
            int goo = i*j;
            cout << i << "x"<< j<<"=" << goo<< endl;

    }

return 0;
}