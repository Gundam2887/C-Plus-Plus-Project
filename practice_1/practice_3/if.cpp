#include<iostream>
using namespace std;

int main(){
    int score = 0;
    cout << "请输入您的分数" <<endl;
    cin >> score;
    if (score > 600)
    {
        cout << "一本" << endl;
        if(score > 700){
            cout << "清北" << endl;
            
        }
    }else if(score >400){
        cout << "二本" << endl;
    }else{
        cout << "带专人上人" << endl;
    }
    system("pause");
    return 0;
}