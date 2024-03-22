//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"

//#define N 5
//struct Student {
//	string sName;
//	int score;
//};
//
//struct Teacher {
//	string tName;
//	struct Student sArray[N];
//};
//
//void allocateSpace(struct Teacher tArray[],int len) {
//	char nameseed[] = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameseed[i];
//		for (int j = 0; j < N; j++) {
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameseed[j];
//			int random = rand() % 60 + 41;//40 ~ 99 + 1
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//
//void printInfo(struct Teacher tArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "老师姓名：" << tArray[i].tName << endl;
//		for (int j = 0; j < N; j++) {
//			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
//				"\t考试分数：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main() { 
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printInfo(tArray, len);
//	system("pause");
//	return 0;
//}