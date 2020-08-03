#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "请输入 a" << endl;
    cin >> a;
    cout << "请输入 b" << endl;
    cin >> b;
    cout << "请输入 c" << endl;
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a 最大" <<endl;
        }
        if (a < c)
        {
            cout << "c 最大" <<endl;
        }
        
    }else if (a < b)
    {
        if (b > c)
        {
            cout << "b 最大" <<endl;
        }
        if ( b < c)
        {
            cout << "c 最大" <<endl;
        }
        
        
    }
    
    

    system("pause");
    return 0;
}