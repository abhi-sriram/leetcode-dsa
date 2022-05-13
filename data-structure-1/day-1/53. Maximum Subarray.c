class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long int size = nums.size(),i=0,j=0,curr_sum = 0,max_sub = nums[0];
        // vector<vector<int>> arr(size,vector<int> (size,0));
        // long int max_size = -100000;
        
        // Solution using dp memorization
        // for(i=0;i<size;i++){
        //     for(j=i;j<size;j++){
        //         if(i==j){
        //             arr[i][j] = nums[j];
        //         }else{
        //             arr[i][j] = arr[i][j-1]+nums[j];
        //         }
        //         if(arr[i][j]>max_size){
        //             max_size = arr[i][j];
        //         }
        //     }
        // }
        
        // Another Solution
        while(j<size){
            if(curr_sum<0){
                    curr_sum = 0;
            }
            curr_sum += nums[j];
            max_sub = max(curr_sum,max_sub);
            j++;
            
        }
        // return max_size;
        return max_sub;
    }
};
