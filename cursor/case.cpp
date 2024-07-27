#include <iostream>
using namespace std;

// 抽象三个零件
class Cpu
{
public:
    // 抽象CPU计算函数
    virtual void Compute() = 0;
};

class Graphics
{
public:
    // 抽象显卡计算函数
    virtual void VideoCard() = 0;
};

class Memory
{
public:
    // 抽象内存函数
    virtual void MemorySticks() = 0;
};

// 电脑类
class Computer
{
public:
    // 构造函数中传入三个零件的指针
    Computer(Cpu *cpu, Graphics *graphics, Memory *memory)
        : cpu(cpu), graphics(graphics), memory(memory)
    {
    }

    // 提供工作函数
    void work()
    {
        // 让零件工作起来，调用接口
        cpu->Compute();
        graphics->VideoCard();
        memory->MemorySticks();
    }
    // 使用析构函数释放开辟在堆区的内存空间
    ~Computer()
    {
        if (cpu != nullptr)
        {
            /* code */
            delete cpu;
            cpu = nullptr;
        }
        if (graphics != nullptr)
        {
            /* code */
            delete graphics;
            graphics = nullptr;
        }
        if (memory != nullptr)
        {
            /* code */
            delete memory;
            memory = nullptr;
        }
    }

private:
    Cpu *cpu;           // CPU的指针
    Graphics *graphics; // 显卡的指针
    Memory *memory;     // 内存条的指针
};

// 零件的厂商
// Intel的厂商
class IntelCpu : public Cpu // CPU
{
public:
    // CPU计算函数
    void Compute() override
    {
        cout << "Intel的CPU计算" << endl;
    }
};

class IntelGraphics : public Graphics // 显卡
{
public:
    void VideoCard() override
    {
        cout << "Intel的显卡开始计算" << endl;
    }
};

class IntelMemory : public Memory // 内存条
{
public:
    void MemorySticks() override
    {
        cout << "Intel的内存开始计算" << endl;
    }
};

// 联想的厂商
class LenovoCpu : public Cpu // CPU
{
public:
    // CPU计算函数
    void Compute() override
    {
        cout << "Lenovo的CPU开始计算" << endl;
    }
};

class LenovoGraphics : public Graphics // 显卡
{
public:
    void VideoCard() override
    {
        cout << "Lenovo的显卡开始计算" << endl;
    }
};

class LenovoMemory : public Memory // 内存条
{
public:
    void MemorySticks() override
    {
        cout << "Lenovo的内存开始计算" << endl;
    }
};

void DemoAssemble()
{
    // Cpu *intelCpu = new IntelCpu;
    // Graphics *intelGraphics = new IntelGraphics;
    // Memory *intelMemory = new IntelMemory;

    Computer *computer1 = new Computer( new IntelCpu, new IntelGraphics,new IntelMemory);
    computer1->work();
    // 释放内存
    delete computer1;
    Computer *computer2 = new Computer(new LenovoCpu, new LenovoGraphics, new LenovoMemory);
    computer2->work();
    delete computer2;
}

int main()
{
    DemoAssemble();
    cin.get();
    return 0;
}
