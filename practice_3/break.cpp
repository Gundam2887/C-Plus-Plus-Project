#include<iostream>
using namespace std;

//break
//在switch中，终止case并跳出switch
//在循环语句中，是跳出当前循环语句
//在嵌套循环中，跳出最近的内层循环语句

int main(){
    //switch
    cout << "请选择副本难度" << endl;
    cout << "1、简单" << endl;
    cout << "2、普通" << endl;
    cout << "3、困难" << endl;

    int select = 0;

    cin >> select;

    switch(select){
        case 1:cout << "您选择了简单" << endl;break;
        case 2:cout << "您选择了普通" << endl;break;
        case 3:cout << "您选择了困难" << endl;break;
        default:break;
    }

    for (int i = 0; i < 100; i++){
        cout << i << endl;
        if (i == 3)
        {
            break;
        }
        
    }

    for(int i = 1;i < 10; i++){
        for (int j = 1; j < i; j++)
        {
            cout << j << "x" << i << "=" << i*j << "\t";
            if (j == 7)
            {
                break;
            }
            
        }
        cout << endl;
    }
    
}