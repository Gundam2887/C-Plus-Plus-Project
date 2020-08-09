#include<iostream>
using namespace std;

//在32位的操作系统下，占用4个字节空间
//在54位的操作系统下，占用8个字节空间

int main(){
    int a = 10;
    // int * p;
    // p = &a;

    int * p = &a;

    cout << sizeof(int 
    *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(p) << endl;  
    system("pause");
    return 0;


}