#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//ÿλ��ʦ����λѧ����������λ��ʦ���������£�
/*
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������
��һ���������ѧ����������Ϊ��Ա��ѧ���ĳ�Ա�����������Է�����
������������λ��ʦ��ͨ��������ÿ����ʦ����������ѧ����ֵ��
���մ�ӡ����ʦ�Լ�������ѧ������
*/

struct student{
    string name;
    float score;
};
struct teacher{
    string name;
    student s[5];
};

//��ѧ������ʦ��ֵ�ĺ���
void allocateSpace(teacher t[],int len){
    string nameSeed = "ABCDEFG";
    for (int i = 0; i < len; i++)
    {
        t[i].name = "��ʦ";
        t[i].name += nameSeed[i];
        
        for(int j = 0;j < 5 ;j++){
            t[i].s[j].name = "ѧ��";
            t[i].s[j].name += nameSeed[j];

            int random = rand() % 61 + 40;//40~100
            t[i].s[j].score = random;
        }
    }
    
}

void printInfo(teacher t[],int len){
    for (int i = 0; i < len; i++)
    {
        cout << "��ʦ��������" << t[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "ѧ��������" << t[i].s[j].name << " ���Է�����" << t[i].s[j].score << endl;
        }
        
    }
    
}

int main(){
    //���������
    srand((unsigned int)time(NULL));
    teacher t[3];
    int len = sizeof(t)/sizeof(t[0]);
    allocateSpace(t,len);

    printInfo(t,len);

    system("pause");
    return 0;
}