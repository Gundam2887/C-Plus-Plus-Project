#include<iostream>
#include<string>
using namespace std;

/*
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�
�����ṹ�����飬�����д������Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������
���մ�ӡ�����Ľ��
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
        {"����",22,"��"},
        {"����",16,"Ů"},
        {"����",21,"��"},
        {"�ŷ�",20,"��"},
        {"�ܲ�",23,"��"}
    };
    int len = sizeof(threeKingdom)/sizeof(threeKingdom[0]);
    bubbleSort(threeKingdom,len);
    printoHero(threeKingdom,len);

}