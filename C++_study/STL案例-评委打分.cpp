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
////选手类
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
////创建5名选手
//void creatPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < N; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//
//}
//
////打分
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//把评委打的分放到deque中
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
//		it->m_Score = sum / d.size();//将平均分 赋值给选手身上
//	}
//}
//
////展示分数
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << "\t平均分：" << it->m_Score << endl;
//	}
//}
//
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1、创建5名选手
//	vector<Person> v;
//	creatPerson(v);
//
//	//2、给5名选手打分
//	setScore(v);
//
//	//3、显示最后得分
//	showScore(v);
//
//	system("pause");
//
//	return 0;
//}
