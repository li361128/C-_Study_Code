#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

template<class T>
class MyArray
{
public:
	//���캯��
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			//���TΪ���󣬶��һ�����ָ�룬����Ҫ���� = ����������Ϊ����ȺŲ��� ���� ���Ǹ�ֵ
			//��ͨ���Ϳ���ֱ��= ����ָ��������Ҫ���
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//����= ������  ��ֹǳ��������
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

	//��ȡ�����С
	int getSize()
	{
		return this->m_Size;
	}

	//��ȡ��������
	int getCapacity()
	{
		return m_Capacity;
	}

	//����[] ������ arr[0]
	T& operator[](int index)
	{
		return this->pAddress[index];//������Խ�磬�û��Լ�ȥ����
	}

	//β��
	void Push_back(const T& val)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->m_Size++;
		this->pAddress[this->m_Size - 1] = val;
	}

	//βɾ
	void Pop_back()
	{
		if (this->m_Size != 0)
		{
			return;
		}
		this->m_Size--;
	}

	//����
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
	int m_Capacity;//����
	int m_Size;//��С
	T* pAddress;//ָ��һ���ѿռ䣬����ռ�洢����������
};