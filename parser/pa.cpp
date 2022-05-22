#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "parser.h"
#include <algorithm>
#include <sstream>


using namespace std;


void Rmteb(string& str){
    str.erase(std::remove(str.begin(), str.end(), '\t'), str.end());
}

void Rmsp(string& str){
    remove(str.begin(), str.end(), ' ');
}

    string date_;
    string line;
    string line2;
    string line_;
    string version_;
    string time_;
    string modules_;


    ifstream file("/home/kyungjin/kj__/testcccc/parser/counter.vcd");
    ifstream file2("/home/kyungjin/kj__/testcccc/parser/counter.vcd");

    vector<string> arr;
    string s;


void date(){
        
        if (line.find("$date") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos)
                {

                    date_ = line;
                    Rmteb(date_);
                    
                }
                else if (line.find(" ") != std::string::npos)
                {
                    date_ = line.substr(1);
                    
                }  

                else
                {

                    // cout << line<<endl;
                    date_ = line;

                }
                break;
        
        }
        }


}


void version(){
    if (line.find("$version") != std::string::npos or line.find("$Version") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos){


                    version_ = line;
                    Rmteb(version_);
                }
                
                else if (line.find("$end") != std::string::npos)
                {                    
                    version_ = line.substr(8);

                }
                else
                {
                
                    version_ = line;
                }
                break;
        
        }
        }



}
void times()
{
        if (line.find("$timescale") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos)
                {

                    time_ = line;
                    Rmteb(time_);
                }
                else if(line.find(" ") != std::string::npos){
                    time_ = line;
                     time_.erase(time_.begin());


                }
                else
                {
                    // cout << line<<endl;
                    time_ = line;
                }
                break;    
    
    
        }       
        }

}

vector<string> tt;
string tt1;
string test;
void modules()
{
        if (line.find("$scope") != string::npos){       
            modules_ = line.substr(13);
            modules_ = modules_.substr(0, modules_.length()-4);
            arr.push_back(modules_);
    }           
}

void name()
{       while (getline(file, line)){
        if (line.find("$var") != std::string::npos)
        {   
            cout << line <<endl;   
        }

    }
}


    

int main(){
while (getline(file, line)){

    date();
    version();
    times();
    modules();

    
}

name();
// vector<string> tt;
// string tt1;
// string test;
// stringstream stream(arr[0]);
//             while(stream >> s)
//                 tt.push_back(s+"\n");
// cout << tt[1]<< endl;


for (int i=0; i<arr.size(); i++)
{
    stringstream stream(arr[i]);
    while(stream >> s){
                tt.push_back(s);
                tt1.append(s+"\n");
    }
}

cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~"<< endl;
cout << "version: "<< version_<< endl;
cout << "date: "<< date_ << endl;
cout << "time: "<< time_ << endl;
cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~"<< endl;
cout << "\t\tmodules list" << endl;
cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~"<< endl;
cout << tt1;
cout << "-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~"<< endl;







return 0;
}




