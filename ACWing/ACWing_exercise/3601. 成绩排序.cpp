//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstring>
//#include<stdio.h>
//#include <algorithm>
//
//using namespace std;
//3601. 成绩排序

//const int N = 1010;
////结构体，存所有数据
//struct Student {
//	string name;
//	int age;
//	float score;
//}stu[N];
////排序函数
//bool cmp(const Student &a, const Student &b)
//{
//	//如果两个人的成绩不一样，比较谁大谁在前面
//	if (a.score != b.score) return a.score < b.score;
//	//执行到这里，说明成绩一样，看谁名字字典序小，排名靠前
//	if (a.name != b.name) return a.name < b.name;
//	//执行到这里，说明成绩跟姓名一样，那么看谁年龄小，排名靠前
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
//	//按照编写函数排序
//	sort(stu, stu + n, cmp);
//	//输出已经排好序的答案
//	for (int i = 0; i < n; i++)
//	{
//		cout << stu[i].name << " " << stu[i].age << " ";
//		printf("%.2f\n", stu[i].score);
//	}
//}
