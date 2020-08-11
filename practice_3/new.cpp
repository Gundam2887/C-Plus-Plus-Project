#include<iostream>
using namespace std;

//1、new的基本用法
int * func()
{
    //在堆区创建整型数据
    //new 返回的是 该数据类型的指针
    int * p = new int(10);
    return p;
} 
void test1()
{
    //堆区的数据又程序员管理开辟，程序员管理释放
    //如果想释放堆区的数据，利用关机在delete
    int * p = func();
    cout << *p << endl;

    delete p;
    cout << *p << endl;
}

//2、在堆去利用new 开辟数组
void test2()
{
    //创建10整型数据的数组，在堆区
    int * arr = new int[10];//10代表数组又10个元素
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;//个10个元素赋值 100 ~ 109
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr [i] << endl;
    }
    //释放堆区数组
    //释放数组的时候 delete 后要加 [] 才可以
    delete[] arr;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr [i] << endl;
    // }
}
int main(){
    test1();
    test2();
    system ("pause");
    return 0;
}