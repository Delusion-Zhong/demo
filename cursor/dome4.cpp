#include <iostream>
using namespace std;
// 使用多态写一个计算器
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int num1;
    int num2;
};
// 加法
class AddCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 + num2;
    }
};
// 减法
class SubCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 - num2;
    }
};
// 乘法
class MulCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 * num2;
    }
};
// 除法
class DivCalculator : public AbstractCalculator
{
public:
    int getResult()
    {
        return num1 / num2;  
    }
};
void task()
{
    // 多态的使用条件是
    // 使用父类的指针或者只用引用来指向子类的对象

    // 加法
    AbstractCalculator *sub = new AddCalculator;
    sub->num1 = 10;
    sub->num2 = 20;
    cout << sub->num1 << "+" << sub->num2 << "=" << sub->getResult() << endl;
    delete sub;

}
int main()
{
    task();
    cin.get();
    return 0;
}