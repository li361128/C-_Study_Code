//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"

//void find_NarcissisticNumber() {
//	int num = 100;
//	do {
//		int a = num % 10;
//		int b = ((num - a) / 10) % 10;//num/10%10Ҳ��һ����
//		int c = ((num - b * 10 - a) / 100) % 10;//num/100Ҳ��һ����
//		if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == num) {
//			cout << num << endl;
//		}
//	} while (num++ < 1000);
//}

//void Print_MultiplicationTable() {
//	for (size_t i = 1; i < 10; i++)
//	{
//		for (size_t j = 1; j < i; j++)
//		{
//			cout << j << "*" << i << "=" << i * j << "\t";
//		}
//		cout << endl;
//	}
//}

//void SwapTwoIntegers(int* a,int*b) {
//	int t = *a;
//	*a = *b;
//	*b = t;
//}

//void Bubble_IncrementalSort(int* arr,int len) {
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	/*���ð������������һ�������Ĵ������� C++ �н����鴫�ݸ������йء�
//	���㽫���鴫�ݸ�����ʱ������˥��Ϊָ�������һ��Ԫ�ص�ָ�롣
//	��ˣ��ں�����ʹ�� sizeof(arr) ����������������ȷ��С����Ӧ�ý�����Ĵ�С(int len)��Ϊһ������Ĳ������ݸ�������*/
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}