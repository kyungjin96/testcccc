#include <iostream>
using namespace std;



// int  BoxVolume(int length, int width = 1, int height = 1);  // 부분적 디폴트 값은 오른쪽에서 왼쪽으로
int BoxVolume(int length, int width = 1, int height= 1)
{
    return length * width * height;
}



int main()
{
    cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;  // BoxVolume(3,3,3)
    cout << "[5, 5, 1] : " << BoxVolume(5, 5) << endl;  // BoxVolume(5,5,1)
    cout << "[7, 1, 1] : " << BoxVolume(5,1) << endl;  // BoxVolume(7,1,1)
    //std::cout << "[?, 1, 1]" << BoxVolume() << std::endl;  // BoxVolume(?,1,1) 이므로 에러발생


    return 0;
}

// int BoxVolume(int length, int width, int height)
// {
//     return length * width * height;
// }