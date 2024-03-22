### `1.AcWing`刷题



#### 32. 调整数组顺序使奇数位于偶数前面

——双指针

**普通做法**：

```c++
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int l = 0,r=array.size()-1;
        while(l<r)           
        {
            while(l<r&&array[l]%2==1) l++;
            while(l<r&&array[r]%2==0) r--;
            if(l<r) swap(array[l],array[r]);
        }
    }
};
```

**不改变原先数组奇数与偶数各自的相对顺序：**

```c++
class Solution {
public:
    void reOrderArray(vector<int> &array) {
		vector<int> a;//定义一个新的vector 存出排序后的vector
        for(int x:array)
        {
            if(x%2==1) a.push_back(x);//先插奇数
        }
        for(int x: array)
        {
            if(x%2==0) a.push_back(x);//后插偶数
        }
        array= a;//将答案拷贝给array
    }
};

```



#### 61. 最长不含重复字符的子字符串

——双指针

```c++
class Solution {
public:
    int longestSubstringWithoutDuplication(string s) {
         unordered_map<char,int> hash;
         //声明了一个名为 hash 的无序映射，
         //用于存储字符及其出现的次数。
         //这里的键是字符，值是该字符在当前子串中出现的次数。
        int res = 0;//定义计数器 初始化为0
        for(int i = 0,j = 0;j<s.size();j++)
        {
            hash[s[j]]++;//逐个向hash中存进s中的单个字符，并记录每个字符所出现的次数
            while(hash[s[j]]>1) hash[s[i++]]--;
            //如果找到一个字符重新出现了，就将指针i向后移一位，并减少s[i]的出现次数
            res = max(j-i+1,res);//更新计数器中的序列长度，为此次序列长度与原计数器中序列长度的较大值
        }
        return res;
    }
};
```



#### 68. 0到n-1中缺失的数字

——二分

```c++
class Solution {
public:
    int getMissingNumber(vector<int>& nums)
    {
        if (nums.empty()) return 0;
        int l = 0, r = nums.size() - 1;
        //用二分模板（log(n)）较快，比那些遍历n快多了
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] != mid) r = mid;
            else l = mid + 1;
        }
        if (nums[r] == r) r++;
        return r;
    }
};
```



#### 103.电影

——离散化

```c++
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,k=0,tot=0;
const int N=2e5+50;
//3*N是因为语言的来源有3个地方，假设都不相同，则有3*N种语言
int lang[3*N],uni[3*N],a[N],b[N],c[N],ans[3*N];
//find作用是把稀疏编号转为稠密编号
int find(int x){
    return lower_bound(uni+1,uni+1+k,x)-uni;
}

// //也可以直接二分
//     int find(int x){
//         int l=1,r=k+1;
//         while(l<r){
//             int mid=(l+r)/2;
//             if(uni[mid]>=x) r=mid;
//             else l=mid+1;
//         }
//         return r;
//     }

int main(){
    //保存科学家会的语言，并用lang记录
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        lang[++tot]=a[i];
    }
    //保存电影音频的语言，并用lang记录
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&b[i]);
        lang[++tot]=b[i];
    }
    //保存电影字幕的语言，并用lang记录
    for(int i=1;i<=m;i++){
        scanf("%d",&c[i]);
        lang[++tot]=c[i];
    }
    //排序lang，为了去重复
    sort(lang+1,lang+1+tot);
    //把lang数组去重复，保存到uni数组
    //uni的数组下标做为每种语言(原有的1-10^9的稀疏编号）新的稠密编号
    for(int i=1;i<=tot;i++){
        if(i==1 || lang[i]!=lang[i-1]){
            uni[++k]=lang[i];
        }
    }
    //a[i]中保存原始的稀疏编号，用find转变成稠密编号，并用ans数组记录每种语言出现的次数。
    for(int i=1;i<=n;i++) ans[find(a[i])]++;
    //遍历所有电影，按要求找到最多科学家会的电影
    int ans0,ans1,ans2;
    //ans0保存最终结果，ans1和ans2为中间结果
    ans0=ans1=ans2=0;
    for(int i=1;i<=m;i++){
        //算出第i个电影音频语言的科学家数，和第i个字幕语言的科学家数
        int anx=ans[find(b[i])],any=ans[find(c[i])];
        //如果ans大于ans1或者前者相等且any大于ans2时，更新
        if(anx>ans1 || (anx==ans1 && any>ans2)){
            ans0=i,ans1=anx,ans2=any;
        }
    }
    //如果所有的电影的声音和字幕的语言，科学家们都不懂，随便选一个
    if(ans0==0){
        printf("%d\n",1);
    }else{
        printf("%d\n",ans0);
    }

    return 0;
}
```



