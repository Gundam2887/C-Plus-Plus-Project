#include<iostream>
using namespace std;

template<class T>
//指针和数组
//利用指针访问数组中的元素
int length(T& arr){
    return sizeof(arr)/sizeof(arr[0]);
}

int main() {
    int arr[] = {1,3,5,7,9};

    cout << arr[0] << endl;
    
    int * p = arr;//arr就是数组的首地址

    //利用指针访问第一个元素:
    // cout << * p << endl;


    // //利用指针访问第二个元素:
    // p++;
    // cout << *p << endl;

    for ( int i = 0; i < length(arr); i++)
    {
        cout << * p << endl;
        p++;
    }
    

}