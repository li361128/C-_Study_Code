//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"
//
//#define MAX 1000
//
//struct Person {
//	string m_Name;
//	int m_Sex;//1 ；男  2：女。不让输入其他
//	int m_Age;
//	string m_Phone;
//	string m_Addr;
//};
//
//struct Addressbooks {
//	struct Person personArray[MAX];
//	int m_Size;
//};
//
//void showMenu() {
//	cout << "************************" << endl;
//	cout << "******1:添加联系人******" << endl;
//	cout << "******2:显示联系人******" << endl;
//	cout << "******3:删除联系人******" << endl;
//	cout << "******4:查找联系人******" << endl;
//	cout << "******5:修改联系人******" << endl;
//	cout << "******6:清空联系人******" << endl;
//	cout << "******0:退出通讯录******" << endl;
//	cout << "************************" << endl;
//}
//
//void addPerson(struct Addressbooks * abs) {
//	if (abs->m_Size > MAX) {
//		cout << "通讯录已满，无法添加！！" << endl;
//		return;
//	}
//	else {
//		string name;
//		cout << "请输入姓名：" << endl;
//		cin >> name;
//		abs->personArray[abs->m_Size].m_Name = name;
//		cout << "请输入性别：" << endl;
//		cout << "1——男" << endl;
//		cout << "2——女" << endl;
//		int sex;
//		while (1) {
//			cin >> sex;
//			if (sex == 1 || sex == 2) {
//				abs->personArray[abs->m_Size].m_Sex = sex;
//				break;
//			}
//			cout << "输入有误，请重新输入" << endl;
//		}
//		cout << "请输入年龄" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[abs->m_Size].m_Age = age;
//		cout << "请输入电话号码：" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[abs->m_Size].m_Phone = phone;
//		cout << "请输入家庭住址：" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[abs->m_Size].m_Addr = address;
//		abs->m_Size++;
//		cout << "添加成功！" << endl;
//	}
//}
//
//void showPerson(Addressbooks *abs) {
//	if (!abs->m_Size) {
//		cout << "当前记录为空" << endl;
//	}
//	else {
//		for (int i = 0; i < abs->m_Size; i++) {
//			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
//			cout << "性别：" << (abs->personArray[i].m_Sex ? "男" : "女") << "\t";
//			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
//			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
//			cout << "住址：" << abs->personArray[i].m_Addr << "\t" << endl;
//		}
//	}
//}
//
//int isExist(Addressbooks* abs,string name) {
//	for (int i = 0; i < abs->m_Size; i++) {
//		if (abs->personArray[i].m_Name == name) {
//			return i;
//		}
//	}
//	return -1;
//}
//
//void findPerson(Addressbooks*abs) {
//	cout << "请输入您要查找的联系人：" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
//		cout << "性别：" << (abs->personArray[ret].m_Sex ? "男" : "女") << "\t";
//		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
//		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
//		cout << "住址：" << abs->personArray[ret].m_Addr << "\t" << endl;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//}
//
//void deletePerson(Addressbooks* abs) {
//	cout << "请输入你要删除的联系人：" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		for (int i = ret; i < abs->m_Size; i++) {
//			abs->personArray[i] = abs->personArray[i + 1];
//		}
//		abs->m_Size--;
//		cout << "删除成功" << endl;
//	}
//}
//
//void modifyPerson(Addressbooks* abs) {
//	cout << "请输入你要删除的联系人：" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		string name;
//		cout << "请输入姓名：" << endl;
//		cin >> name;
//		abs->personArray[ret].m_Name = name;
//		cout << "请输入性别：" << endl;
//		cout << "1——男" << endl;
//		cout << "2——女" << endl;
//		int sex;
//		while (1) {
//			cin >> sex;
//			if (sex == 1 || sex == 2) {
//				abs->personArray[ret].m_Sex = sex;
//				break;
//			}
//			cout << "输入有误，请重新输入" << endl;
//		}
//		cout << "请输入年龄" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[ret].m_Age = age;
//		cout << "请输入电话号码：" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[ret].m_Phone = phone;
//		cout << "请输入家庭住址：" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[ret].m_Addr = address;
//	}
//	else {
//		cout << "查无此人" << endl;
//	}
//}
//
//void clearPerson(Addressbooks* abs) {
//	abs->m_Size = 0;
//	cout << "通讯录已清空" << endl;
//}
//
//int main() {
//	int select = 0;//创建用户选择输入变量
//	Addressbooks abs;
//	abs.m_Size = 0;
//	while (1)
//	{
//		showMenu();//菜单调用
//		cin >> select;
//		switch (select)
//		{
//		case 1://添加联系人
//			addPerson(&abs);
//			break;
//		case 2://显示联系人-
//			showPerson(&abs);
//			break;
//		case 3://删除联系人
//			deletePerson(&abs);
//			break;
//		case 4://查找联系人
//			findPerson(&abs);
//			break;
//		case 5://修改联系人
//			modifyPerson(&abs);
//			break;
//		case 6://清空联系人
//			clearPerson(&abs);
//			break;
//		case 0://退出通讯录
//			cout << "欢迎下次使用" << endl;
//			system("pause");
//			return 0;
//			break;
//		default:
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	return 0;
//}