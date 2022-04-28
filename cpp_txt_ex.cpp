#include <iostream>
#include <fstream>
#include <string>
#include <cstring> 
#include <vector>
#include <typeinfo>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;







int main() {
	string line;
	ifstream file(".//ex//example.txt");


    


    cout << "테스트중입니다" << endl;



	if(file.is_open()){
		while(getline(file, line)) {
            int line_test = line.find("^");
            int line_test2 = line.find(">");
           
            if(line_test > 0 or line_test2 > 0){
      
               cout << line << " F" << endl;
               
            //    ofstream false_file("false_file.txt");
            //    false_file << line << " F" ;
               
            }
            else {
                cout << line << " T" << endl;
                
            }
                ofstream false_file("false_file.txt");
               false_file << line << " F" ;



		}

		
	} else {
		cout << "Unable to open file";
		return 1;
	}
	return 0;
} 



