#include<iostream>
using namespace std;

//����Ȩ��
//1��public     ����Ȩ��    ���ڿ��Է��� ������Է���
//2��protected  ����Ȩ��    ���ڿ��Է��� ���ⲻ���Է��� ������Է��ʸ���
//3��private    ˽��Ȩ��    ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ���

class person
{
public:
    string name;

protected:
    string car;

private:
    string passwork;

public:
    void func(){
        name = "zs";
        car = "bm";
        passwork = "wdnmd";
    }
};

int main(){
    person p1;

    p1.name = "ls";
    //p1.car = "bsj";//����Ȩ����������ʲ���
    //p1.passwork = "kljas";//˽��Ȩ�޵�������������ʲ���
}