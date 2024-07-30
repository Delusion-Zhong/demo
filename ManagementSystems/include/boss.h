#pragma once // 防止头文件重复包含
#include <iostream>
#include "worker.h"
using namespace std;
// 老板类
class Boss : public Worker
{
    // 继承worker 要重写worker的纯虚函数
public:
    Boss(int id, string name, int did);

    // 显示个人信息
    virtual void showinfo();

    // 获取岗位信息
    virtual string getDeptname();
};