#### 503. 借教室

——二分	差分

```c++
#include <iostream>
#include <cstring>
#include <algorithm>

typedef long long LL; 

using namespace std;

const int N = 1e6 + 10;

int n,m;
int w[N];
int d[N],s[N],t[N];
LL b[N];//这个数据类型必须得长，不然测试报错

bool check(int mid)
{
    //创建差分数组，也是降低了时间复杂度O(n2)变成了O(n);
    memset(b,0,sizeof(b));// 将数组 b 中的所有元素都设置为零，这样可以确保在计算 b[] 数组时，每个位置的初始值都是零。
    for(int i = 1;i <= mid;i ++)
    {
        b[s[i]] += d[i];
        b[t[i] + 1] -= d[i];
    }
    
    LL s = 0;//	清空上一次测试的s值	
    
    for(int i = 1;i <= n;i ++)
    {
        s += b[i];
        if(s > w[i]) return false;
    }
    return true;
}


int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 1;i <= n;i ++) scanf("%d",&w[i]);
    for(int i = 1;i <= m;i ++) scanf("%d%d%d",&d[i],&s[i],&t[i]);
    
    //将遍历转化为二分，降低了时间复杂度。	毕竟这之间1~m是单调的
    int l = 0,r = m;
    while(l < r)
    {
        int mid = l + r + 1>>1;
        if(check(mid)) l = mid;
        else r = mid -1;
    }
    
    if(r == m) printf("0");//每个申请者的需求都可以得到满足，则r的值不会改变，仍为初始值
    else  printf("-1\n%d",r + 1);
    
    return 0;
    
}
```



#### 519.跳石头

——二分	贪心

```c++
#include<iostream>
//#include<algorithm>

using namespace std;

const int N = 50010;

int l, n, m;
int d[N];

bool check(int mid)
{
	int last = 0, cnt = 0;
	//如果两块石头距离小于了mid则拿走该石头，
	// 满足d[i] - last < mid条件的前提
	// 再来看该拿走的石头数量cnt
	// 是否满足条件决定最后返回TRUE还是FALSE

	for (int i = 1; i <= n; i++)
		if (d[i] - last < mid) cnt++;
		else last = d[i];
	return cnt <= m;//满足cnt<=m 则返回true
}

int main()
{
	scanf("%d%d%d", &l, &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}
	d[++n] = l;//起点和终点也要计算在内，这是终点，起点d[0]默认为0了
	int l = 1, r = 1e9;
	//二分查找能满足该条件的最大mid（为升序查找，选择第二个模板）
	while (l < r)
	{
		int mid = l + r + 1 >> 1;
		if (check(mid)) l = mid;
		else r = mid - 1;
	}
	//最后r=l
	printf("%d\n", r);
	return 0;
}
```



#### 680. 剪绳子

——浮点二分

```c++
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;
int a[N];
int n , m;

bool check(double mid)
{
    int res = 0;
    for(int i = 0;i < n;i ++)
    {
        res +=a[i]/mid;//遍历题中提供的每根绳子，统计出一共能剪出多少根mid长的的绳子
        if(res >= m) return true;
    }
    return false;
}

int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n ;i ++)
    {
        scanf("%d",&a[i]);
    }
    
    //开始浮点数二分
    double l  = 0, r = 1e9;
    while(r - l > 1e-4)//精度控制，一般是题中要求的小数点位数  再添加两个小数点位数
    { 
        double mid = l + (r - l) / 2;//防止两个数直接相加太大  导致溢出
        if(check(mid)) l = mid;
        else r = mid;
    }
    printf("%.2lf",l);
    return 0;
}
```



#### 802.区间和

——离散化

