#include<iostream>
#include<string.h>
using namespace std;

//switch
//语法:
/*switch (表达式){
    case 结果1:执行语句;break;
    case 结果2:执行语句;break;
    case 结果3:执行语句;break;
    ....
    default:执行语句;break;

}*/

int main(){
    //评分 10分制
    //10~9 优秀
    //8~7 不错
    //6 合格
    //5以下 垃圾
    int score = 0;
    string feng = "";
    cout << "请打分" << endl;
    cin >> score;
    switch (score)
    {
    case 10:
    case 9:feng = "优秀";break;
    case 8:
    case 7:feng = "不错";break;
    case 6:feng = "合格";break;
    default:feng = "垃圾";break;
    }
    cout << feng <<endl;
    system ("pause");
    return 0;


}