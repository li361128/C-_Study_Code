//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//#include<vector>
//#include<deque>
//#include<ctime>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 5;
//
////ѡ����
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	int m_Score;
//	string m_Name;
//};
//
////����5��ѡ��
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < N; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//
//}
//
////���
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί��ķַŵ�deque��
//		deque<int> d;
//		for (int i=0;i<10;i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int sum = 0;
//		for (int i = 0; i < d.size(); i++)
//		{
//			sum += d[i];
//		}
//		it->m_Score = sum / d.size();//��ƽ���� ��ֵ��ѡ������
//	}
//}
//
////չʾ����
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << it->m_Name << "\tƽ���֣�" << it->m_Score << endl;
//	}
//}
//
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//1������5��ѡ��
//	vector<Person> v;
//	creatPerson(v);
//
//	//2����5��ѡ�ִ��
//	setScore(v);
//
//	//3����ʾ���÷�
//	showScore(v);
//
//	system("pause");
//
//	return 0;
//}
