#include"pch.h"
#include<iostream>
#include<cstring>
#include"LinkList.h"

LinkList::LinkList(void)
{
	node = new List;
	node->data.val_s = new char[1];
	node->data.val_s[0] = '\0';
	node->front = nullptr;
	node->next = nullptr;
	cptr = node;
}

LinkList::LinkList(const LinkList& tem)
{
	this->LinkList::LinkList();
	PList node;
	PList x = tem.node->next;
	PList x1 = this->node;
	while (x != nullptr)
	{
		node = new List;
		for (int count = 0; count < 9; count++)
			node->data.arr[count] = x->data.arr[count];
		node->data.val_s = new char[strlen(x->data.val_s) + 1];
		if (node->data.arr[0])
			node->data.val_i = x->data.val_i;
		if (node->data.arr[1])
			node->data.val_ui = x->data.val_ui;
		if (node->data.arr[2])
			node->data.val_li = x->data.val_li;
		if (node->data.arr[3])
			node->data.val_uli = x->data.val_uli;
		if (node->data.arr[4])
			node->data.val_lli = x->data.val_lli;
		if (node->data.arr[5])
			node->data.val_ulli = x->data.val_ulli;
		if (node->data.arr[6])
			node->data.val_d = x->data.val_d;
		if (node->data.arr[7])
			node->data.val_c = x->data.val_c;
		if (node->data.arr[8])
			strcpy_s(node->data.val_s, strlen(x->data.val_s) + 1, x->data.val_s);
		node->front = x1;
		node->next = x1->next;
		x1->next = node;
		x = x->next;
		x1 = x1->next;
	}
	cptr = x1;
}

LinkList::~LinkList(void)
{
	clean();
	delete[] cptr->data.val_s;
	delete cptr;
}

bool LinkList::emp(void) const
{
	return node->next == nullptr;
}

int LinkList::show(int n) const
{
	if (emp())
		return 0;
	PList tem = node->next;
	int counter = 1;
	if (!n)
	{
		std::cout << std::endl << "============{HEAD}============" << std::endl;
		while (tem != nullptr)
		{
			std::cout << "  *                        |" << std::endl;
			std::cout << " * *                       |" << std::endl;
			std::cout << "* * *                    * * *" << std::endl;
			std::cout << "  |                       * *" << std::endl;
			std::cout << "  |                        *" << std::endl;
			std::cout << "------------------------------" << std::endl;
			if (tem->data.arr[0])
				std::cout << tem->data.val_i << std::endl;
			if (tem->data.arr[1])
				std::cout << tem->data.val_ui << std::endl;
			if (tem->data.arr[2])
				std::cout << tem->data.val_li << std::endl;
			if (tem->data.arr[3])
				std::cout << tem->data.val_uli << std::endl;
			if (tem->data.arr[4])
				std::cout << tem->data.val_lli << std::endl;
			if (tem->data.arr[5])
				std::cout << tem->data.val_ulli << std::endl;
			if (tem->data.arr[6])
				std::cout << tem->data.val_d << std::endl;
			if (tem->data.arr[7])
				std::cout << tem->data.val_c << std::endl;
			if (tem->data.arr[8])
				std::cout << tem->data.val_s << std::endl;
			std::cout << "------------------------------" << std::endl;
			tem = tem->next;
			counter++;
		}
		std::cout << "              |" << std::endl;
		std::cout << "              |" << std::endl;
		std::cout << "            * * *" << std::endl;
		std::cout << "             * *" << std::endl;
		std::cout << "              *" << std::endl;
		std::cout << "============{NULL}============" << std::endl;
	}
	else
	{
		std::cout << std::endl << "{ HEAD }";
		while (tem != nullptr)
		{
			std::cout << "<-->{ ";
			if (tem->data.arr[0])
				std::cout << tem->data.val_i << " ";
			if (tem->data.arr[1])
				std::cout << tem->data.val_ui << " ";
			if (tem->data.arr[2])
				std::cout << tem->data.val_li << " ";
			if (tem->data.arr[3])
				std::cout << tem->data.val_uli << " ";
			if (tem->data.arr[4])
				std::cout << tem->data.val_lli << " ";
			if (tem->data.arr[5])
				std::cout << tem->data.val_ulli << " ";
			if (tem->data.arr[6])
				std::cout << tem->data.val_d << " ";
			if (tem->data.arr[7])
				std::cout << tem->data.val_c << " ";
			if (tem->data.arr[8])
				std::cout << tem->data.val_s;
			std::cout << " }";
			if (counter % n == 0 && tem->next != nullptr)
				std::cout << std::endl;
			tem = tem->next;
			counter++;
		}
		std::cout << "<-->{ NULL }" << std::endl;
	}
	return counter;
}

