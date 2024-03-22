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
//		cout << "ÐÕÃû£º " << heroArray[i].name << "ÄêÁä£º " <<
//			heroArray[i].age << "ÐÔ±ð£º " << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//	struct Hero heroArray[N] = {
//		{"Áõ±¸",23,"ÄÐ"},
//		{"¹ØÓð",22,"ÄÐ"},
//		{"ÕÅ·É",21,"ÄÐ"},
//		{"ÕÔÔÆ",20,"ÄÐ"},
//		{"õõ²õ",18,"Å®"},
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	printInfo(heroArray, len);
//	bubbleSort(heroArray , len);
//	system("pause");
//	return 0;
//}