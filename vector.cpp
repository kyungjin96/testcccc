#include <iostream>
#include <vector>

using namespace std;




int main(){
vector<int> v;
for (int i=0; i<10; i++) 
  v.push_back(i); 

for (int i = 0; i < v.size(); i++)
  cout << v[i] <<", " ; 
	
cout << v[3] << endl;      
cout << v.front() << endl;
cout << v.back() << endl;  




return 0;
}