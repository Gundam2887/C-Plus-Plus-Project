#include<iostream>
#include<string>
using namespace std;

//���Գɼ�ͳ��
/*   
        ����    ��ѧ    Ӣ��
����    100     100     100
����    90      50      100
����    50      70      80
*/

int main(){
    //ͳ��ÿ���˵Ŀ��Գɼ�
    int score[][3] = {
        100,100,100,
        90,50,100,
        50,70,100
    };
    string name[] = {"����","����","����"};
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