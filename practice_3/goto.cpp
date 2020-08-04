#include<iostream>
using namespace std;

//goto
//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
//goto 标记; 标记:
int main(){

    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    goto a;
    cout << "4" << endl;
    cout << "5" << endl;
    a:
    cout << "7" << endl;
    cout << "8" << endl;
    cout << "9" << endl;


}