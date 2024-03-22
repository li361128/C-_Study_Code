#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

//快速排序
void quick_sort(int q[], int l, int r);

//归并排序
void merge_sort(int q[], int l, const int r);

//检查 x 是否满足某种性质
bool check(int x);

//整数二分模板 1 ：
int bsearch_1(int l,int r);

//整数二分模板 2：
int bsearch_2(int l, int r);
