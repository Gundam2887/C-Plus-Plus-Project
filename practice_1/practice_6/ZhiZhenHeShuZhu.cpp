#include<iostream>
using namespace std;

template<class T>
//ָ�������
//����ָ����������е�Ԫ��
int length(T& arr){
    return sizeof(arr)/sizeof(arr[0]);
}

int main() {
    int arr[] = {1,3,5,7,9};

    cout << arr[0] << endl;
    
    int * p = arr;//arr����������׵�ַ

    //����ָ����ʵ�һ��Ԫ��:
    // cout << * p << endl;


    // //����ָ����ʵڶ���Ԫ��:
    // p++;
    // cout << *p << endl;

    for ( int i = 0; i < length(arr); i++)
    {
        cout << * p << endl;
        p++;
    }
    

}