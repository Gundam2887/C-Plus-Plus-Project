#include<iostream>
using namespace std;

//函数的常见样式:
//1、无参无返   2、有参无返     3、无参有返     4、有参有返


//1、
void test01(){
    cout << "无参无返" <<endl;
}
//2、
void test02(int a){
    cout << "有参无返" << endl << a <<endl;
    
}
//3、
int test03(){
    cout << "无参有返"  << endl;
    return 10086;
}
//4、
int test04(int a,int b){
    cout << "有参有返"  << endl;
    return a + b;
}
int main(){
    int a = 10086;
    //无参无返的调用
    test01();
    //有参无返的调用
    test02(a);
    //无参有返的调用
    int num1 = test03();
    cout << num1 << endl;
    //有参有返的调用
    int num2 = test04(10,98);
    cout << num2 << endl;
}