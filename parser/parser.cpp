#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "parser.h"
#include <algorithm>


using namespace std;

void Rmteb(string& str){
    str.erase(std::remove(str.begin(), str.end(), '\t'), str.end());
}



int main(){

    string line;
    string line_;

    ifstream file("/home/kyungjin/kj__/testcccc/parser/vcd-samples/swerv1.vcd");
        while (getline(file, line)){
        if (line.find("$date") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos)
                {
                    Rmteb(line);
                    cout << line <<endl;
                    
                }
                else
                {
                    cout << line<<endl;
                }
                break;
        
        }
        }

       else if (line.find("$version") != std::string::npos or line.find("$Version") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos)
                {
                    Rmteb(line);
                    cout << line <<endl;
                }
                else
                {
                    cout << line<<endl;
                }
                break;
        
        }
        }
       else if (line.find("$timescale") != std::string::npos)
        {   while (getline(file, line)){
                if (line.find('\t') != std::string::npos)
                {
                    Rmteb(line);
                    cout << line <<endl;
                }
                else
                {
                    cout << line<<endl;
                }
                break;    
    
    
        }       
        }
       else if (line.find("$timescale") != std::string::npos)
        {   while (getline(file, line)){

            if ((line_.find("1") != std::string::npos) || (line_.find("s") != std::string::npos))
            {
                if (line.find('\t') != std::string::npos)
                {
                    Rmteb(line);
                    cout << line <<endl;
                }
                else
                {
                    cout << line<<endl;
                }
                break;    
    
    
        }       
        }


    }
}
}

