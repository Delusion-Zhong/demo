#include <iostream>
#include "workManager.h"
using namespace std;

int main()
{

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
            break;
        case 2: // 显示职工
            break;
        case 3: // 删除职工
            break;
        case 4: // 修改职工
            break;
        case 5: // 查找职工
            break;
        case 6: // 排序
            break;
        case 7: // 清空文档
            break;
        default:
            system("cls");
            break;
        }
    }
    cin.get();
    return 0;
}
