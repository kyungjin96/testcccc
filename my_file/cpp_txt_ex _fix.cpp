#include <iostream>
#include <fstream>
#include <string>
#include <cstring> 
#include <vector>
#include <typeinfo>
#include <time.h>
using namespace std;


using std::vector;

class filee {
    public:
    string line;
    string line_2 ;
    vector <string> a;
    vector <string> b; 
    int count =0;
    char cc=0;
    string st;
    time_t now = time(0);
    string dt = ctime(&now);
    const char *C = out_file.c_str();
    const char *CC = tt.c_str();
    const char *ccc = last_file.c_str();
    string out_file = "line_file_" + dt.substr(11,8) + ".txt";
    string tt = "/home/kyungjin/kj__/testcccc/my_file/"+ out_file;
    string last_file ="last_file_" + dt.substr(11,8) + ".txt";
    string linee();
    void output();

    



};

string filee::linee(){


        ifstream file("/home/kyungjin/kj__/testcccc/my_file/example.txt");
    	if(file.is_open()){
		while(getline(file, line)) {
            ++count;            
            string st = "line_num" + to_string(count) + " ";
            b.push_back(st + line);

		}

		
	} else {
		cout << "Unable to open file";

        
	} file.close();

    ofstream false_file(C);

    for (int i = 0; i< b.size(); i++){ 
        string str = b[i];
           if (i != b.size() - 1)
            {
                str += "\n";    
            }
        false_file.write(str.c_str(), str.size());

    }false_file.close();
    return out_file;
}


void filee::output(){

ifstream next_file(CC);

if(next_file.is_open()){
		while(getline(next_file, line_2)) {
            int line_test = line_2.find("^");
            int line_test2 = line_2.find(">");
           
            if(line_test > 0 or line_test2 > 0){
                a.push_back(line_2);
      
               cout << line_2 << " F" << endl;
                             
            }
            else {
                cout << line_2 << " T" << endl;
                
		}
}
}

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


int main() {

    filee f;
    f.linee();
    f.output();
    return 0;
}


