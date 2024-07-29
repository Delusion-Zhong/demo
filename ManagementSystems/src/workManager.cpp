#include <iostream> // 确保包含了必要的头文件
using namespace std;
#include "workManager.h"

WorkManager::WorkManager()
{
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

//退出程序
void WorkManager::ExitSystem()
{
    cout << "欢迎下次光临!"<<endl;
    system("pause");
    exit(0); // 退出程序



};

WorkManager::~WorkManager()
{
};
