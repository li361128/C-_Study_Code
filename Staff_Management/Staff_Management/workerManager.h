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

	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();
	
	//退出系统
	void exitSystem();

	//增加职工
	void Add_Emp();

	//析构函数
	~WorkerManager();

	//保存文件
	void save();

	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//修改员工
	void Mod_Emp();

	//查找该编号员工是否存在
	int IsExist(int id);

	//查找职工
	void Find_Emp();

	//排序员工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//记录文件中的人数个数
	int m_EmpNum;
	//员工数组的指针
	Worker** m_EmpArray;
};





