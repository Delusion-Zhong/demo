#include <iostream> // 确保包含了必要的头文件
using namespace std;
#include "employee.h"
Employee::Employee(int id, string name, int did)
{
    this->EmployeeNumber = id; // 职工编号
    this->name = name;         // 姓名
    this->DoorNumber = did;    // 部门编号
};

// 显示个人信息
void Employee::showinfo()

{
    cout << "职工编号" << this->EmployeeNumber
         << "\t姓名" << this->name
         << "\t部门信息" << this->getDeptname()
         << "\t岗位职责: 完成经理安排的任务" << endl;
}

// 获取岗位信息
string Employee::getDeptname()
{
    return string("员工");
}