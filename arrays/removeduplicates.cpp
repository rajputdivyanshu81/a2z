// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int n = nums.size();
//         //two pointer approach
//         int i = 0;
//         for (int j = 1; j < n; j++) {
//         if (nums[i] != nums[j]) {
//         i++;
//         nums[i] = nums[j];
//         }
//         }
//         return i + 1;

// // take a set and add elements to it

// int n = nums.size();
//          set < int > set;
//   for (int i = 0; i < n; i++) {
//     set.insert(nums[i]);
//   }
//   //set will not accept an element which is repeated into it

//   int k = set.size();
//   int j = 0;
//   // push back elements in to the original array
//   for (int x: set) {
//     nums[j++] = x;
//   }
//   return k;

//   time com -> O(n)
//   space com -> O(n)
    

    // solution before i have given

        // int noOfUniques = 1;
        // for(int i =1;i<nums.size();i++){
        //      if (nums[i] != nums[i - 1]) {
        //         nums[noOfUniques] = nums[i];
        //         noOfUniques++;
        //     }
            
        // }
        // return noOfUniques;


        // two pointer approach


        // int i = 1;
        // int j =  0;
        // while(i<nums.size()){
        //     if(nums[i] == nums[j])++i;
        //     else nums[++j] = nums[i++];
        // }
        //     return j+ 1;

//     }
// };