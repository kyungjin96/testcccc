#include <iostream>
#include <time.h> 
                 // compiler or IDE you're using 
using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);

   // convert now to string form
   string dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;
return 0;
}


string time() {
    time_t now = time(0);

   // convert now to string form
   string dt = ctime(&now);

//    cout << "The local date and time is: " << dt << endl;
    return dt;
}