![image-20240303221040903](C:/Users/lct2023/AppData/Roaming/Typora/typora-user-images/image-20240303221040903.png)

```c++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 300010; //n次插入和m次查询相关数据量的上界
int n, m;
int a[N];//存储坐标插入的值
int s[N];//存储数组a的前缀和
vector<int> alls;  //存储（所有与插入和查询有关的）坐标
vector<pair<int, int>> add, query; //存储插入和询问操作的数据

int find(int x) { //返回的是输入的坐标的离散化下标
    int l = 0, r = alls.size() - 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        int x, c;
        scanf("%d%d", &x, &c);
        add.push_back({ x, c });
        alls.push_back(x);
    }
    for (int i = 1; i <= m; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        query.push_back({ l, r });
        alls.push_back(l);
        alls.push_back(r);
    }
    //排序，去重
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    //执行前n次插入操作
    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }
    //前缀和
    for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
    //处理后m次询问操作
    for (auto item : query) {
        int l = find(item.first);
        int r = find(item.second);
        printf("%d\n", s[r] - s[l - 1]);
    }
    //system("pause");
    return 0;
}

```



#### 1571. 完美序列

——双指针

```c++
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAX_N = 100010;
int n;
long long arr[MAX_N], p;//这个数据类型是个坑，只能用long long类型

int main() {
    cin >> n >> p;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int cnt = 0;
    for(int i = 0, j = 0; i < n; i++)
    {
        while(j < n &&  arr[i] > arr[j] * p) j++;
        //在内部循环中，j 指针向右移动，直到找到一个满足条件 arr[i] <= arr[j] * p 的位置。
       
        cnt = max(cnt, i - j + 1);
        //更新 cnt，取当前 cnt 和当前子序列的长度的较大值。
    }
    printf("%d", cnt);
    return 0; 
}

```



#### 3333. K-优字符串

——双指针

```c++
#include<string>
#include<iostream>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);//测试个数
    for(int C = 1;C <= T;C ++)
    {
        int n,k;
        string str;
        scanf("%d%d",&n,&k);
        cin>>str;
        int cnt = 0;
        for(int i = 0,j = n - 1;i < j;i ++,j --)
        {
            if(str[i]!=str[j]) cnt++;//双指针，一前一后，遍历进行条件判断，最终相遇终止循环
        }
        printf("Case #%d: %d\n",C,abs(cnt-k));//这个绝对值很有必要
    }
    return 0;
}
```



#### 3376. 成绩排序2

-----排序

```c++
#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 1010;
//结构体，存所有数据
struct Student
{
	int Id;
	int score;
}stu[N];

bool cmp(const Student& a, Student& b)
{
	//如果两个人的成绩不一样，比较谁大谁在前面
	if (a.score != b.score) return a.score < b.score;
	//执行到这里，说明成绩一样，看谁学号序小，排名靠前
	return a.Id < b.Id;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &stu[i].Id, &stu[i].score);
	}
	//按照编写函数排序
	sort(stu, stu + n, cmp);
	//输出已经排好序的答案
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", stu[i].Id, stu[i].score);
	}
}
```





#### 3601.成绩排序

-----排序

```c++
#include <iostream>
#include <cstring>
#include<stdio.h>
#include <algorithm>

using namespace std;

const int N = 1010;
//结构体，存所有数据
struct Student {
	string name;
	int age;
	float score;
}stu[N];
//排序函数
//利用const 防止不必要的拷贝
bool cmp(const Student &a, const Student &b)
{
	//如果两个人的成绩不一样，比较谁大谁在前面
	if (a.score != b.score) return a.score < b.score;
	//执行到这里，说明成绩一样，看谁名字字典序小，排名靠前
	if (a.name != b.name) return a.name < b.name;
	//执行到这里，说明成绩跟姓名一样，那么看谁年龄小，排名靠前
	return a.age < b.age;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].age >> stu[i].score;
	}
	//按照编写函数排序
	sort(stu, stu + n, cmp);
	//输出已经排好序的答案
	for (int i = 0; i < n; i++)
	{
		cout << stu[i].name << " " << stu[i].age << " ";
		printf("%.2f\n", stu[i].score);
	}
}
```



#### 3768. 字符串删减

