#include<iostream>
#include<string>
using namespace std;

//将成员属性设置为私有
//优点
//1、将所有成员属性设置为私有，可以自己控制读写权限
//2、对于写权限，我们可以检测函数的有效性

class person{
public:
    void setName(string setName){
        name = setName;
    }
    string getName(){
       return name; 
    }
    //设置限制
    void setAge(int setAge){
        if (setAge < 0 || setAge > 150)
        {
            age = 0;
            cout << "输入错误" << endl;
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
    string name; //可读可写
    int age;    //只读
    string lover;//只写
};

int main(){
    person p;
    p.setName("zs");
    cout << p.getName() << endl;
    p.setAge(10);
    cout << p.getAge() << endl;
    p.setLover("fj");

}