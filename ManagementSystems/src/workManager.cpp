#include <iostream> // 确保包含了必要的头文件
using namespace std;
#include "workManager.h"
// 构造函数
WorkManager::WorkManager()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    // 1.文件不存在
    if (!ifs.is_open()) // 判断文件是否存在
    {
        cout << "文件不存在" << endl;
        // 初始化记录人数
        this->Empnum = 0;
        // 初始化数组指针
        this->EmpArray = nullptr;
        // 初始化文件是否为空
        this->FileIsEmpty = true;
        ifs.close();
        return;
    }

    char ch;
    ifs >> ch;

    // 2.文件存在,数据为空
    if (ifs.eof())
    {
        cout << "文件存在,数据为空" << endl;
        // 初始化记录人数
        this->Empnum = 0;
        // 初始化数组指针
        this->EmpArray = nullptr;
        // 初始化文件是否为空
        this->FileIsEmpty = true;
        ifs.close();
        return;
    }

    // 3.文件存在，存有内容
    int num = this->get_EmpNum();
    cout << "职工人数为 : " << num << endl;
    this->Empnum = num;
    // 开辟空间
    this->EmpArray = new Worker *[this->Empnum];
    this->FileIsEmpty = false;
    // 将文件中的数据，存到数组中
    this->init_Emp();

    //  测试代码
    // for (int i = 0; i < Empnum; i++)
    // {
    //     cout << " 职工编号: " << this->EmpArray[i]->EmployeeNumber
    //          << "\t姓名:  " << this->EmpArray[i]->name
    //          << "\t部门编号: " << this->EmpArray[i]->DoorNumber << endl;
    // }
};

void WorkManager::Show_Menu()
{
    cout << "****************************************" << endl;
    cout << "*******  欢迎使用职工管理系统！  *********" << endl;
    cout << "*********   0.退出管理系统   ************" << endl;
    cout << "*********   1.增加管理系统   ************" << endl;
    cout << "*********   2.显示职工信息   ************" << endl;
    cout << "*********   3.删除离职职工   ************" << endl;
    cout << "*********   4.修改职工信息   ************" << endl;
    cout << "*********   5.查找职工信息   ************" << endl;
    cout << "*********   6.按照编号排序   ************" << endl;
    cout << "*********   7.清空所有文档   ************" << endl;
    cout << "****************************************" << endl;
    cout << endl;
};

void WorkManager::Add_Emp()
{
    system("cls");
    cout << "请输入添加的人数" << endl;
    int emp; // 使用变量接收用户输入的值
    cin >> emp;
    if (emp > 0)
    {
        /* 添加 操作*/

        // 计算空间大小
        int sizenum = this->Empnum + emp; //  新的空间人数=在职人数+新增人数
        // 开辟新空间
        Worker **newSpace = new Worker *[sizenum];

        // 将原来的人数拷贝到新的空间下。
        if (EmpArray != nullptr)
        {
            for (int i = 0; i < this->Empnum; i++)
            {
                newSpace[i] = this->EmpArray[i];
            };
        }

        // 开始添加人数
        for (int i = 0; i < emp; i++)

        {

            int id;         // 编号
            string name;    // 姓名
            int Department; // 部门

            cout << "请输入第" << i + 1 << "个新职工编号" << endl;
            cin >> id;
            cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
            cin >> name;

            cout << "请选择职工岗位：\n"
                 << "1.普通职工    " << "2.经理    " << "3.老板    " << endl;

            cin >> Department;

            Worker *Worker = nullptr;
            switch (Department)
            {
            case 1:
                /* 普通职工 */
                Worker = new Employee(id, name, 1);
                break;
            case 2:
                /* 经理 */
                Worker = new Manager(id, name, 2);
                break;
            case 3:
                /* 老板 */
                Worker = new Boss(id, name, 3);
                break;

            default:
                break;
            };
            newSpace[this->Empnum + i] = Worker;
        }

        // 释放空间
        delete[] EmpArray;

        // 更改新空间的指向
        this->EmpArray = newSpace;
        // 更改在只人数
        this->Empnum = sizenum;

        // 成功添加后 保存到文件中
        this->save();

        // 更新职工不为空
        FileIsEmpty = false;
        // 提示！
        cout << "添加成功:  " << emp << "  新职工" << endl;
    }
    else
    {
        cout << "输入有误,不得小于0" << endl;
    }

    // 清屏操作
    system("pause");
    system("cls");
};
// 保存文件
void WorkManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out); // 写文件
    for (int i = 0; i < Empnum; i++)
    {
        ofs << this->EmpArray[i]->EmployeeNumber << ","
            << this->EmpArray[i]->name << ","
            << this->EmpArray[i]->DoorNumber << "." << endl;
    }

    ofs.close();
};
// 退出程序
void WorkManager::ExitSystem()
{
    cout << "欢迎下次光临!" << endl;
    system("pause");
    exit(0); // 退出程序
};
// 获取人数
int WorkManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int did;
    int num = 0;
    while (ifs >> id && ifs >> name && ifs >> did)
    {
        num++;
    };
    return num;
};

// 初始化职工
void WorkManager::init_Emp()

{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    int id;
    string name;
    int did;
    int index = 0; // 下标索引
    while (ifs >> id && ifs >> name && ifs >> did)
    {
        Worker *Worker = nullptr;
        if (did == 1)
        {
            Worker = new Employee(id, name, did);
        }
        else if (did == 2)
        {
            Worker = new Manager(id, name, did);
        }
        else if (did == 3)
        {
            Worker = new Boss(id, name, did);
        }
        this->EmpArray[index] = Worker;
        index++;
    };
    ifs.close();
}
// 显示职工内容
void WorkManager::Show_Emp()
{
    if (this->FileIsEmpty)
    {
        cout << "文件不存在或者文件为空" << endl;
    }
    else
    {
        for (int i = 0; i < Empnum; i++)
        {
            this->EmpArray[i]->showinfo();
        }
    }
    system("pause");
    system("cls");
};
// 删除职工
void WorkManager::Del_Emp()
{
    if (this->FileIsEmpty)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        cout << "请输入删除的员工编号" << endl;
        int id = 0; // 记录输入的值
        cin >> id;
        int index = this->IsExist(id); //  判断职工是否存在,存在返回员工编号，不存在 返回-1
        if (index != -1)
        {
            /* 数据迁移*/
            for (int i = index; i < this->Empnum; i++)
            {
                this->EmpArray[i] = this->EmpArray[i + 1]; // 通过数组的覆盖进行删除
            }
            this->Empnum--; // 更新

            // 将修改后的文件同步到txt文件中
            this->save();
            cout << "删除成功" << endl;
        }
        else
        {
            cout << "删除错误" << endl;
        }
    }

    system("pause");
    system("cls");
};
// 判断职工是否存在,存在返回员工编号，不存在 返回-1
int WorkManager::IsExist(int id)
{
    int index = -1; // 初始化不存在 - 1
    for (int i = 0; i < this->Empnum; i++)
    {
        /* 通过遍历每个员工的id和传入的id是否相同*/
        if (this->EmpArray[i]->EmployeeNumber == id)
        {
            // 找到了
            index = 1;
            break;
        }
    }
    return index;
};

// 析构函数
WorkManager::~WorkManager()
{
    if (this->EmpArray != nullptr)
    {
        delete[] this->EmpArray;
        this->EmpArray = nullptr;
    }
};
