//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 1010;
////�ṹ�壬����������
//struct Student
//{
//	int Id;
//	int score;
//}stu[N];
//
//bool cmp(const Student& a, Student& b)
//{
//	//��������˵ĳɼ���һ�����Ƚ�˭��˭��ǰ��
//	if (a.score != b.score) return a.score < b.score;
//	//ִ�е����˵���ɼ�һ������˭ѧ����С��������ǰ
//	return a.Id < b.Id;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d", &stu[i].Id, &stu[i].score);
//	}
//	//���ձ�д��������
//	sort(stu, stu + n, cmp);
//	//����Ѿ��ź���Ĵ�
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d %d\n", stu[i].Id, stu[i].score);
//	}
//}