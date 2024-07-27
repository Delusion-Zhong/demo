#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// 写入
void outfile()
{
    ofstream ofs;
    ofs.open("E:\\Vs_Cpp_dome\\cursor\\file\\a.txt", ios::out);
    ofs << "name" << endl;
    ofs << "age" << endl;
    ofs << "sxe" << endl;
    ofs.close();
}
// 读出
void inoutfile()
{
    ifstream ifs;
    ifs.open("E:\\Vs_Cpp_dome\\cursor\\file\\a.txt", ios::in);
    // 第一种
    // string buf;
    // while (getline(ifs, buf))
    // {
    //     /* code */
    //     cout << bufa << endl;
    // }

    // 第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     /* code */
    //     cout << buf << endl;
    // }

    // 第三种
    char buf[1024] = {0};
    while (ifs >> buf)
    {
        cout << buf << endl;
    }

    ifs.close();
};

// 二进制的输入和输出
class Persom
{
public:
    char naem[64];
    int age;
};

void task1()
{
    ofstream ofs("E:\\Vs_Cpp_dome\\cursor\\file\\a.txt", ios::out | ios::binary);
    Persom p{"张三", 18};
    ofs.write((const char *)&p /* 因为 &p 地址是Persom的地址，需要强转成 const char * */, sizeof(p));
    ofs.close();
};
void test2()
{
    // 文件输入流对象 可以通过read函数，以二进制方式读数据
    ifstream ifs("E:\\Vs_Cpp_dome\\cursor\\file\\a.txt", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    Persom p;
    ifs.read((char *)&p, sizeof(p));
    cout << "name " << p.naem << "age" << p.age << endl;
};
int main()
{
    // 输入和输出
    // outfile();
    // inoutfile();

    // 二进制的输入和输出
    //task1();
     test2();
    cin.get();
    return 0;
}
