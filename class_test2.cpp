#include <iostream>
using namespace std;

// class A {
// private:
// 	int a;
// 	int b;
// public:
// 	A(int _a, int _b){
// 		a = _a;
// 		b = _b;
// 	}
// 	int add() {
// 		return a + b;
// 	}
// };

// class B : A {
// public :
// 	B(int _a, int _b) : A(_a, _b) {}
// 	void printResult() {

// 		cout <<  add()<< endl;
// 	}s
// };

// int main() {
// 	B b(1, 2);
// 	b.printResult();
// }


class AB {

    int c ;
    public:
    
    int add(int a, int b){
        c =10;
        cout << c <<endl;
       return a + b;
   }
    
};

class ABC :public AB {
    public : 
    int add(int x, int y){
    return x * y;
    }
    

};

int main (){

    ABC ab;
    cout << ab.add(1,2) <<endl ;
    return 0;
}