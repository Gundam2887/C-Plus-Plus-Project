#include<iostream>
using namespace std;

template<class T>

int lenght(T& arr){
     return sizeof(arr)/sizeof(arr[0]);
}
//����Ԫ������
//��������������������ֵ����
int main(){
    int arr[] = {1,3,2,4,5,7,6,8};
    //ֻ�Ǵ�ӡ���ã�Ԫ�ز�δ����
    // int arrLenght = lenght(arr);
    // for (int i = 0; i < lenght(arr) + 1; i++)
    // {
    //     cout << arr[arrLenght - i] << endl;
    // }
    int arrLenght = lenght(arr);
    int start = 0;//��ʼ�±�
    int end = arrLenght - 1;//�����±�

    //whileʵ��

    // while (start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    
    //forʵ��

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