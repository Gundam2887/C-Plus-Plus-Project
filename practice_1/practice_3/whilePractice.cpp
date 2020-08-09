#include<iostream>
using namespace std;
//time 系统时间头文件
#include<ctime>
//猜数字
int main(){
    //系统生成随机数
    
    //添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数一样
    srand((unsigned int)time(NULL));

    //rand()%100 生成 0 ~ 99 的随机数
    //rand()%100+1 生成 1 ~ 100 的随机数
    int num = rand()%100 + 1;
    //玩家输入
    int val = 0;
    cout << "请输入" << endl;
    cin >> val;

    //猜对退出
    //猜错 打印提示
    while (1)
    {
        if (val == num)
        {
            cout << "猜测正确" << endl;
            break;
        }else if(val > num){
            cout << "大了" << endl;
            cin >> val;
        }else if (val < num)
        {
            cout << "小了" << endl;
            cin >> val;
        }
    }
    
    system("pause");
    return 0;
    
    
}