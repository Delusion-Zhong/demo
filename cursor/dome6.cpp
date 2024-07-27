#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "Animal的构造函数调用" << endl;
    }
    // virtual ~Animal() // 虚析构函数
    // {
    //     cout << "Animal的虚析构函数调用" << endl;
    // }

     // 纯虚析构是需要声明也需要实现     
     // 有了纯虚析构 之后 这个类就是抽象类 ，无法实例化对象
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};
Animal::~Animal()
{
    cout << "Animal的纯虚析构函数调用" << endl;
}
class Cat : public Animal
{
public:
    Cat(string a)
    {
        cout << "Cat 的析构造函数调用" << endl;
        name = new string(a);
    }

    virtual void speak()
    {
        cout << *name << "小猫在说话" << endl; // 在这里这里使用 指针指向内存中的值
    }
    string *name; // 使用指针创建并维护， 在构造函数中进行new 开辟内存
    ~Cat()
    {
        if (name != nullptr)
        {
            /* code */
            cout << "Cat 的析构函数调用" << endl;
            delete name;
            name = nullptr;
        }
    }
};

void task01()
{
    Animal *A = new Cat("Tom");
    A->speak();
    delete A;
}
int main()
{
    task01();
    cin.get();
    return 0;
}