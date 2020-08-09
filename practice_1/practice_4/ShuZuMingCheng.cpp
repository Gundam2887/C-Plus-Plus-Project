#include<iostream>
using namespace std;

    //1、可以统计整个数组在内存中的长度
    //2、可以获取数组在内存中的首地址
    //3、数组名是个常量

int main(){
    
    int arr[] = {1,2,3,4,5,6};
    //数组长度
    cout << sizeof(arr) << endl;
    //每个元素占用空间
    cout << sizeof(arr[0]) << endl;
    //元素个数
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    //查看数组首地址
    //16进制
    cout << arr <<endl;
    //10进制 如果报错是因为精度丢失 用占字节更大的数据类型
    cout << (long long)arr <<endl;
    //数组第x个元素的地址 &数组名称[x-1]
    cout << &arr[2 ] <<endl;
    system("pause");
    return 0;

}