int LinkList::show_this(void) const
{
	if (emp())
		return -1;
	std::cout << std::endl << "Cptr->data:" << std::endl << "------------------------------" << std::endl;
	if (cptr->data.arr[0])
		std::cout << cptr->data.val_i << std::endl;
	if (cptr->data.arr[1])
		std::cout << cptr->data.val_ui << std::endl;
	if (cptr->data.arr[2])
		std::cout << cptr->data.val_li << std::endl;
	if (cptr->data.arr[3])
		std::cout << cptr->data.val_uli << std::endl;
	if (cptr->data.arr[4])
		std::cout << cptr->data.val_lli << std::endl;
	if (cptr->data.arr[5])
		std::cout << cptr->data.val_ulli << std::endl;
	if (cptr->data.arr[6])
		std::cout << cptr->data.val_d << std::endl;
	if (cptr->data.arr[7])
		std::cout << cptr->data.val_c << std::endl;
	if (cptr->data.arr[8])
		std::cout << cptr->data.val_s << std::endl;
	std::cout << "------------------------------" << std::endl;
	return tell();
}

int LinkList::show_mini(void) const
{
	int counter = 0;
	PList tem = node->next;
	std::cout << std::endl << "{ HEAD }";
	if (node == cptr)
		std::cout << "<---Cptr" << std::endl;
	else
		std::cout << std::endl;
	while (tem != nullptr)
	{
		std::cout << "  <-->" << std::endl;
		std::cout << "{ Node }";
		if (tem == cptr)
			std::cout << "<---Cptr" << std::endl;
		else
			std::cout << std::endl;
		counter++;
		tem = tem->next;
	}
	std::cout << "  --->" << std::endl;
	std::cout << "{ NULL }" << std::endl;
	return counter;
}

int LinkList::tell(void) const
{
	PList tem = this->node;
	int counter = -1;
	while (tem != cptr)
	{
		tem = tem->next;
		counter++;
	}
	return counter;
}

int LinkList::L_move(void)
{
	if (cptr->front == node || cptr->front == nullptr)
		return -1;
	cptr = cptr->front;
	return tell();
	
}

int LinkList::R_move(void)
{
	if (cptr->next == nullptr)
		return -1;
	cptr = cptr->next;
	return tell();
}

int LinkList::move(int flag, int n)
{
	PList tem = cptr;
	if (!flag)
	{
		while (n--)
			if (L_move() == -1)
			{
				cptr = tem;
				return -1;
			}
	}
	else
	{
		while (n--)
			if (R_move() == -1)
			{
				cptr = tem;
				return -1;
			}
	}
	return tell();
}

void LinkList::set(void)
{
	cptr = node;
}

int LinkList::add_node(int flag, int n)
{
	PList node;
	PList tem = this->node;
	node = new List;
	node->data.val_s = new char[1];
	node->data.val_s[0] = '\0';
	for (int count = 0; count < 9; count++)
		node->data.arr[count] = false;
	switch (flag)
	{
	case 0:
		node->front = tem;
		node->next = tem->next;
		if (!emp())
			tem->next->front = node;
		tem->next = node;
		break;
	case 1:
		while (tem->next != nullptr)
			tem = tem->next;
		node->front = tem;
		node->next = tem->next;
		tem->next = node;
		break;
	default:
		while (tem->next != nullptr && n != 0)
		{
			tem = tem->next;
			n--;
		}
		node->front = tem;
		node->next = tem->next;
		tem->next = node;
	}
	cptr = node;
	return tell();
}

