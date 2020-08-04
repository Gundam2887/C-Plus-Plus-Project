#include<iostream>
using namespace std;

template<class T>

int lenght(T& arr){
     return sizeof(arr)/sizeof(arr[0]);
}
//数组元素逆置
//本质上是三个变量的数值交换
int main(){
    int arr[] = {1,3,2,4,5,7,6,8};
    //只是打印逆置，元素并未逆置
    // int arrLenght = lenght(arr);
    // for (int i = 0; i < lenght(arr) + 1; i++)
    // {
    //     cout << arr[arrLenght - i] << endl;
    // }
    int arrLenght = lenght(arr);
    int start = 0;//开始下标
    int end = arrLenght - 1;//结束下标

    //while实现

    // while (start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    
    //for实现

    for (int i = 0; i < arrLenght; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arrLenght - 1];
        arr[arrLenght - 1] = temp;
        arrLenght--;
    }
    for (int i = 0; i < lenght(arr); i++)
    {
        cout << arr[i] << endl;
    }
}