#include<iostream>
using namespace std;

//break
//��switch�У���ֹcase������switch
//��ѭ������У���������ǰѭ�����
//��Ƕ��ѭ���У�����������ڲ�ѭ�����

int main(){
    //switch
    cout << "��ѡ�񸱱��Ѷ�" << endl;
    cout << "1����" << endl;
    cout << "2����ͨ" << endl;
    cout << "3������" << endl;

    int select = 0;

    cin >> select;

    switch(select){
        case 1:cout << "��ѡ���˼�" << endl;break;
        case 2:cout << "��ѡ������ͨ" << endl;break;
        case 3:cout << "��ѡ��������" << endl;break;
        default:break;
    }

    for (int i = 0; i < 100; i++){
        cout << i << endl;
        if (i == 3)
        {
            break;
        }
        
    }

    for(int i = 1;i < 10; i++){
        for (int j = 1; j < i; j++)
        {
            cout << j << "x" << i << "=" << i*j << "\t";
            if (j == 7)
            {
                break;
            }
            
        }
        cout << endl;
    }
    
}