#include<iostream>
using namespace std;

//struct �� class ������
//Ψһ����������Ĭ�ϵķ���Ȩ�޲�ͬ
//struct Ĭ��Ȩ��Ϊ���� pubilc
//class Ĭ��Ȩ��Ϊ˽�� private

class c1{
    int a = 10;
};

struct s1{
    int a = 10;
};
int main(){
    c1 c;
    //c.a;//˽��Ȩ�޲��ɷ���
    s1 s;
    s.a;//����Ȩ�޿��Է���
}