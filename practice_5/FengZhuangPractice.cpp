#include<iostream>
#include<string>
using namespace std;

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class student{
    //���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
    //���� ��Ա���� ��Ա����
    //��Ϊ ��Ա���� ��Ա����

public:
    //����
    string name;
    //ѧ��
    string studentId;

    //��ʾ������ѧ��
    void showStudent(){
        cout << name << " " << studentId << endl;
    }
    
    void setName(string n){
        name = n;
    }
    void setId(string id){
        studentId = id;
    }
};


int main(){
    student s1;
    s1.name = "asdas";
    s1.studentId = "s123213";

    s1.showStudent();

    student s2;
    s2.setName("nmsl");
    s2.setId("321312");

    s2.showStudent();

    student s3;
    cin >> s3.name;
    cin >> s3.studentId;

    s3.showStudent();

}