#include<iostream>
#include<string>
using namespace std;

//考试成绩统计
/*   
        语文    数学    英语
张三    100     100     100
李四    90      50      100
王五    50      70      80
*/

int main(){
    //统计每个人的考试成绩
    int score[][3] = {
        100,100,100,
        90,50,100,
        50,70,100
    };
    string name[] = {"张三","李四","王五"};
    int hang = sizeof(score)/sizeof(score[0]);
    int lie = sizeof(score[0])/sizeof(score[0][0]);
    
    for (int i = 0; i < hang; i++)
    {
        int sum = 0;
        for (int j = 0; j < lie; j++)
        {
            sum += score[i][j];
        }
        cout << sum <<endl;
    }
    
    
}