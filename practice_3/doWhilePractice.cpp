#include<iostream>
using namespace std;

//ˮ�ɻ���
//ָһ����λ��������ÿ��λ���ϵ����ֵ�3�η�֮�͵���������

int main(){
    int a = 100;
    do
    {
        int b = 0;
        int c = 0;
        int d = 0;
        b = a % 10;//��λ
        c = a / 10 % 10;//ʮλ
        d = a / 100;//��λ 
        if (b*b*b+c*c*c+d*d*d == a)
        {
            cout << a <<endl;
        }
        a++;
        
    } while (a < 1000);
    
}