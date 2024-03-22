//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"
//
//#define MAX 1000
//
//struct Person {
//	string m_Name;
//	int m_Sex;//1 ����  2��Ů��������������
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
//	cout << "******1:�����ϵ��******" << endl;
//	cout << "******2:��ʾ��ϵ��******" << endl;
//	cout << "******3:ɾ����ϵ��******" << endl;
//	cout << "******4:������ϵ��******" << endl;
//	cout << "******5:�޸���ϵ��******" << endl;
//	cout << "******6:�����ϵ��******" << endl;
//	cout << "******0:�˳�ͨѶ¼******" << endl;
//	cout << "************************" << endl;
//}
//
//void addPerson(struct Addressbooks * abs) {
//	if (abs->m_Size > MAX) {
//		cout << "ͨѶ¼�������޷���ӣ���" << endl;
//		return;
//	}
//	else {
//		string name;
//		cout << "������������" << endl;
//		cin >> name;
//		abs->personArray[abs->m_Size].m_Name = name;
//		cout << "�������Ա�" << endl;
//		cout << "1������" << endl;
//		cout << "2����Ů" << endl;
//		int sex;
//		while (1) {
//			cin >> sex;
//			if (sex == 1 || sex == 2) {
//				abs->personArray[abs->m_Size].m_Sex = sex;
//				break;
//			}
//			cout << "������������������" << endl;
//		}
//		cout << "����������" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[abs->m_Size].m_Age = age;
//		cout << "������绰���룺" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[abs->m_Size].m_Phone = phone;
//		cout << "�������ͥסַ��" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[abs->m_Size].m_Addr = address;
//		abs->m_Size++;
//		cout << "��ӳɹ���" << endl;
//	}
//}
//
//void showPerson(Addressbooks *abs) {
//	if (!abs->m_Size) {
//		cout << "��ǰ��¼Ϊ��" << endl;
//	}
//	else {
//		for (int i = 0; i < abs->m_Size; i++) {
//			cout << "������" << abs->personArray[i].m_Name << "\t";
//			cout << "�Ա�" << (abs->personArray[i].m_Sex ? "��" : "Ů") << "\t";
//			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
//			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
//			cout << "סַ��" << abs->personArray[i].m_Addr << "\t" << endl;
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
//	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		cout << "������" << abs->personArray[ret].m_Name << "\t";
//		cout << "�Ա�" << (abs->personArray[ret].m_Sex ? "��" : "Ů") << "\t";
//		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
//		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
//		cout << "סַ��" << abs->personArray[ret].m_Addr << "\t" << endl;
//	}
//	else {
//		cout << "���޴���" << endl;
//	}
//}
//
//void deletePerson(Addressbooks* abs) {
//	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		for (int i = ret; i < abs->m_Size; i++) {
//			abs->personArray[i] = abs->personArray[i + 1];
//		}
//		abs->m_Size--;
//		cout << "ɾ���ɹ�" << endl;
//	}
//}
//
//void modifyPerson(Addressbooks* abs) {
//	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
//	string name;
//	cin >> name;
//	int ret = isExist(abs, name);
//	if (ret != -1) {
//		string name;
//		cout << "������������" << endl;
//		cin >> name;
//		abs->personArray[ret].m_Name = name;
//		cout << "�������Ա�" << endl;
//		cout << "1������" << endl;
//		cout << "2����Ů" << endl;
//		int sex;
//		while (1) {
//			cin >> sex;
//			if (sex == 1 || sex == 2) {
//				abs->personArray[ret].m_Sex = sex;
//				break;
//			}
//			cout << "������������������" << endl;
//		}
//		cout << "����������" << endl;
//		int age;
//		cin >> age;
//		abs->personArray[ret].m_Age = age;
//		cout << "������绰���룺" << endl;
//		string phone;
//		cin >> phone;
//		abs->personArray[ret].m_Phone = phone;
//		cout << "�������ͥסַ��" << endl;
//		string address;
//		cin >> address;
//		abs->personArray[ret].m_Addr = address;
//	}
//	else {
//		cout << "���޴���" << endl;
//	}
//}
//
//void clearPerson(Addressbooks* abs) {
//	abs->m_Size = 0;
//	cout << "ͨѶ¼�����" << endl;
//}
//
//int main() {
//	int select = 0;//�����û�ѡ���������
//	Addressbooks abs;
//	abs.m_Size = 0;
//	while (1)
//	{
//		showMenu();//�˵�����
//		cin >> select;
//		switch (select)
//		{
//		case 1://�����ϵ��
//			addPerson(&abs);
//			break;
//		case 2://��ʾ��ϵ��-
//			showPerson(&abs);
//			break;
//		case 3://ɾ����ϵ��
//			deletePerson(&abs);
//			break;
//		case 4://������ϵ��
//			findPerson(&abs);
//			break;
//		case 5://�޸���ϵ��
//			modifyPerson(&abs);
//			break;
//		case 6://�����ϵ��
//			clearPerson(&abs);
//			break;
//		case 0://�˳�ͨѶ¼
//			cout << "��ӭ�´�ʹ��" << endl;
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