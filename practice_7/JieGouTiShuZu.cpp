#include<iostream>
#include<string>
using namespace std;

//结构体数组
//语法：
//struct 结构体名 数组名[元素个数] = { {}, {}, ...{}}

struct Student
{
    string name;
    int age;
    float score;
};


int main(){

    Student s1[] ={
        {"李四",18,89},
        {"张三",19,234},
        {"李5",17,19},
        {"李6",16,29},
    };

    //更改结构体内数据

    s1[2].name = "李7";
    s1[2].age = 18;
    s1[2].score = 199;



    int length = sizeof(s1) / sizeof(s1[0]);

    cout << length << endl;

    for (int i = 0; i < length; i++)
    {
       cout << s1[i].name << s1[i].age << s1[i].score << endl;
    }
    
}