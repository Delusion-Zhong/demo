#pragma once // 防止头文件重复包含
#include <iostream>
using namespace std;

class WorkManager
{
public:
    // 构造函数
    WorkManager();
    // 展示菜单
    void Show_Menu();
    //退出程序
    void ExitSystem();
    // 析构函数
    ~WorkManager();
};
