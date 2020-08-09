#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//每位老师带五位学生，共有三位老师，需求如下：
/*
设计学生和老师的结构体，其中在老师的结构体中，有老师的姓名
和一个存放五名学生的数组作为成员，学生的成员有姓名、考试分数，
创建数组存放三位老师，通过函数给每个老师及其所带的学生赋值，
最终打印出老师以及所带的学生数据
*/

struct student{
    string name;
    float score;
};
struct teacher{
    string name;
    student s[5];
};

//给学生和老师赋值的函数
void allocateSpace(teacher t[],int len){
    string nameSeed = "ABCDEFG";
    for (int i = 0; i < len; i++)
    {
        t[i].name = "老师";
        t[i].name += nameSeed[i];
        
        for(int j = 0;j < 5 ;j++){
            t[i].s[j].name = "学生";
            t[i].s[j].name += nameSeed[j];

            int random = rand() % 61 + 40;//40~100
            t[i].s[j].score = random;
        }
    }
    
}

void printInfo(teacher t[],int len){
    for (int i = 0; i < len; i++)
    {
        cout << "老师的姓名：" << t[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "学生姓名：" << t[i].s[j].name << " 考试分数：" << t[i].s[j].score << endl;
        }
        
    }
    
}

int main(){
    //随机数种子
    srand((unsigned int)time(NULL));
    teacher t[3];
    int len = sizeof(t)/sizeof(t[0]);
    allocateSpace(t,len);

    printInfo(t,len);

    system("pause");
    return 0;
}