#include<iostream>
using namespace std;

template<class T>
int lenght(T& arr){
    return sizeof(arr)/sizeof(arr[0]);
}
//Ã°ÅİÅÅĞò

int main(){

    int arr[] = {1,3,2,4,5,6,9,8,7};
    //ÅÅĞòÂÖÊı
    for (int i = 0; i < lenght(arr) - 1; i++)
    {
        //ÄÚ²ãÑ­»·¶Ô±È
        for (int j = 0; j < lenght(arr) - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < lenght(arr); i++)
    {
        cout << arr[i] << "\t";
    }
    
    

}