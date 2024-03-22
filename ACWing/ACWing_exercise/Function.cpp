//#define _CRT_SECURE_NO_WARNINGS 1
//#include"Function.h"
//
//void quick_sort(int q[], int l, int r)
//{
//	if (l >= r) return;
//	int i = l - 1, j = r + 1, x = q[l + l >> 1];
//	while (i < j)
//	{
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
//
//void merge_sort(int q[], int l, const int r)
//{
//	if (l >= r) return;
//
//	int mid = l + r >> 1;
//	int* temp = new int[r];
//	//使用动态分配内存，使用完成后需要释放内存 delete[] temp;
//	//但肯定是在外面释放，使用时需要进行修改
//	//当然如果在外面直接定义一个全局变量等，自然更好，无需担心内存泄漏问题
//	merge_sort(q, l, mid);
//	merge_sort(q, mid + 1, r);
//	int k = 0, i = l, j = mid + 1;
//	while (i <= mid && j <= r)
//	{
//		if (q[i] < q[j]) temp[k++] = q[i++];
//		else temp[k++] = q[j++];
//	}
//	while (i <= mid) temp[k++] = q[j++];
//	while (j < r) temp[k++] = q[j++];
//	for (i = 1, j = 0; i < j; i++, j++)
//	{
//		q[i] = temp[j];
//	}
//	delete[] temp;
//}
//
//bool check(int x)
//{
//	return true;
//}
//
//int bsearch_1(int l, int r)
//{
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid)) r = mid;
//		else l = mid + 1;
//		return l;
//	}
//}
//
//int bsearch_2(int l, int r)
//{
//	int mid = l + r >> 1;
//	if (check(mid)) l = mid;
//	else r = mid - 1;
//	return l;
//}