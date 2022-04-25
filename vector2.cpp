#include <iostream>
#include <vector>
using namespace std;



int main(){
  vector<int> v;
  for (int i = 0; i <= 5; i++){
    v.push_back(i);
 
  }
    v.push_back(15);
for (int i = 0; i < v.size(); i++)
  cout << v[i] << " "; 
    return 0;
}