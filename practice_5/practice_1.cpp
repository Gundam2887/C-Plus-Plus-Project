#include<iostream>
using namespace std;

//设置立方体
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等

class cube{
public:
    //基本数值
    void setL(int setL){
        l = setL;
    }
    int getL(){
        return l;
    }
    void setW(int setW){
        w = setW;
    }
    int getW(){
        return w;
    }
    void setH(int setH){
        h = setH;
    }
    int getH(){
        return h;
    }
    //面积
    int claculateS(){
        return 2 * l * w + 2 * l * h + 2 * w * h;
    }
    //体积
    int calculateV(){
        return l * w * h; 
    }
private:
    int l;//长
    int w;//宽
    int h;//高
};

bool isSame(cube &c1,cube &c2){
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
        cout << "相等" << endl;
    }else
    {
        cout << "不相等" << endl;
    }
}

int main(){
    cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    cout << c1.claculateS() << endl;
    cout << c1.calculateV() << endl;

    cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);
    isSame(c1,c2);
    system("pause");
    return 0;
}