//#define _CRT_SECURE_NO_WARNINGS 1
////
////#include<iostream>
////
////using namespace std;
////
////const int N = 1010;
////int n, m, q;
////int a[N][N], b[N][N];
////
////void insert(int x1, int x2, int y1, int y2, int c)
////{
////	b[x1][y1] += c;
////	b[x2 + 1][y1] -= c;
////	b[x1][y2 + 1] -= c;
////	b[x2 + 1][y2 + 1] += c;
////}
////
////int main()
////{
////	scanf("%d%d%d", &n, &m, &q);
////	for (int i = 1; i <= n; i++)
////		for (int j = 1; j <= n; j++)
////			scanf("%d", &a[i][j]);
////	for (int i = 1; i <= n; i++)
////		for (int j = 0; i <= m; j++)
////			insert(i, i, i, i, a[i][j]);
////	while (q--)
////	{
////		int x1, x2, y1, y2, c;
////		cin >> x1 >> x2 >> y1 >> y2 >> c;
////		insert(x1, x2, y1, y2, c);
////	}
////	for (int i = 1; i <= n; i++)
////		for (int j = 1; j <= n; j++)
////			b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
////	for (int i = 1; i <= m; i++)
////		for (int j = 1; j <= m; j++)
////			printf("%d", b[i][j]);
////	return 0;
////}
////
//////һά���
//////const int N = 100010;
//////
//////int n, m;
//////int a[N], b[N];
//////
//////void insert(int l, int r, int c)
//////{
//////	b[l] += c;
//////	b[r + 1] -= c;
//////}
//////
//////int main()
//////{
//////	scanf("%d%d", &n, &m);
//////	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//////
//////	for (int i = 1; i <= n; i++) insert(i, i, a[i]);
//////	while (m--)
//////	{
//////		int l, c, r;
//////		scanf("%d%d%d", &l, &r, &c);
//////		insert(l, r, c);
//////	}
//////	for (int i = 1; i <= n; i++) b[i] += b[i - 1];
//////	for (int i = 1; i <= n; i++) printf("%d", b[i]);
//////	return 0;
//////}
////
//////��άǰ׺��
//////const int N = 1010;//�������󳤶�
//////
//////int n, m,q;//n mΪ���鳤��h�Ϳ�ȣ�q Ϊѯ�ʴ���
//////int a[N][N], s[N][N];
//////
//////int main()
//////{
//////	scanf("%d%d%d", &n, &m, &q);
//////	for (int i = 1; i <= n; i++)
//////		for (int j = 1; j <= n; j++)
//////			scanf("%d", &a[i][j]);
//////	for (int i = 1; i <= n; i++)
//////		for (int j = 1; j <= n; j++)
//////			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
//////	while (q--)
//////	{
//////		int x1, x2, y1, y2;
//////		scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
//////		printf("%d\n", s[x2][y2] - s[x1 - 1][x2] - s[x1][x2 - 1] + s[x1 - 1][x2 - 1]);
//////	}
//////	return 0;
//////}
////#include <iostream>
////#include <vector>
////#include <algorithm>
////
////using namespace std;
////const int N = 300010; //n�β����m�β�ѯ������������Ͻ�
////int n, m;
////int a[N];//�洢��������ֵ
////int s[N];//�洢����a��ǰ׺��
////vector<int> alls;  //�洢�����������Ͳ�ѯ�йصģ�����
////vector<pair<int, int>> add, query; //�洢�����ѯ�ʲ���������
////
////int find(int x) { //���ص���������������ɢ���±�
////    int l = 0, r = alls.size() - 1;
////    while (l < r) {
////        int mid = l + r >> 1;
////        if (alls[mid] >= x) r = mid;
////        else l = mid + 1;
////    }
////    return r + 1;
////}
////
////int main() {
////    scanf("%d%d", &n, &m);
////    for (int i = 1; i <= n; i++) {
////        int x, c;
////        scanf("%d%d", &x, &c);
////        add.push_back({ x, c });
////        alls.push_back(x);
////    }
////    for (int i = 1; i <= m; i++) {
////        int l, r;
////        scanf("%d%d", &l, &r);
////        query.push_back({ l, r });
////        alls.push_back(l);
////        alls.push_back(r);
////    }
////    //����ȥ��
////    sort(alls.begin(), alls.end());
////    alls.erase(unique(alls.begin(), alls.end()), alls.end());
////    //ִ��ǰn�β������
////    for (auto item : add) {
////        int x = find(item.first);
////        a[x] += item.second;
////    }
////    //ǰ׺��
////    for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
////    //�����m��ѯ�ʲ���
////    for (auto item : query) {
////        int l = find(item.first);
////        int r = find(item.second);
////        printf("%d\n", s[r] - s[l - 1]);
////    }
////    system("pause");
////    return 0;
////}
//
//
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int n, m, tot = 0, k = 0;
//const int N = 2e5 + 10;
//int a[N];
//int lang[3 * N], uni[3 * N], a[N], b[N], c[N], ans[3 * N];
//
//int find(int x) {
//    return lower_bound(uni + 1, uni + 1 + k, x) - uni;
//}
//
//int main()
//{
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);
//        lang[++tot] = a[i];
//    }
//    scanf("%d", &m);
//    for (int i = 1; i <= m; i++)
//    {
//        scanf("%d", &b[i]);
//        lang[++tot] = b[i];
//    }
//    for (int i = 1; i <= m; i++)
//    {
//        scanf("%d", &c[i]);
//        lang[++tot] = c[i];
//    }
//    sort(lang + 1, lang + tot + 1);
//    for (int i = 1; i <= tot; i++)
//    {
//        if (lang[i] != lang[i - 1] || i == 1)
//            uni[++k] = lang[i];
//    }
//    for (int i = 1; i <= n; i++) ans[find(a[i])]++;
//    int ans0, ans1, ans2;
//    //ans0�������ս����ans1��ans2Ϊ�м���
//    ans0 = ans1 = ans2 = 0;
//    for (int i = 1; i <= m; i++)
//    {
//        int anx = ans[find(b[i])], any = ans[find(c[i])];
//        if (anx > ans1 || anx == ans1 && any > ans2)
//        {
//            ans0 = i;
//            ans1 = anx;
//            ans2 = any;
//        }
//    }
//    if (ans0 == 0) printf("%d\n", 1);
//    else    printf("%d\n", ans0);
//    return 0;
//}



