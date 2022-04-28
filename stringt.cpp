#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1;
	string str2 = "C++ Programming";
    str2.append(" kj king");
    
    cout << str2<<endl;
	cout << "문자열 str1의 길이는 " << str2.length() << "입니다." << endl;
	cout << "문자열 str2의 길이는 " << str2.size() << "입니다.";
	return 0;
}