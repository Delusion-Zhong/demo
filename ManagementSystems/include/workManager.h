#pragma once // 防止头文件重复包含
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include <fstream>
#define FILENAME "bin/ListOfEmployeesFile.txt"

class WorkManager
{
public:
    // 记录在职人数
    int Empnum;
    // 职工数组的指针
    Worker **EmpArray;

    // 判断文件是否为空
    bool FileIsEmpty;

    // 统计文件中的数
    int get_EmpNum();

    // 初始化职工
    void init_Emp();

    // 构造函数
    WorkManager();
    // 展示菜单
    void Show_Menu();
    // 退出程序
    void ExitSystem();

    // 添加职工的函数
    void Add_Emp();
    // 保存文件
    void save();
    // 析构函数
    ~WorkManager();
};
