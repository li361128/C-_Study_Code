//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//class Solution {
//public:
//    int getMissingNumber(vector<int>& nums)
//    {
//        if (nums.empty()) return 0;
//        int l = 0, r = nums.size() - 1;
//        while (l < r)
//        {
//            int mid = l + r >> 1;
//            if (nums[mid] != mid) r = mid;
//            else l = mid + 1;
//        }
//        if (nums[r] == r) r++;
//        return r;
//    }
//};
//
