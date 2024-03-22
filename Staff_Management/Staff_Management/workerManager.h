#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();
	
	//�˳�ϵͳ
	void exitSystem();

	//����ְ��
	void Add_Emp();

	//��������
	~WorkerManager();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�޸�Ա��
	void Mod_Emp();

	//���Ҹñ��Ա���Ƿ����
	int IsExist(int id);

	//����ְ��
	void Find_Emp();

	//����Ա��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��¼�ļ��е���������
	int m_EmpNum;
	//Ա�������ָ��
	Worker** m_EmpArray;
};





