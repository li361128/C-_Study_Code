//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"

//void find_NarcissisticNumber() {
//	int num = 100;
//	do {
//		int a = num % 10;
//		int b = ((num - a) / 10) % 10;//num/10%10也是一样的
//		int c = ((num - b * 10 - a) / 100) % 10;//num/100也是一样的
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
//	/*你的冒泡排序函数存在一个常见的错误，与在 C++ 中将数组传递给函数有关。
//	当你将数组传递给函数时，它会衰减为指向数组第一个元素的指针。
//	因此，在函数内使用 sizeof(arr) 将不会给出数组的正确大小。你应该将数组的大小(int len)作为一个额外的参数传递给函数。*/
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