//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int i = l - 1, j = r + 1, x = q[l + r >> 1];
//	while (i < j)
//	{
//		do i++; while (q[i] > x);
//		do j--; while (q[j] < x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
//
//int main()
//{
//	int n, k;
//	const int N = 1010;
//	scanf("%d %d", &n, &k);
//	int q[N];
//	for (int i = 0; i < n; i++)
//		scanf("%d", &q[i]);
//	quick_sort(q, 0, n - 1);
//	printf("%d", q[--k]);
//	return 0;
//}

//int q[1001];
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &q[i]);
//	sort(q, q + n, cmp);
//	printf("%d", q[--k]);
//	return 0;
//}