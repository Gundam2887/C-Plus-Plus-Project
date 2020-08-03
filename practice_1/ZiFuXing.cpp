#include<iostream>
using namespace std;

int main(){
//C和C++中字符型变量只占用 1字节。
//字符型变量并不是把字符本身放到内存中存储。而是将对应的ASCII编码放入存储单元
//不能用双引号
//单引号内只能有一个字符
    char ch = 'a';
    cout << ch << endl << sizeof(char) << endl;
    
//打印字符对应的ASCII码
//a - 97
//A - 65
    cout << (int)ch <<endl;

    system("pause");
    return 0;
}