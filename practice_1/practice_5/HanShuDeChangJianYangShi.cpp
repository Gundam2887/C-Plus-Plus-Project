#include<iostream>
using namespace std;

//�����ĳ�����ʽ:
//1���޲��޷�   2���в��޷�     3���޲��з�     4���в��з�


//1��
void test01(){
    cout << "�޲��޷�" <<endl;
}
//2��
void test02(int a){
    cout << "�в��޷�" << endl << a <<endl;
    
}
//3��
int test03(){
    cout << "�޲��з�"  << endl;
    return 10086;
}
//4��
int test04(int a,int b){
    cout << "�в��з�"  << endl;
    return a + b;
}
int main(){
    int a = 10086;
    //�޲��޷��ĵ���
    test01();
    //�в��޷��ĵ���
    test02(a);
    //�޲��з��ĵ���
    int num1 = test03();
    cout << num1 << endl;
    //�в��з��ĵ���
    int num2 = test04(10,98);
    cout << num2 << endl;
}