#include<iostream>
#include<string>
using namespace std;

//常量定义不用 = 且不需要 ; 分割
#define Max 1000

struct Person
{
    string name;//姓名
    int sex;//性别: 1、男 2、女
    int age;//年龄
    string phone;//电话
    string addr;//住址
};

struct Addressbooks
{
    //通讯录中保存的联系人数组
    struct Person personArray[Max];
    //通讯录中当前记录联系人个数
    int size;
};

//添加联系人
void addPerson(Addressbooks * abs){
    //判断通讯录是否已满，满了不再添加
    if(abs -> size == Max){
        cout << "通讯录已满，无法添加" << endl;
        return;
    }else
    {
        //添加具体联系人

        //姓名
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        abs -> personArray[abs -> size].name = name;

        //性别
        int sex = 0;
        cout << "请输入姓性别" << endl;
        cout << "1 -- 男  2 -- 女" << endl;
        
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs -> personArray[abs -> size].sex = sex;
                break;
            }
            cout << "错误，请重新输入" << endl;
        }
        //年龄
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs -> personArray[abs -> size].age = age;

        //电话
        cout << "请输入联系电话" << endl;
        string phone;
        cin >> phone;
        abs -> personArray[abs -> size].phone = phone; 

        //住址
        cout << "请输入住址" << endl;
        string addr;
        cin >> addr;
        abs -> personArray[abs -> size].addr = addr;

        //更新通讯录人数
        abs->size++;
        cout << "添加成功 "<< endl;

        system("pause");
        system("cls");//清屏
    }
    
}

//显示联系人
void showPerson(Addressbooks * abs){
    if (abs->size == 0)
    {
        cout << "记录为空" << endl;
    }else
    {
        for(int i = 0;i < abs->size;i++){
            cout << "姓名: " << abs->personArray[i].name <<"\t"; 
            cout << "性别: " << (abs->personArray[i].sex == 1 ? "男" : "女")<< "\t";
            cout << "年龄: " << abs->personArray[i].age << "\t";
            cout << "电话: " << abs->personArray[i].phone << "\t";
            cout << "住址: " << abs->personArray[i].addr << endl;
        }
    }
    system("pause");
    system("cls");//清屏
}

//检测联系人是否存在，存在，返回联系人的下标，不存在，返回-1
int isExist(Addressbooks * abs,string name){
    for (int i = 0; i < abs->size; i++)
    {
        if (abs->personArray[i].name == name)
        {
            return i;
        }else
        {
            return -1;
        }
    }
    
}

//删除指定联系人
void deletePerson(Addressbooks * abs)
{
    cout << "请输入你要删除联系人的名字" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        //查到此人，进行删除操作
        //删除原理：将被删除的数据后面的数据往前覆盖
        for (int i = ret; i < abs -> size; i++)
        {
            //数据前移
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->size--;
        cout << "删除成功" << endl;
    }else
    {
        cout << " 查无此人" << endl;   
    }
    system("pause");
    system("cls");//清屏
}

//查找指定联系人
void findPerson(Addressbooks * abs){
    cout << "请输入你要查找的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        cout << "姓名: " << abs->personArray[ret].name <<"\t"; 
            cout << "性别: " << abs->personArray[ret].sex << "\t";
            cout << "年龄: " << abs->personArray[ret].age << "\t";
            cout << "电话: " << abs->personArray[ret].phone << "\t";
            cout << "住址: " << abs->personArray[ret].addr << endl;
    }else
    {
        cout << " 查无此人" << endl;   
    }
    system("pause");
    system("cls");//清屏
}

//修改指定联系人信息
void modifyPerson(Addressbooks * abs){
    cout << "请输入你要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != 1)
    {
        //姓名
        string name;
        cout << "请输入姓名" << endl;
        cin >> name;
        abs -> personArray[ret].name = name;
        //性别
        int sex = 0;
        cout << "请输入姓性别" << endl;
        cout << "1 -- 男  2 -- 女" << endl;
        
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs -> personArray[ret].sex = sex;
                break;
            }
            cout << "错误，请重新输入" << endl;
        }
        //年龄
        cout << "请输入年龄" << endl;
        int age = 0;
        cin >> age;
        abs -> personArray[ret].age = age;

        //电话
        cout << "请输入联系电话" << endl;
        string phone;
        cin >> phone;
        abs -> personArray[ret].phone = phone; 

        //住址
        cout << "请输入住址" << endl;
        string addr;
        cin >> addr;
        abs -> personArray[ret].addr = addr;

        cout << "修改成功" << endl;
    }else
    {
        cout << " 查无此人" << endl;  
    }
    system("pause");
    system("cls");
}

//清空联系人
//清空原理 伪清空 实际上数据并未清空，将联系人数量重制为0，
//使程序查询不到，将联系人数恢复可将未覆盖的数据还原
void cleanPerson(Addressbooks * abs){
    abs->size = 0;
    cout << "通讯录以清空" << endl;
    system("pause");
    system("cls");
}

//菜单
void showMenu(){
    cout << "*************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "*************************" << endl;
}

//删除指定联系人

int main(){

    //通讯录结构体变量
    Addressbooks abs;
    abs.size = 0;


    int select = 0;//创建用户选择输入的变量
    while (1)
    {
        //菜单调用
        showMenu();
        cin >> select;
        switch(select){
            case 1:
                addPerson(&abs);
                break;//添加联系人
            case 2:
                showPerson(&abs);
                break;//显示联系人
            case 3:
                deletePerson(&abs);
                break;//删除联系人
            case 4:
                findPerson(&abs);
                break;//查找联系人
            case 5:
                modifyPerson(&abs);
                break;//修改联系人
            case 6:
                cleanPerson(&abs);
                break;//清空联系人 
            case 0:
                cout << "已退出" << endl;
                system("pause");
                return 0;
                break;//退出通讯录 
            default:break;
        }
    }

    system("pause");
    return 0;
}