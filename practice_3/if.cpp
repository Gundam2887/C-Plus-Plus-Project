#include<iostream>
using namespace std;

int main(){
    int score = 0;
    cout << "���������ķ���" <<endl;
    cin >> score;
    if (score > 600)
    {
        cout << "һ��" << endl;
        if(score > 700){
            cout << "�山" << endl;
            
        }
    }else if(score >400){
        cout << "����" << endl;
    }else{
        cout << "��ר������" << endl;
    }
    system("pause");
    return 0;
}