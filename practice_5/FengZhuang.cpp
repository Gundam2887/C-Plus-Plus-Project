#include<iostream>
using namespace std;

//��װ������

//���һ��Բ�࣬��Բ���ܳ�
//Բ��ʽ��2 * PI * r

const double PI = 3.14;

class Circle{
    //����Ȩ��
    //����Ȩ��
public:

    //����
    //�뾶
    int r;

    //��Ϊ
    //��ȡԲ���ܳ�
    double calculateZC(){
        return 2 * PI * r;
    }
};

int main(){

    //ͨ��Բ�� ���������Բ������
    Circle cl;
    //��Բ��������Խ��и�ֵ
    cl.r = 10;

    cout << cl.calculateZC() << endl;

}