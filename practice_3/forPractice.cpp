#include<iostream>
using namespace std;

//敲桌子
//从1开始数到100，如果数字个位含有7，或者数字十位含有7，
//或者数字是7的倍数，我们打印敲桌子
int main(){
    for (int i = 1; i < 100; i++) {
        int a = i % 10;
        int b = i / 10 % 10;
        if (a == 7)
        {
            cout << i <<endl;
            cout << "敲桌子" << endl;
        }else if (b == 7){
            cout << i <<endl;
            cout << "敲桌子" << endl;
        }else if (i % 7 == 0)
        {
            cout << i <<endl;
            cout << "敲桌子" << endl;
        }
    }
    

}