#include<iostream>
using namespace std;

//��ά�����������;
//1���鿴��ά������ռ�õ��ڴ�ռ�
//2����ȡ��ά������׵�ַ

int main(){
    //1��
    int arr[2][3] = {
        {1,2,3},{4,5,6}
    };
    cout << sizeof(arr) << endl;//ȫ��
    cout << sizeof(arr[0]) << endl;//��һ��
    cout << sizeof(arr[0][0]) << endl;//��һ��
    cout << sizeof(arr)/sizeof(arr[0]) << endl;//����
    cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl;//����
    //2��
    cout << arr << endl;
    cout << arr[0] << endl; // ��һ��
    cout << arr[1] << endl; // �ڶ��� ��ڶ������ ���� * ����������ռ�ֽ�
    cout << &arr[0][0] << endl;//��һ�� &����Ԫ��

}