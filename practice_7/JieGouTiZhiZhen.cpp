#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��

//����ṹ��
struct student{
    string name;
    int age;
    float score;
};


int main(){
    //����ѧ���ṹ�����
    student s = {"����",10,100};

    //ͨ��ָ��ָ��ṹ�����
    student * p = &s;

    //ͨ��ָ����ʽṹ������е�����
    cout << p->name << p->age << p->score << endl;

}