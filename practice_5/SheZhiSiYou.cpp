#include<iostream>
#include<string>
using namespace std;

//����Ա��������Ϊ˽��
//�ŵ�
//1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//2������дȨ�ޣ����ǿ��Լ�⺯������Ч��

class person{
public:
    void setName(string setName){
        name = setName;
    }
    string getName(){
       return name; 
    }
    //��������
    void setAge(int setAge){
        if (setAge < 0 || setAge > 150)
        {
            age = 0;
            cout << "�������" << endl;
            return;
        }
        age = setAge;
    }
    int getAge(){
        return age;
    }
    void setLover(string setLover){
        lover = setLover;
    }
private:
    string name; //�ɶ���д
    int age;    //ֻ��
    string lover;//ֻд
};

int main(){
    person p;
    p.setName("zs");
    cout << p.getName() << endl;
    p.setAge(10);
    cout << p.getAge() << endl;
    p.setLover("fj");

}