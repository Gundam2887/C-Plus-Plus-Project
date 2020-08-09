#include<iostream>
#include<string>
using namespace std;

/*
设计一个英雄的结构体，包括成员姓名，年龄，性别；
创建结构体数组，数组中存放五名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄升序排序，
最终打印排序后的结果
*/

struct hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(hero h[],int len){
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (h[j].age > h[j+1].age)
            {
                struct hero temp = h[j];
                h[j] = h[j+1];
                h[j+1] =temp;
            }
            
        }
        
    }
    
}
void printoHero(hero h[],int len){
    for (int i = 0; i < len; i++)
    {
        cout << h[i].name << " "
        << h[i].age << " "
        <<h[i].sex << endl;
    }
    
}

int main(){
    hero threeKingdom[] = {
        {"刘备",22,"男"},
        {"貂蝉",16,"女"},
        {"关羽",21,"男"},
        {"张飞",20,"男"},
        {"曹操",23,"男"}
    };
    int len = sizeof(threeKingdom)/sizeof(threeKingdom[0]);
    bubbleSort(threeKingdom,len);
    printoHero(threeKingdom,len);

}