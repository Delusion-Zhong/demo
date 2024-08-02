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

    // 统计文件中的人数
    int get_EmpNum();

    // 初始化职工
    void init_Emp();

    // 显示职工
    void Show_Emp();

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

    // 删除职工
    void Del_Emp();
    // 判断职工是否存在,存在返回员工编号，不存在 返回-1
    int IsExist(int id);

    // 修改职工
    void Mod_Emp();

    // 查找员工
    void Find_Emp();

    // 排序
    void Srot_Emp();
    // 清空文档
    void Clean_Emp();
    //    析构函数
    ~WorkManager();
};