——双指针

```c++
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string str;
    cin>>str;
    int res = 0;
    for(int i = 0;i < n;i ++)
    {
        if(str[i]!='x') continue;
        int j = i + 1;
        while(j < n&&str[j]=='x') j++;
        res+=max(0,j-i-2);
        i = j -1;
    }
    printf("%d",res);
    return 0;
}
```



#### 4176. 愤怒的牛

——二分

```c++
#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1e6;
int n, m;
int a[N];

bool check(int k)
{
	int cnt = 1;
	int now = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] - now >= k)
		{
			cnt++;
			now = a[i];
		}
	}
	if (cnt >= m) return true;
	return false;
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	int l = 0 ;
	int r = a[n - 1];
	while (l < r)
	{
		int mid = (l + r) / 2; 
		if (check(mid)) l = mid + 1; 
		else r = mid;
	}
	cout << l - 1 << endl;
	system("pause");
	return 0;
}
```



#### 4720. 字符串

——栈

**用字符串存储**：

```c++
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	string res;
	cin >> str;
	//scanf("%s", &str);//“scanf”: 格式字符串“%s”需要类型“char *”的参数，但可变参数 1 拥有了类型“std::string *”
	for (auto c : str)
	{
		if (res.size() && res.back() == c) res.pop_back();
		else res += c;
	}
	//printf("%s", res);//“printf”: 格式字符串“%s”需要类型“char *”的参数，但可变参数 1 拥有了类型“std::string”
	cout << res;
	return 0;
}
```



**用栈来存储：**(慢很多，本质最后还得用字符串来遍历)

```c++
#include<iostream>
#include<string>
#include<stack>
#include<algorithm> // 用于 reverse 函数

using namespace std;


//**用栈来存储：**

int main()
{
	string str,arr;
	stack<char> s;//push时插入的是单个字符，而非字符串，故用char做模板参数类型
	cin >> str;
	for (auto c : str)
	{
		if (s.empty())
		{
			s.push(c);
		}
		else
		{
			if (s.top() == c) s.pop();
			else s.push(c);
		}
	}
	while (!s.empty())
	{
		arr.push_back(s.top());
		s.pop();
	}
	reverse(arr.begin(), arr.end());
	cout << arr;
	return 0;
}

```



**可以证明，不论按何种顺序删除相同连续字母对，最终得到的字符串都是一样的：**

用数学归纳法可证：


$$
1.易知：当字符个数当字符个数 k 为0或1时，肯定成立\\
2.假设当字符个数k<n时，该结论成立。\\
3.当k=n时，删除其中一对字母对A时，则其字符串长度小于n了，便可以用假设再删除一个字母对B,\\
由于字母对A、B可交换，则证明其成立
$$




#### 4782. 第k个数 

——排序

```C++
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>

using namespace std;
//快速排序
void quick_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while (i < j)
	{
		do i++; while (q[i] > x);
		do j--; while (q[j] < x);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}

int main()
{
	int n, k;
	const int N = 1010;
	scanf("%d %d", &n, &k);
	int q[N];
	for (int i = 0; i < n; i++)
		scanf("%d", &q[i]);
	quick_sort(q, 0, n - 1);
	printf("%d", q[--k]);
	return 0;
}
```



### `2.Leetcode`刷题



#### [128. 最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/)

——[并查集]	[数组 ]	[哈希表]

```c++
class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> num_set;//创建了一个无序集合num_set，用来存储数组中的所有数字，以便快速查找。
       for (const int& num : nums) {
            num_set.insert(num);//去重，多个相同的数  只会插入一个
        }
    int longestStreak = 0;//初始化最长连续序列的长度
    for(const int &num : num_set)
    {
        if(!num_set.count(num - 1))//找到连续序列的第一个数	开始统计
        {
            int currentNum = num;
            int cunrrentStreak = 1;
            while(num_set.count(currentNum + 1)//判断是否存在下一个连续的数	构成连续序列
            {
                cunrrentStreak +=1;//找到之后 更新个数
                currentNum +=1;
            }
           longestStreak = max(cunrrentStreak, longestStreak);//新一个序列统计后	进行更新	答案
        }
    }
    return longestStreak;
    }
};
```

