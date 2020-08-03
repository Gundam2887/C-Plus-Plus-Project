#include<iostream>
using namespace std;

//水仙花数
//指一个三位数，他的每个位数上的数字的3次方之和等于它本身

int main(){
    int a = 100;
    do
    {
        int b = 0;
        int c = 0;
        int d = 0;
        b = a % 10;//个位
        c = a / 10 % 10;//十位
        d = a / 100;//百位 
        if (b*b*b+c*c*c+d*d*d == a)
        {
            cout << a <<endl;
        }
        a++;
        
    } while (a < 1000);
    
}