#pragma once
#ifndef LinkList_H
#define LinkList_H

#define OS_API_EXPORT _declspec(dllexport)

typedef struct OS_API_EXPORT Base {
	int val_i;
	unsigned int val_ui;
	long int val_li;
	unsigned long int val_uli;
	long long int val_lli;
	unsigned long long int val_ulli;
	double val_d;
	char val_c;
	bool arr[9];
	char* val_s;
}Node, * PNode;

typedef struct OS_API_EXPORT lib {
	Node data;
	struct lib* front;
	struct lib* next;
}List, * PList;

class OS_API_EXPORT LinkList {
private:
	PList node;
	PList cptr;//操作指针
public:
	LinkList(void);
	LinkList(const LinkList&);
	~LinkList(void);

	/*
	* 判断链表是否为空
	* 为空返回true，否则为false
	*/
	bool emp(void) const;

	/*
	* 显示整个链表及其连接关系
	* 参数为每输出n个节点就换行，若忽略，则n为0，输出方向将为竖向
	* 返回链表的有效节点数
	*/
	int show(int n = 0) const;

	/*
	* 显示当前操作指针指向的节点
	* 返回该节点位置（0为第一个有效节点）
	*/
	int show_this(void) const;

	/*
	* 显示当前链表的简略视图并显示操作指针所指向的节点
	* 返回链表的有效节点数
	*/
	int show_mini(void) const;

	/*
	* 返回当前操作指针距离头节点的位置（在第几个节点，0为第一个有效节点）
	* 若返回负值，则为空表
	*/
	int tell(void) const;

	/*
	* 将操作指针向左移动一个节点并返回移动后所在的节点位置
	* 若为负值，则表示移动后越界，这时操作指针不会移动
	*/
	int L_move(void);

	/*
	* 将操作指针向右移动一个节点并返回移动后所在的节点位置
	* 若为负值，则表示移动后越界，这时操作指针不会移动
	*/
	int R_move(void);

	/*
	* 将操作指针向左或右移动n位
	* flag为0为向左移动，非0则为向右
	* 返回移动后所在的节点位置
	* 若为负值，则表示移动后越界，这时操作指针不会移动
	*/
	int move(int flag, int n);

	/*
	* 将修改指针指向初始位置（头节点）
	*/
	void set(void);

	/*
	* 创建节点
	* flag为位置，0为从头创建，1为从最后创建，非0或1则为自定义位置n（若n超过了链表长度，则视为在最后创建）
	* 若忽略参数，则默认在链表头部创建节点
	* 若忽略第二个参数，则默认在链表头部创建节点
	* 创建成功则会使操作指针指向该节点并返回当前节点的位置（0为第一个有效节点），失败则返回-1
	*/
	int add_node(int flag = 0, int n = 0);

	/*
	* 删除当前操作指针指向的节点，并使操作指针指向上一个节点
	* 删除成功返回true，否则返回false
	*/
	bool del(void);

	/*
	* 修改操作指针指向的节点的值
	* 根据参数类型决定修改该节点中的哪个参数
	* 若修改成功则会返回true，否则为false
	*/
	bool change(int val);
	bool change(unsigned int val);
	bool change(long int val);
	bool change(unsigned long int val);
	bool change(long long int val);
	bool change(unsigned long long int val);
	bool change(double val);
	bool change(char val);
	bool change(const char* val);

	/*旧
	* 查找需要查找的值并作为一个数组返回每个值的位置（升序排列）
	* 若没有该值则返回nullptr
	* 该数组在使用完毕后需要手动释放！
	*/
	/*新
	* 查找需要查找的值并作为返回值返回
	* 若没有该值则返回-1
	* 返回第一个找到存在该值的节点的位置
	*/
	int search(int val) const;
	int search(unsigned int val) const;
	int search(long int val) const;
	int search(unsigned long int val) const;
	int search(long long int val) const;
	int search(unsigned long long int val) const;
	int search(double val) const;
	int search(char val) const;
	int search(const char* val) const;

	/*
	* 删除链表中所有有效节点
	*/
	void clean(void);

	/*
	* 重载
	* 操作指针会指向最后一个被分配的节点
	*/
	const LinkList& operator=(const LinkList&);
};

#endif