#include <string>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    vector<string> s1{ "hello","hi" };
    vector<string> s2 = s1;
    vector<string>::iterator iter;
    iter = s2.begin();
    cout << *iter;
    return 0;
}