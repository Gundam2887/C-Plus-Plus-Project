#include<iostream>
using namespace std;

//������
//��1��ʼ����100��������ָ�λ����7����������ʮλ����7��
//����������7�ı��������Ǵ�ӡ������
int main(){
    for (int i = 1; i < 100; i++) {
        int a = i % 10;
        int b = i / 10 % 10;
        if (a == 7)
        {
            cout << i <<endl;
            cout << "������" << endl;
        }else if (b == 7){
            cout << i <<endl;
            cout << "������" << endl;
        }else if (i % 7 == 0)
        {
            cout << i <<endl;
            cout << "������" << endl;
        }
    }
    

}