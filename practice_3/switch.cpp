#include<iostream>
#include<string.h>
using namespace std;

//switch
//�﷨:
/*switch (���ʽ){
    case ���1:ִ�����;break;
    case ���2:ִ�����;break;
    case ���3:ִ�����;break;
    ....
    default:ִ�����;break;

}*/

int main(){
    //���� 10����
    //10~9 ����
    //8~7 ����
    //6 �ϸ�
    //5���� ����
    int score = 0;
    string feng = "";
    cout << "����" << endl;
    cin >> score;
    switch (score)
    {
    case 10:
    case 9:feng = "����";break;
    case 8:
    case 7:feng = "����";break;
    case 6:feng = "�ϸ�";break;
    default:feng = "����";break;
    }
    cout << feng <<endl;
    system ("pause");
    return 0;


}