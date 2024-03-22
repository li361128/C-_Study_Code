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
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�����
	void exitSystem();

	//��ʼ����Ա����
	void initSpeech();

	//��ʼ������12��ѡ��
	void createSpeaker();

	//��ʼ���� - �������̿���
	void startSpeech();

	//ѡ�ֳ�ǩ
	void speechDraw();

	//����
	void speechContest();

	//չʾ�������
	void showScore();

	//����ɼ�
	void saveRecord();
	
	//��ȡ��¼
	void loadRecord();

	//��ʾ�����¼
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//��������
	~SpeechManager();

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//����ѡ�� ����  12��
	vector<int> v1;

	//��һ�ֽ�������  6��
	vector<int>v2;

	//ʤ��ǰ��������  3��
	vector<int> vVictory;

	//��ű�� �Լ���Ӧ�� ����ѡ�� ����
	map<int, Speaker> m_Speaker;

	//��¼��������
	int m_Index;
};