//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"
//
//#define N 5
//struct Hero {
//	string name;
//	int age;
//	string sex;
//};
//
//void bubbleSort(struct Hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (heroArray[j].age > heroArray[j].age) {
//				struct Hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void printInfo(struct Hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "������ " << heroArray[i].name << "���䣺 " <<
//			heroArray[i].age << "�Ա� " << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//	struct Hero heroArray[N] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",21,"��"},
//		{"����",20,"��"},
//		{"����",18,"Ů"},
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	printInfo(heroArray, len);
//	bubbleSort(heroArray , len);
//	system("pause");
//	return 0;
//}