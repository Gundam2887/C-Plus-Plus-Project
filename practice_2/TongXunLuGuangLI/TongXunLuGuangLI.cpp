#include<iostream>
#include<string>
using namespace std;

//�������岻�� = �Ҳ���Ҫ ; �ָ�
#define Max 1000

struct Person
{
    string name;//����
    int sex;//�Ա�: 1���� 2��Ů
    int age;//����
    string phone;//�绰
    string addr;//סַ
};

struct Addressbooks
{
    //ͨѶ¼�б������ϵ������
    struct Person personArray[Max];
    //ͨѶ¼�е�ǰ��¼��ϵ�˸���
    int size;
};

//�����ϵ��
void addPerson(Addressbooks * abs){
    //�ж�ͨѶ¼�Ƿ����������˲������
    if(abs -> size == Max){
        cout << "ͨѶ¼�������޷����" << endl;
        return;
    }else
    {
        //��Ӿ�����ϵ��

        //����
        string name;
        cout << "����������" << endl;
        cin >> name;
        abs -> personArray[abs -> size].name = name;

        //�Ա�
        int sex = 0;
        cout << "���������Ա�" << endl;
        cout << "1 -- ��  2 -- Ů" << endl;
        
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs -> personArray[abs -> size].sex = sex;
                break;
            }
            cout << "��������������" << endl;
        }
        //����
        cout << "����������" << endl;
        int age = 0;
        cin >> age;
        abs -> personArray[abs -> size].age = age;

        //�绰
        cout << "��������ϵ�绰" << endl;
        string phone;
        cin >> phone;
        abs -> personArray[abs -> size].phone = phone; 

        //סַ
        cout << "������סַ" << endl;
        string addr;
        cin >> addr;
        abs -> personArray[abs -> size].addr = addr;

        //����ͨѶ¼����
        abs->size++;
        cout << "��ӳɹ� "<< endl;

        system("pause");
        system("cls");//����
    }
    
}

//��ʾ��ϵ��
void showPerson(Addressbooks * abs){
    if (abs->size == 0)
    {
        cout << "��¼Ϊ��" << endl;
    }else
    {
        for(int i = 0;i < abs->size;i++){
            cout << "����: " << abs->personArray[i].name <<"\t"; 
            cout << "�Ա�: " << (abs->personArray[i].sex == 1 ? "��" : "Ů")<< "\t";
            cout << "����: " << abs->personArray[i].age << "\t";
            cout << "�绰: " << abs->personArray[i].phone << "\t";
            cout << "סַ: " << abs->personArray[i].addr << endl;
        }
    }
    system("pause");
    system("cls");//����
}

//�����ϵ���Ƿ���ڣ����ڣ�������ϵ�˵��±꣬�����ڣ�����-1
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

//ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs)
{
    cout << "��������Ҫɾ����ϵ�˵�����" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        //�鵽���ˣ�����ɾ������
        //ɾ��ԭ������ɾ�������ݺ����������ǰ����
        for (int i = ret; i < abs -> size; i++)
        {
            //����ǰ��
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->size--;
        cout << "ɾ���ɹ�" << endl;
    }else
    {
        cout << " ���޴���" << endl;   
    }
    system("pause");
    system("cls");//����
}

//����ָ����ϵ��
void findPerson(Addressbooks * abs){
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != -1)
    {
        cout << "����: " << abs->personArray[ret].name <<"\t"; 
            cout << "�Ա�: " << abs->personArray[ret].sex << "\t";
            cout << "����: " << abs->personArray[ret].age << "\t";
            cout << "�绰: " << abs->personArray[ret].phone << "\t";
            cout << "סַ: " << abs->personArray[ret].addr << endl;
    }else
    {
        cout << " ���޴���" << endl;   
    }
    system("pause");
    system("cls");//����
}

//�޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks * abs){
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret != 1)
    {
        //����
        string name;
        cout << "����������" << endl;
        cin >> name;
        abs -> personArray[ret].name = name;
        //�Ա�
        int sex = 0;
        cout << "���������Ա�" << endl;
        cout << "1 -- ��  2 -- Ů" << endl;
        
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs -> personArray[ret].sex = sex;
                break;
            }
            cout << "��������������" << endl;
        }
        //����
        cout << "����������" << endl;
        int age = 0;
        cin >> age;
        abs -> personArray[ret].age = age;

        //�绰
        cout << "��������ϵ�绰" << endl;
        string phone;
        cin >> phone;
        abs -> personArray[ret].phone = phone; 

        //סַ
        cout << "������סַ" << endl;
        string addr;
        cin >> addr;
        abs -> personArray[ret].addr = addr;

        cout << "�޸ĳɹ�" << endl;
    }else
    {
        cout << " ���޴���" << endl;  
    }
    system("pause");
    system("cls");
}

//�����ϵ��
//���ԭ�� α��� ʵ�������ݲ�δ��գ�����ϵ����������Ϊ0��
//ʹ�����ѯ����������ϵ�����ָ��ɽ�δ���ǵ����ݻ�ԭ
void cleanPerson(Addressbooks * abs){
    abs->size = 0;
    cout << "ͨѶ¼�����" << endl;
    system("pause");
    system("cls");
}

//�˵�
void showMenu(){
    cout << "*************************" << endl;
    cout << "***** 1�������ϵ�� *****" << endl;
    cout << "***** 2����ʾ��ϵ�� *****" << endl;
    cout << "***** 3��ɾ����ϵ�� *****" << endl;
    cout << "***** 4��������ϵ�� *****" << endl;
    cout << "***** 5���޸���ϵ�� *****" << endl;
    cout << "***** 6�������ϵ�� *****" << endl;
    cout << "***** 0���˳�ͨѶ¼ *****" << endl;
    cout << "*************************" << endl;
}

//ɾ��ָ����ϵ��

int main(){

    //ͨѶ¼�ṹ�����
    Addressbooks abs;
    abs.size = 0;


    int select = 0;//�����û�ѡ������ı���
    while (1)
    {
        //�˵�����
        showMenu();
        cin >> select;
        switch(select){
            case 1:
                addPerson(&abs);
                break;//�����ϵ��
            case 2:
                showPerson(&abs);
                break;//��ʾ��ϵ��
            case 3:
                deletePerson(&abs);
                break;//ɾ����ϵ��
            case 4:
                findPerson(&abs);
                break;//������ϵ��
            case 5:
                modifyPerson(&abs);
                break;//�޸���ϵ��
            case 6:
                cleanPerson(&abs);
                break;//�����ϵ�� 
            case 0:
                cout << "���˳�" << endl;
                system("pause");
                return 0;
                break;//�˳�ͨѶ¼ 
            default:break;
        }
    }

    system("pause");
    return 0;
}