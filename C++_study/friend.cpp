//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building
//{
//	friend void GoodGay::visit();
//	//friend class GoodGay;
//	//friend void goodGay(Building* building);
//public:
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//class GoodGay {
//public:
//	GoodGay();
//	void visit();//firend
//	void visit02();//�� friend
//	Building* building;
//
//};
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
//void test01() {
//	GoodGay gg;
//	gg.visit();
//}
//
//void GoodGay::visit() {
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit02() {
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	//cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}