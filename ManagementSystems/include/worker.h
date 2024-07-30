#pragma once // 防止头文件重复包含
#include <iostream>
#include <string>
using namespace std;
class Worker
{
public:
    // 显示个人信息
    virtual void showinfo() = 0;
    // 获取岗位信息
    virtual string getDeptname() = 0;

    int EmployeeNumber; // 职工编号
    string name;        // 姓名
    int DoorNumber;     // 部门编号
};
