#include<iostream>
using namespace std;

template<class T>

//一维数组定义方式：
//1、数据类型 数组名[数组长度]
//2、数据类型 数组名[数组长度] = {值1、值2、...}
//3、数据类型 数组名[ ] = {值1、值2、...}
//下标从0开始,下标 = 数组长度 - 1
//C++没有直接获取数组长度的函数
//C++可以使用strlen()函数来获取字符串数组长度

int length(T& arr){
    // cout << sizeof(arr[0]) << endl;
    // cout << sizeof(arr) << endl;
    return sizeof(arr)/sizeof(arr[0]);
}

int main(){

    //1
    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // cout <<arr[0] << endl;
    // cout <<arr[1] << endl;
    // cout <<arr[2] << endl;
    // cout <<arr[3] << endl;
    // cout <<arr[4] << endl;

    //2
    int arr2[5] = {1,2,3,4,5};
    for (int i = 0; i < length(arr2); i++)
    {
        cout << arr2[i] << endl;
    }

    

    //3 
    int arr3[] = {1,2,3,4,5,6};
    for (int i = 0; i < length(arr3); i++)
    {
        cout << arr3[i] << endl;
    }
}