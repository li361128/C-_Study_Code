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
//	//�������ʯͷ����С����mid�����߸�ʯͷ��
//	// ����mid������ǰ��
//	// �����������ߵ�ʯͷ����cnt
//	// �Ƿ���������������󷵻�TRUE����FALSE
//
//	for (int i = 1; i <= n; i++)
//		if (d[i] - last < mid) cnt++;
//		else last = d[i];
//	return cnt <= m;//����cnt<=m �򷵻�true
//}
//
//int main()
//{
//	scanf("%d%d%d", &l, &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &d[i]);
//	}
//	d[++n] = l;//�����յ�ҲҪ�������ڣ������յ㣬���d[0]Ĭ��Ϊ0��
//	int l = 1, r = 1e9;
//	//���ֲ�������������������mid��Ϊ������ң�ѡ��ڶ���ģ�壩
//	while (l < r)
//	{
//		int mid = l + r + 1 >> 1;
//		if (check(mid)) l = mid;
//		else r = mid - 1;
//	}
//	//���r=l
//	printf("%d\n", r);
//	return 0;
//}