#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

//��������
void quick_sort(int q[], int l, int r);

//�鲢����
void merge_sort(int q[], int l, const int r);

//��� x �Ƿ�����ĳ������
bool check(int x);

//��������ģ�� 1 ��
int bsearch_1(int l,int r);

//��������ģ�� 2��
int bsearch_2(int l, int r);
