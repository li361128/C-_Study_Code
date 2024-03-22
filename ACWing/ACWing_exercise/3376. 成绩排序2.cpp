//#include<iostream>
//#include<string>
//#include<stdio.h>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 1010;
////结构体，存所有数据
//struct Student
//{
//	int Id;
//	int score;
//}stu[N];
//
//bool cmp(const Student& a, Student& b)
//{
//	//如果两个人的成绩不一样，比较谁大谁在前面
//	if (a.score != b.score) return a.score < b.score;
//	//执行到这里，说明成绩一样，看谁学号序小，排名靠前
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
//	//按照编写函数排序
//	sort(stu, stu + n, cmp);
//	//输出已经排好序的答案
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d %d\n", stu[i].Id, stu[i].score);
//	}
//}