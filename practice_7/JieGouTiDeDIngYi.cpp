#include<iostream>
#include<string>
using namespace std;

//�ṹ�����û��Զ�����������ͣ������û��洢��ͬ����������
//�﷨:
//struct �ṹ���� {�ṹ���Ա�б�}



struct Student
{
    string name;
    int age;
    double score;
}s3;//˳�㴴���ṹ�����

//1��struct student s1
//2��struct student s2 = {....}
//3���ڶ���ṹ��ʱ˳�㴴���ṹ�����
int main(){
    //ʹ��ʱ struct ����ʡ��
    struct Student s1;
    //��s1���Ը�ֵ��ͨ�� . ���ʽṹ������е�����
    s1.name = "��ɽ";
    s1.age = 18;
    s1.score = 99.9;
    cout << s1.name << " " << s1.score << " " <<  s1.age << endl;

    struct Student s2 = { "����",19,98.8 };
    cout << s2.name << " " << s2.score << " " <<  s2.age << endl;

    s3.name = "����";
    s3.age = 17;
    s3.score = 88.8;
    cout << s3.name << " " << s3.score << " " <<  s3.age << endl;

}