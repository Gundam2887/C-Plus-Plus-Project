#include<iostream>
using namespace std;

//����������
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class cube{
public:
    //������ֵ
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
    //���
    int claculateS(){
        return 2 * l * w + 2 * l * h + 2 * w * h;
    }
    //���
    int calculateV(){
        return l * w * h; 
    }
private:
    int l;//��
    int w;//��
    int h;//��
};

bool isSame(cube &c1,cube &c2){
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
        cout << "���" << endl;
    }else
    {
        cout << "�����" << endl;
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