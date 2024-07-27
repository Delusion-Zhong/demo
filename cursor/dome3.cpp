#include <iostream>
using namespace std;

class Animal
{
public:
    // 虚函数
    virtual void Print() = 0;
};
class cat : public Animal
{
    void Print()
    {
        cout << "猫在叫" << endl;
    }
};
void doSpeak(Animal &a)
{
    a.Print();
}
void task()
{
    cat c1;
    doSpeak(c1);
};
int main()
{
    task();
    cin.get();
    return 0;
}