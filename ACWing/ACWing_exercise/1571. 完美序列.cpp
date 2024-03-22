//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//const int MAX_N = 100010;
//int n;
//long long arr[MAX_N], p;
//
//int main() {
//    cin >> n >> p;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr, arr + n);
//    int cnt = 0;
//    for (int i = 0, j = 0; i < n; i++) {
//        while (j < n && arr[i] > arr[j] * p) j++;
//        cnt = max(cnt, i - j + 1);
//    }
//    printf("%d", cnt);
//    return 0;
//}
