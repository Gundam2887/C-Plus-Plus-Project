#include<iostream>
#include<string>
using namespace std;

//const��ʹ�ó���

struct student{
    string name;
    int age;
    float score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
void printStudentS(const student *s){

    //s->age = 100; ����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�����
    cout <<s->name << " " << s->age << " " << s->score << endl;

}

int main(){
    student s = {"����",10,100};

    //ͨ��������ӡ�ṹ�������Ϣ
    printStudentS(&s);
}