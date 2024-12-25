// class Solution {
//   public:
//     // a,b : the arrays
//     // Function to return a list containing the union of the two arrays.
//     vector<int> findUnion(vector<int> &a, vector<int> &b) {
//        set<int>st;
//        for(int i =0;i<a.size();i++){
//            st.insert(a[i]);
//        }
//        for(int i =0;i<b.size();i++){
//            st.insert(b[i]);
//        }
       
//        vector<int> temp;
//         for (auto it : st) {
//             temp.push_back(it); 
//         }
//         return temp;
//     }
// };

// this is using set
// i did not get how to do it using the binary seach algo