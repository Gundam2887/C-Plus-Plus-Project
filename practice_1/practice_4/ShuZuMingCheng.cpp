#include<iostream>
using namespace std;

    //1������ͳ�������������ڴ��еĳ���
    //2�����Ի�ȡ�������ڴ��е��׵�ַ
    //3���������Ǹ�����

int main(){
    
    int arr[] = {1,2,3,4,5,6};
    //���鳤��
    cout << sizeof(arr) << endl;
    //ÿ��Ԫ��ռ�ÿռ�
    cout << sizeof(arr[0]) << endl;
    //Ԫ�ظ���
    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    //�鿴�����׵�ַ
    //16����
    cout << arr <<endl;
    //10���� �����������Ϊ���ȶ�ʧ ��ռ�ֽڸ������������
    cout << (long long)arr <<endl;
    //�����x��Ԫ�صĵ�ַ &��������[x-1]
    cout << &arr[2 ] <<endl;
    system("pause");
    return 0;

}