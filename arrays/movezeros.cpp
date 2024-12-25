// class Solution {
// public:
    // void moveZeroes(vector<int>& nums) {
        //  int n = nums.size();
        // int index = 0; 
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != 0) {
        //         nums[index] = nums[i];
        //         index++;
        //     }
        // }
        // for (int i = index; i < n; i++) {
        //     nums[i] = 0;
        // }

// brutw force approach


// int n = nums.size();
//          vector<int> temp;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] != 0)
//             temp.push_back(nums[i]);
//     }
//      int nz = temp.size();

//     for (int i = 0; i < nz; i++) {
//         nums[i] = temp[i];
//     }
//     for (int i = nz; i < n; i++) {
//         nums[i] = 0;
//     }

//  int n = nums.size();
//         int lastNonZeroIndex = 0; 
//         for (int i = 0; i < n; i++) {
//             if (nums[i] != 0) {
//                 swap(nums[lastNonZeroIndex], nums[i]);
//                 lastNonZeroIndex++;
//             }
//     }
//     }
// };