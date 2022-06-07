#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;


string Rmsp(string& str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}


void Rmteb(string& str){
    str.erase(remove(str.begin(), str.end(), '\t'), str.end());
}

string line_;
string startpoints;
string endpoints;
ifstream file("/home/kyungjin/kj__/testcccc/mytest/ai_isp.timing_max.rpt");
string slacks;


vector<string> sp;
vector<string> ep;
vector<string> pg;
vector<string> vi;
void find_violated()
{

         while (getline(file, line_)){
            if (line_.find("Startpoint") != string::npos){
            startpoints = line_;

            Rmsp(startpoints);
            sp.push_back(startpoints);
            // cout << startpoints << endl;
            }
            else if (line_.find("Endpoint") != string::npos){
                endpoints = line_;
                Rmsp(endpoints);
                ep.push_back(endpoints);
                // cout << endpoints << endl;
            }
            else if (line_.find("Path Group") != string::npos){
                pg.push_back(Rmsp(line_));
                while(getline(file,line_)){
                    if (line_.find("(VIOLATED)") != string::npos){
                        vi.push_back(Rmsp(line_));
                        
                    }else if (line_.find("(MET)")){
                        // break;
                    }

                }
            } //else if (line_.find("(MET)")){
                //continue;
            //}
            
        }
}

void output()
{
  
        find_violated();

}

int main(){
    output();
    cout << vi.size() << endl;
    for (int i = 0; i <vi.size(); i++)
    cout << vi[i] << endl;    
    cout << ep.size() << endl;
}