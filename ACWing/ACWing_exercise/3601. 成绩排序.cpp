//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include<stdio.h>
//#include <algorithm>
//
//using namespace std;
//3601. �ɼ�����

//const int N = 1010;
////�ṹ�壬����������
//struct Student {
//	string name;
//	int age;
//	float score;
//}stu[N];
////������
//bool cmp(const Student &a, const Student &b)
//{
//	//��������˵ĳɼ���һ�����Ƚ�˭��˭��ǰ��
//	if (a.score != b.score) return a.score < b.score;
//	//ִ�е����˵���ɼ�һ������˭�����ֵ���С��������ǰ
//	if (a.name != b.name) return a.name < b.name;
//	//ִ�е����˵���ɼ�������һ������ô��˭����С��������ǰ
//	return a.age < b.age;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> stu[i].name >> stu[i].age >> stu[i].score;
//	}
//	//���ձ�д��������
//	sort(stu, stu + n, cmp);
//	//����Ѿ��ź���Ĵ�
//	for (int i = 0; i < n; i++)
//	{
//		cout << stu[i].name << " " << stu[i].age << " ";
//		printf("%.2f\n", stu[i].score);
//	}
//}
