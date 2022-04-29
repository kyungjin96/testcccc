#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{   string sss;
    string stt;
    int count=0;
    string line;
    vector<string> arr;
    // string line1;
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
        

        ofstream new_file("./new_file2441.txt");

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


return 0;
}
