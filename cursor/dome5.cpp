#include <iostream>
using namespace std;

// 案例
class AbstractDrink
{

public:
    // 煮水
    virtual void BoilWater() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void Into() = 0;
    // 加入辅料
    virtual void Put() = 0;

    // 制作的过程
    void makeDrink()
    {
        BoilWater();
        Brew();
        Into();
        Put();
    }
};

class Coffee : public AbstractDrink
{
public:
    // 煮水
    virtual void BoilWater()
    {
        cout << "煮矿泉水" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "放入咖啡" << endl;
    }
    // 倒入杯中
    virtual void Into()
    {
        cout << "将水倒入杯中" << endl;
    }
    // 放入
    virtual void Put()
    {
        cout << "将牛奶放入咖啡中" << endl;
    }
};
class Tea : public AbstractDrink
{
public:
    // 煮水
    virtual void BoilWater()
    {
        cout << "煮矿泉水" << endl;
    }
    // 冲泡
    virtual void Brew()
    {
        cout << "放入茶叶" << endl;
    }
    // 倒入杯中
    virtual void Into()
    {
        cout << "将水倒入杯中" << endl;
    }
    // 放入
    virtual void Put()
    {
        cout << "将柠檬放入茶叶中" << endl;
    }
};

// 制作的函数
void doWork(AbstractDrink *abs) // AbstractDrink  *abs = new Tea
{
    abs->makeDrink();
    delete abs;
};
void task01()
{

    doWork(new Tea);
    cout << "------------------" << endl;
    doWork(new Coffee);
}
int main()
{
    task01();
    cin.get();
    return 0;
}