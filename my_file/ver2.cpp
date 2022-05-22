#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <sstream>

using namespace std;


int main()
{   string sss;
    string stt;
    int count=0;
    string line;
    vector<string> arr;
    string str ;
    vector<string> list1;
    string sr;

     ifstream file("/home/kyungjin/kj__/testcccc/my_file/ver.txt");
      while (getline(file, line)){
        if(line.find("module") != string::npos){
            if(line.find("end") == string::npos){
                line = line.substr(6,3);
                arr.push_back("MODULE NAME : "+line);
            }
        
      
           } else if(line.find("input") != string::npos){
            line = line.substr(0, line.length()-1);
            line = line.substr(5);                
            arr.push_back("inputs : "+line);
            count++;
             
            

            } else if(line.find("output") != string::npos){
                line = line.substr(0, line.length()-1);
                line = line.substr(6);
                arr.push_back("outputs : "+line);
                

            } else if(line.find("inout") != string::npos){
                line = line.substr(0, line.length()-1);
                line = line.substr(5);
                arr.push_back("inouts : "+line);
            }
      }
      for(int i=0; i<<list1.size(); i++){
        arr.push_back("inputs : "+list1[i]);
        cout << list1[i] << endl;
      } 
        time_t now = time(0);

        string dt = ctime(&now);

        string out_file = "new_file_" + dt.substr(11,8) + ".txt";
        const char *C = out_file.c_str();

        cout << C <<endl;
        ofstream new_file(C);

        for (int i = 0; i< arr.size(); i++){ 
        string str = arr[i];
           if (i != arr.size() - 1)
            {
                str += "\n";    
            }
        new_file.write(str.c_str(), str.size());

    }
    new_file.close();

for (int i = 0; i<arr.size(); i++){
    // cout<< arr[i]<< endl;
    if (arr[i].find("inputs") != string::npos){
        stt = stt.append(arr[i].substr(arr[i].find("inputs")).substr(8));
        
        
               
        
    }
}cout << stt <<endl;
cout << arr.size() <<endl;


return 0;
}
