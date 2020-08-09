#include<iostream>
using namespace std;

int main(){
    // ! 非
    int a = 10;
    //C++ 中除了0 都是 true
    cout << !a <<endl;//0
    cout << !!a <<endl;//1
    // && 与
    int b =10;
    cout << (a&&b) <<endl;//1
    b = 0;
    cout << (a&&b) <<endl;//0
    a = 0;
    cout << (a&&b) <<endl;//0
    // || 或
    int c = 10;
    int d = 10;
    cout << (c||d) <<endl;//1
    c = 0;
    cout << (c||d) <<endl;//1
    c = 10;
    d = 0;
    cout << (c||d) <<endl;//1
    c = 0;
    cout << (c||d) <<endl;//0
    system("pause");
    return 0;

}