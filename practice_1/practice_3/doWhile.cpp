#include<iostream>
using namespace std;

//do ... while语法：
//do{循环语句} while(循环条件);
//与while的区别在于 do...while 会先执行一次循环语句，再判断循环条件


int main(){
//打印0 — 9
    int num = 0;
    do{ 
        cout << num << endl;
        num++;
    }while(num < 10);

    system("pause");
    return 0;

}