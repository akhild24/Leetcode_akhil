class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        sort (arr.begin(), arr.end());
        int n = arr.size();
        int ans =0; 
        for (int i =0; i<n-2; i++){
            int l = i+1;
            int r = n-1;
            
            while (l<r){
            if (arr[i] + arr[l] + arr[r] >= sum){r--;}
            else { ans += r-l;
            l ++; 
        }}}
        return ans; 
    }
};