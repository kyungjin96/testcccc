#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <time.h> 

using namespace std;

string line_;
string startpoints;
string endpoints;
ifstream file("/home/kyungjin/kj__/testcccc/mytest/ai_isp.timing_max.rpt");
string slacks;


string dt;
string timee() {
    time_t now = time(0);

    dt = ctime(&now);

    cout << "The local date and time is: " << dt.substr(11,8) << endl;
    return dt;
    
}



string Rmsp(string& str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}


void Rmteb(string& str){
    str.erase(remove(str.begin(), str.end(), '\t'), str.end());
}

vector<string> sp;
vector<string> ep;
vector<string> pg;
void start_end_point()
{

        //  while (getline(file, line_)){
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
            }
        //  }
        

}

vector<string> slackkk;



void slack()
{
    if (line_.find("slack ") != string::npos){
        slacks = line_;
        Rmsp(slacks);
        slackkk.push_back(slacks);

    }


}

void output()
{
    while (getline(file, line_))
    {
        start_end_point();
        slack();
    }


}


void outfile(){
    vector<string> nulll(sp.size());
    ofstream new_file("new_file_"+dt.substr(11,8)+".txt");
        for (int i = 0; i< slackkk.size(); i++){  
        string str = slackkk[i];
        string str2 = sp[i];
        string str3 = ep[i];
        string str4 = pg[i];
        string enter = nulll[i];
           if (i != slackkk.size() )
            {   
                str2 += "\n";
                str += "\n";
                str3 += "\n";
                str4 +="\n";
                enter +="\n";
            }
        new_file.write(str2.c_str(), str2.size());
        new_file.write(str3.c_str(), str3.size());
        new_file.write(str4.c_str(), str4.size());
        new_file.write(str.c_str(), str.size());
        new_file.write(enter.c_str(), enter.size());

    

    }
    new_file.close();

}

int main()
{
    timee();
    output();
    outfile();
    cout << "Done" << endl;
}