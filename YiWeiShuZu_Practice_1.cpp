#include<iostream>
using namespace std;

template<class T>

//��ֻС�������
//��һ�������м�¼5��С������أ�����ӡ���ص�С��
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