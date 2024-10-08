#include <iostream>
using namespace std;

#include "workManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{

    // //测试代码区
    // Worker *worker = nullptr; // 创建一个父类类型的空指针
    // worker = new Employee(1, "张三", 1);
    // worker->showinfo();
    // delete worker;

    //  worker = new Manager(2, "李四", 2);
    // worker->showinfo();

    // delete worker;
    // worker = new Boss(3,"王五", 3);
    // worker->showinfo();
    // delete worker;

    // 实例化一个管理者的对象
    WorkManager wm;

    int choic = 0; // 记录输入的数字

    while (true)
    {
        // 调用展示菜单的成员函数
        wm.Show_Menu();
        cout << " 请输入您的选择:  ";
        cin >> choic;

        switch (choic)
        {
        case 0:              // 退出系统
            wm.ExitSystem(); // 退出管理系统
            break;
        case 1: // 增加职工
            wm.Add_Emp();
            break;
        case 2: // 显示职工
            wm.Show_Emp();
            break;
        case 3: // 删除职工

            wm.Del_Emp();

            break;

        case 4: // 修改职工
            wm.Mod_Emp();
            break;
        case 5: // 查找职工
            wm.Find_Emp();
            break;
        case 6: // 排序
            wm.Srot_Emp();
            break;
        case 7: // 清空文档
            wm.Clean_Emp();
            break;
        default:
            system("cls");
            break;
        }
    }
    cin.get();
    return 0;
}