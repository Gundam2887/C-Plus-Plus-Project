#include<iostream>
using namespace std;
//time ϵͳʱ��ͷ�ļ�
#include<ctime>
//������
int main(){
    //ϵͳ���������
    
    //������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ�������һ��
    srand((unsigned int)time(NULL));

    //rand()%100 ���� 0 ~ 99 �������
    //rand()%100+1 ���� 1 ~ 100 �������
    int num = rand()%100 + 1;
    //�������
    int val = 0;
    cout << "������" << endl;
    cin >> val;

    //�¶��˳�
    //�´� ��ӡ��ʾ
    while (1)
    {
        if (val == num)
        {
            cout << "�²���ȷ" << endl;
            break;
        }else if(val > num){
            cout << "����" << endl;
            cin >> val;
        }else if (val < num)
        {
            cout << "С��" << endl;
            cin >> val;
        }
    }
    
    system("pause");
    return 0;
    
    
}