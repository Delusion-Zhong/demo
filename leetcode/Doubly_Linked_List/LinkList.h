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
	PList cptr;//����ָ��
public:
	LinkList(void);
	LinkList(const LinkList&);
	~LinkList(void);

	/*
	* �ж������Ƿ�Ϊ��
	* Ϊ�շ���true������Ϊfalse
	*/
	bool emp(void) const;

	/*
	* ��ʾ�������������ӹ�ϵ
	* ����Ϊÿ���n���ڵ�ͻ��У������ԣ���nΪ0���������Ϊ����
	* �����������Ч�ڵ���
	*/
	int show(int n = 0) const;

	/*
	* ��ʾ��ǰ����ָ��ָ��Ľڵ�
	* ���ظýڵ�λ�ã�0Ϊ��һ����Ч�ڵ㣩
	*/
	int show_this(void) const;

	/*
	* ��ʾ��ǰ����ļ�����ͼ����ʾ����ָ����ָ��Ľڵ�
	* �����������Ч�ڵ���
	*/
	int show_mini(void) const;

	/*
	* ���ص�ǰ����ָ�����ͷ�ڵ��λ�ã��ڵڼ����ڵ㣬0Ϊ��һ����Ч�ڵ㣩
	* �����ظ�ֵ����Ϊ�ձ�
	*/
	int tell(void) const;

	/*
	* ������ָ�������ƶ�һ���ڵ㲢�����ƶ������ڵĽڵ�λ��
	* ��Ϊ��ֵ�����ʾ�ƶ���Խ�磬��ʱ����ָ�벻���ƶ�
	*/
	int L_move(void);

	/*
	* ������ָ�������ƶ�һ���ڵ㲢�����ƶ������ڵĽڵ�λ��
	* ��Ϊ��ֵ�����ʾ�ƶ���Խ�磬��ʱ����ָ�벻���ƶ�
	*/
	int R_move(void);

	/*
	* ������ָ����������ƶ�nλ
	* flagΪ0Ϊ�����ƶ�����0��Ϊ����
	* �����ƶ������ڵĽڵ�λ��
	* ��Ϊ��ֵ�����ʾ�ƶ���Խ�磬��ʱ����ָ�벻���ƶ�
	*/
	int move(int flag, int n);

	/*
	* ���޸�ָ��ָ���ʼλ�ã�ͷ�ڵ㣩
	*/
	void set(void);

	/*
	* �����ڵ�
	* flagΪλ�ã�0Ϊ��ͷ������1Ϊ����󴴽�����0��1��Ϊ�Զ���λ��n����n�����������ȣ�����Ϊ����󴴽���
	* �����Բ�������Ĭ��������ͷ�������ڵ�
	* �����Եڶ�����������Ĭ��������ͷ�������ڵ�
	* �����ɹ����ʹ����ָ��ָ��ýڵ㲢���ص�ǰ�ڵ��λ�ã�0Ϊ��һ����Ч�ڵ㣩��ʧ���򷵻�-1
	*/
	int add_node(int flag = 0, int n = 0);

	/*
	* ɾ����ǰ����ָ��ָ��Ľڵ㣬��ʹ����ָ��ָ����һ���ڵ�
	* ɾ���ɹ�����true�����򷵻�false
	*/
	bool del(void);

	/*
	* �޸Ĳ���ָ��ָ��Ľڵ��ֵ
	* ���ݲ������;����޸ĸýڵ��е��ĸ�����
	* ���޸ĳɹ���᷵��true������Ϊfalse
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

	/*��
	* ������Ҫ���ҵ�ֵ����Ϊһ�����鷵��ÿ��ֵ��λ�ã��������У�
	* ��û�и�ֵ�򷵻�nullptr
	* ��������ʹ����Ϻ���Ҫ�ֶ��ͷţ�
	*/
	/*��
	* ������Ҫ���ҵ�ֵ����Ϊ����ֵ����
	* ��û�и�ֵ�򷵻�-1
	* ���ص�һ���ҵ����ڸ�ֵ�Ľڵ��λ��
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
	* ɾ��������������Ч�ڵ�
	*/
	void clean(void);

	/*
	* ����
	* ����ָ���ָ�����һ��������Ľڵ�
	*/
	const LinkList& operator=(const LinkList&);
};

#endif