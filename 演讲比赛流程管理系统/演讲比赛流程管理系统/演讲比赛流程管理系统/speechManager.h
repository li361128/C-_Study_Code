#pragma once

#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include"speaker.h"

using namespace std;

class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单
	void show_Menu();

	//退出函数
	void exitSystem();

	//初始化成员属性
	void initSpeech();

	//初始化创建12名选手
	void createSpeaker();

	//开始比赛 - 比赛流程控制
	void startSpeech();

	//选手抽签
	void speechDraw();

	//比赛
	void speechContest();

	//展示比赛结果
	void showScore();

	//保存成绩
	void saveRecord();
	
	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空记录
	void clearRecord();

	//析构函数
	~SpeechManager();

	//文件为空的标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;

	//比赛选手 容器  12人
	vector<int> v1;

	//第一轮晋级容器  6人
	vector<int>v2;

	//胜利前三名容器  3人
	vector<int> vVictory;

	//存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;

	//记录比赛轮数
	int m_Index;
};