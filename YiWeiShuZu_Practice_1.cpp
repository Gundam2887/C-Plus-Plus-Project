#include<iostream>
using namespace std;

template<class T>

//五只小猪称体重
//在一个数组中记录5个小猪的体重，并打印最重的小猪
int length(T& arr){
    return sizeof(arr)/sizeof(arr[0]);
}

int main(){
    int arr[] = {100,200,600,500,300};
    int max = 0;
    for (int i = 0; i < length(arr) - 1; i++){
            if (max < arr[i]){
                max = arr[i];
            }
    }
    cout << max << endl;
    
}