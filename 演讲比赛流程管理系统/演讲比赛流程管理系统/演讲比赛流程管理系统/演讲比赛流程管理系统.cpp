#define _CRT_SECURE_NO_WARNINGS 1
#include"speechManager.h"
#include"speaker.h"

int main()
{
	SpeechManager sm;
	int choice = 0;
	while(true)
	{
		//���������
		srand((unsigned int)time(NULL));
		//�������������
		sm.show_Menu();
		cout << "��������������" << endl;
		//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
		//{
		//	cout << "ѡ�ֱ�ţ�" << it->first
		//		<< " ������ " << it->second.m_Name
		//		<< " �ɼ��� " << it->second.m_Score[0] << endl;
		//}
		cin >> choice;
		switch (choice)
		{
		case 1:  //��ʼ����
			sm.startSpeech();
			break;
		case 2:  //�鿴��¼
			sm.showRecord();
			break;
		case 3:  //��ռ�¼
			sm.clearRecord();
			break;
		case 0:  //�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("pause");
			break;
		}
	}

	system("pause");
	return 0;
}