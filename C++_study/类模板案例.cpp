//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"myArray.hpp"
//
//void printIntArray(MyArray<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void test01()
//{
//	MyArray<int> arr(10);
//	for (int i = 0; i < arr.getCapacity(); i++)
//	{
//		arr.Push_back(i);
//	}
//	cout << "arr的打印输出：" << endl;
//	printIntArray(arr);
//	cout << "arr的容量是多少：" << arr.getCapacity() << endl;
//	cout << "arr的大小是多少：" << arr.getSize() << endl;
//	cout << "--------------------------" << endl;
//	MyArray<int>arr1(arr);
//	arr1.Pop_back();
//	cout << "arr1的打印输出：" << endl;
//	printIntArray(arr1);
//	cout << "arr1的容量是多少：" << arr1.getCapacity() << endl;
//	cout << "arr1的大小是多少：" << arr1.getSize() << endl;
//}
//
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void printPersonArray(MyArray<Person>& personArr)
//{
//	for (int i = 0; i < personArr.getSize(); i++)
//	{
//		cout << "姓名：" << personArr[i].m_Name <<
//			" \t年龄： " << personArr[i].m_Age << endl;
//	}
//}
//
//void test02()
//{
//	MyArray<Person> pArr(10);
//	Person p1("孙悟空", 10);
//	Person p2("唐僧", 4);
//	Person p3("猪八戒", 17);
//	Person p4("沙和尚", 167);
//	Person p5("貂蝉", 1796);
//	//插入数据
//	pArr.Push_back(p1);
//	pArr.Push_back(p2);
//	pArr.Push_back(p3);
//	pArr.Push_back(p4);
//	pArr.Push_back(p5);
//
//	printPersonArray(pArr);
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
