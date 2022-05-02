#include <iostream>
#include <fstream>
#include <string>
#include <cstring> 
#include <vector>
#include <typeinfo>
#include <time.h>
using namespace std;


using std::vector;





int main() {
	string line;
	ifstream file("/home/kyungjin/kj__/testcccc/my_file/example.txt");
    vector <string> a;
    vector <string> b; 
    int count =0;
    char cc=0;
    string st;

    
    cout << "테스트중입니다" << endl;



	if(file.is_open()){
		while(getline(file, line)) {

            ++count;            
            string st = "line_num" + to_string(count) + " ";
            const char *C = st.c_str();

            b.push_back(C + line);

		}

		
	} else {
		cout << "Unable to open file";
		return 1;
        
	} file.close();


    time_t now = time(0);
    
    string dt = ctime(&now);
    string out_file = "line_file_" + dt.substr(11,8) + ".txt";
    const char *C = out_file.c_str();
    ofstream false_file(C);

    for (int i = 0; i< b.size(); i++){ 
        string str = b[i];
           if (i != b.size() - 1)
            {
                str += "\n";    
            }
        false_file.write(str.c_str(), str.size());
        // false_file.close();

    }false_file.close();

string tt = "/home/kyungjin/kj__/testcccc/my_file/"+out_file;
const char *CC = tt.c_str();
ifstream next_file(CC);


string line_2 ;
if(next_file.is_open()){
		while(getline(next_file, line_2)) {
            int line_test = line_2.find("^");
            int line_test2 = line_2.find(">");
            // cout << line_2<<endl;
           
            if(line_test > 0 or line_test2 > 0){
                a.push_back(line_2);
      
               cout << line_2 << " F" << endl;
               
            //    ofstream false_file("false_file.txt");
            //    false_file << line << " F" ;
               
            }
            else {
                cout << line_2 << " T" << endl;
                
            // }



		}
}
}
string last_file ="last_file_" + dt.substr(11,8) + ".txt";
const char *ccc = last_file.c_str();
ofstream last_ff(ccc);
    for (int i = 0; i< a.size(); i++){ 
        string str2 = a[i];
           if (i != a.size() - 1)
            {
                str2 += "\n";    
            }
        last_ff.write(str2.c_str(), str2.size());
        // false_file.close();

    }last_ff.close();




}


