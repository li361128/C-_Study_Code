//#include<iostream>
//#include<string>
//#include<stack>
//#include<algorithm> // ���� reverse ����
//
//using namespace std;
//
//
////**��ջ���洢��**
//
//int main()
//{
//	string str, arr;
//	stack<char> s;
//	cin >> str;
//	for (auto c : str)
//	{
//		if (s.empty())
//		{
//			s.push(c);
//		}
//		else
//		{
//			if (s.top() == c) s.pop();
//			else s.push(c);
//		}
//	}
//	while (!s.empty())
//	{
//		arr.push_back(s.top());
//		s.pop();
//	}
//	reverse(arr.begin(), arr.end());
//	cout << arr;
//	return 0;
//}



//**���ַ����洢** ��
//int main()
//{
//	string str;
//	string res;
//	cin >> str;
//	//scanf("%s", &str);
//	for (auto c : str)
//	{
//		if (res.size() && res.back() == c) res.pop_back();
//		else res += c;
//	}
//	//printf("%s", res);
//	cout << res;
//	return 0;
//}

