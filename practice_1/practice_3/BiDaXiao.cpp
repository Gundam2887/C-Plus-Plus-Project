#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "������ a" << endl;
    cin >> a;
    cout << "������ b" << endl;
    cin >> b;
    cout << "������ c" << endl;
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a ���" <<endl;
        }
        if (a < c)
        {
            cout << "c ���" <<endl;
        }
        
    }else if (a < b)
    {
        if (b > c)
        {
            cout << "b ���" <<endl;
        }
        if ( b < c)
        {
            cout << "c ���" <<endl;
        }
        
        
    }
    
    

    system("pause");
    return 0;
}