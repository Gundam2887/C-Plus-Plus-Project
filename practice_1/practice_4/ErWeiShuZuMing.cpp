#include<iostream>
using namespace std;

//二维数组的名称用途
//1、查看二维数组所占用的内存空间
//2、获取二维数组的首地址

int main(){
    //1、
    int arr[2][3] = {
        {1,2,3},{4,5,6}
    };
    cout << sizeof(arr) << endl;//全部
    cout << sizeof(arr[0]) << endl;//第一行
    cout << sizeof(arr[0][0]) << endl;//第一个
    cout << sizeof(arr)/sizeof(arr[0]) << endl;//行数
    cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl;//列数
    //2、
    cout << arr << endl;
    cout << arr[0] << endl; // 第一行
    cout << arr[1] << endl; // 第二行 与第二行相差 列数 * 数据类型所占字节
    cout << &arr[0][0] << endl;//第一个 &数组元素

}