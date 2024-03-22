//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 1e6;
//int n, m;
//int a[N];
//
//bool check(int k)
//{
//	int cnt = 1;
//	int now = a[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] - now >= k)
//		{
//			cnt++;
//			now = a[i];
//		}
//	}
//	if (cnt >= m) return true;
//	return false;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	int l = 0 ;
//	int r = a[n - 1];
//	while (l < r)
//	{
//		int mid = (l + r) / 2; // 修改此处
//		if (check(mid)) l = mid + 1; // 修改此处
//		else r = mid;
//.
//	}
//	cout << l - 1 << endl;
//	system("pause");
//	return 0;
//}