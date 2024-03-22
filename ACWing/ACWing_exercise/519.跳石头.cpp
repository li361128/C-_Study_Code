//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//const int N = 50010;
//
//int l, n, m;
//int d[N];
//
//bool check(int mid)
//{
//	int last = 0, cnt = 0;
//	//如果两块石头距离小于了mid则拿走该石头，
//	// 满足mid条件的前提
//	// 再来看该拿走的石头数量cnt
//	// 是否满足条件决定最后返回TRUE还是FALSE
//
//	for (int i = 1; i <= n; i++)
//		if (d[i] - last < mid) cnt++;
//		else last = d[i];
//	return cnt <= m;//满足cnt<=m 则返回true
//}
//
//int main()
//{
//	scanf("%d%d%d", &l, &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &d[i]);
//	}
//	d[++n] = l;//起点和终点也要计算在内，这是终点，起点d[0]默认为0了
//	int l = 1, r = 1e9;
//	//二分查找能满足该条件的最大mid（为升序查找，选择第二个模板）
//	while (l < r)
//	{
//		int mid = l + r + 1 >> 1;
//		if (check(mid)) l = mid;
//		else r = mid - 1;
//	}
//	//最后r=l
//	printf("%d\n", r);
//	return 0;
//}