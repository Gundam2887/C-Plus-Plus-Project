#include<iostream>
using namespace std;

//continue
//��ѭ���������������ѭ����������δִ�е���䣬����ִ����һ��ѭ��

int main(){
    // ��������������ż��
    for(int i = 0;i < 100;i++){
        if (i % 2 == 0)
        {
            continue;
        }
        
        cout << i <<endl;
    }

}