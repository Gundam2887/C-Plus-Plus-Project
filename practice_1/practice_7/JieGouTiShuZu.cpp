#include<iostream>
#include<string>
using namespace std;

//�ṹ������
//�﷨��
//struct �ṹ���� ������[Ԫ�ظ���] = { {}, {}, ...{}}

struct Student
{
    string name;
    int age;
    float score;
};


int main(){

    Student s1[] ={
        {"����",18,89},
        {"����",19,234},
        {"��5",17,19},
        {"��6",16,29},
    };

    //���Ľṹ��������

    s1[2].name = "��7";
    s1[2].age = 18;
    s1[2].score = 199;



    int length = sizeof(s1) / sizeof(s1[0]);

    cout << length << endl;

    for (int i = 0; i < length; i++)
    {
       cout << s1[i].name << s1[i].age << s1[i].score << endl;
    }
    
}