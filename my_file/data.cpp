#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h> 

using namespace std;


class CC {
public : 
    int count;
    string line;
    vector<string> arr;
    string str ;
    void countt();
    void output();
    string dt;
    string timee() {
    time_t now = time(0);

    dt = ctime(&now);

    // cout << "The local date and time is: " << dt << endl;
    return dt;
    
}
    
};

void CC::countt(){

    ifstream file("/home/kyungjin/kj__/testcccc/my_file/data.txt");
    count = 0;
    while (getline(file, line)){
        if(line.find("MPU") != string::npos){
            arr.push_back(line);

        count++;
        }

        else if(line.find("DSP") != string::npos){
            arr.push_back(line);
           
        count++;    
        }
        else if(line.find("PKG") != string::npos){
            arr.push_back(line);

        count++;    
        } 
        else if(line.find("TGET") != string::npos){
            arr.push_back(line);

        count++;    
        }
    }
}


void CC::output(){

        timee();
        
        ofstream new_file("./new_file.txt");

        for (int i = 0; i< count; i++){
        cout << "DATA : "  << arr[i] <<endl;    
        string str = " DATA : "  + arr[i];
           if (i != count - 1)
            {
                str += "\n";    
            }
        new_file.write(str.c_str(), str.size());

    }
    new_file.close();

}

int main()
{ 
    CC cc;
    cc.countt();
    cc.output();

    return 0;

}


