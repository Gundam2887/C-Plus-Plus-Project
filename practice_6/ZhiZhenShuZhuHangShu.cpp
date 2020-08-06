#include<iostream>
using namespace std;

//封装一个函数，利用冒泡排序，实现对模型数组的升序排序
//int arr[] = {4,3,9,6,1,5,2,8,7}
void bubbleSort(int * arr , int lenght){

    for (int i = 0; i < lenght-1; i++)
    {
        for (int j = 0; j < lenght - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    

}
void printArray(int * arr,int length){
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {4,3,9,6,1,5,2,8,7};
    int length = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,length);
    printArray(arr,length);
    system("pause");
    return 0;
    
}