bool LinkList::del(void)
{
	if (emp() || cptr == node)
		return false;
	PList tem = cptr;
	cptr = cptr->front;
	if (tem->next != nullptr)
		tem->next->front = tem->front;
	cptr->next = tem->next;
	delete[] tem->data.val_s;
	delete tem;
	return true;
}

bool LinkList::change(int val)
{
	if (emp())
		return false;
	cptr->data.val_i = val;
	cptr->data.arr[0] = true;
	return true;
}

bool LinkList::change(unsigned int val)
{
	if (emp())
		return false;
	cptr->data.val_ui = val;
	cptr->data.arr[1] = true;;
	return true;
}

bool LinkList::change(long int val)
{
	if (emp())
		return false;
	cptr->data.val_li = val;
	cptr->data.arr[2] = true;
	return true;
}

bool LinkList::change(unsigned long int val)
{
	if (emp())
		return false;
	cptr->data.val_uli = val;
	cptr->data.arr[3] = true;
	return true;
}

bool LinkList::change(long long int val)
{
	if (emp())
		return false;
	cptr->data.val_lli = val;
	cptr->data.arr[4] = true;
	return true;
}

bool LinkList::change(unsigned long long int val)
{
	if (emp())
		return false;
	cptr->data.val_ulli = val;
	cptr->data.arr[5] = true;
	return true;
}

bool LinkList::change(double val)
{
	if (emp())
		return false;
	cptr->data.val_d = val;
	cptr->data.arr[6] = true;
	return true;
}

bool LinkList::change(char val)
{
	if (emp())
		return false;
	cptr->data.val_c = val;
	cptr->data.arr[7] = true;
	return true;
}

bool LinkList::change(const char* val)
{
	if (emp())
		return false;
	delete[] cptr->data.val_s;
	cptr->data.val_s = new char[strlen(val) + 1];
	strcpy_s(cptr->data.val_s, strlen(val) + 1, val);
	cptr->data.arr[8] = true;
	return true;
}

int LinkList::search(int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_i != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(unsigned int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_ui != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(long int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_li != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(unsigned long int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_uli != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(long long int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_lli != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(unsigned long long int val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_ulli != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(double val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_d != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(char val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && tem->data.val_c != val)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

int LinkList::search(const char* val) const
{
	int counter = 0;
	PList tem = node->next;
	while (tem != nullptr && strcmp(tem->data.val_s, val) != 0)
	{
		tem = tem->next;
		counter++;
	}
	return tem == nullptr ? -1 : counter;
}

void LinkList::clean(void)
{
	if (emp())
		return;
	PList tem = node->next;
	PList x;
	while (tem != nullptr)
	{
		x = tem->next;
		delete[] tem->data.val_s;
		delete tem;
		tem = x;
	}
	node->next = nullptr;
	set();
}

const LinkList& LinkList::operator=(const LinkList& tem)
{
	if (this == &tem || tem.node->next == nullptr)
		return *this;
	PList node;
	PList x = tem.node->next;
	PList x1 = this->node;
	clean();
	while (x != nullptr)
	{
		node = new List;
		for (int count = 0; count < 9; count++)
			node->data.arr[count] = x->data.arr[count];
		node->data.val_s = new char[strlen(x->data.val_s) + 1];
		if (node->data.arr[0])
			node->data.val_i = x->data.val_i;
		if (node->data.arr[1])
			node->data.val_ui = x->data.val_ui;
		if (node->data.arr[2])
			node->data.val_li = x->data.val_li;
		if (node->data.arr[3])
			node->data.val_uli = x->data.val_uli;
		if (node->data.arr[4])
			node->data.val_lli = x->data.val_lli;
		if (node->data.arr[5])
			node->data.val_ulli = x->data.val_ulli;
		if (node->data.arr[6])
			node->data.val_d = x->data.val_d;
		if (node->data.arr[7])
			node->data.val_c = x->data.val_c;
		if (node->data.arr[8])
			strcpy_s(node->data.val_s, strlen(x->data.val_s) + 1, x->data.val_s);
		node->front = x1;
		node->next = x1->next;
		x1->next = node;
		x = x->next;
		x1 = x1->next;
	}
	cptr = x1;
	return *this;
}