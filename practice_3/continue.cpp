#include<iostream>
using namespace std;

//continue
//在循环语句中跳过本次循环中余下尚未执行的语句，继续执行下一次循环

int main(){
    // 输出奇数，不输出偶数
    for(int i = 0;i < 100;i++){
        if (i % 2 == 0)
        {
            continue;
        }
        
        cout << i <<endl;
    }

}