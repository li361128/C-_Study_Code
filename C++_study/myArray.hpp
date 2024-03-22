#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

template<class T>
class MyArray
{
public:
	//构造函数
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//如果T为对象，而且还包含指针，必须要重载 = 操作符，因为这个等号不是 构造 而是赋值
			//普通类型可以直接= 但是指针类型需要深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//重载= 操作符  防止浅拷贝问题
	MyArray operator=(const MyArray& arr)
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capacity = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//获取数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//获取数组容量
	int getCapacity()
	{
		return m_Capacity;
	}

	//重载[] 操作符 arr[0]
	T& operator[](int index)
	{
		return this->pAddress[index];//不考虑越界，用户自己去处理
	}

	//尾插
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->m_Size++;
		this->pAddress[this->m_Size - 1] = val;
	}

	//尾删
	void Pop_back()
	{
		if (this->m_Size != 0)
		{
			return;
		}
		this->m_Size--;
	}

	//析构
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->m_Capacity = 0;
			this->m_Size = 0;
			this->pAddress = NULL;
		}
	}

private:
	int m_Capacity;//容量
	int m_Size;//大小
	T* pAddress;//指向一个堆空间，这个空间存储真正的数据
};