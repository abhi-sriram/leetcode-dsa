class Solution {
public:
    bool binary_search(vector<int>& arr,int target){
        int min=0,max=arr.size();
        int mid = max/2;
        while(min<=max){
            if(arr[mid]==target){
                return true;
            }
            if(arr[mid]>target){
                max=mid-1;
            }else{
                min=mid+1;
            }
            mid = (min+max)/2;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[i][0]==target || matrix[i][n-1]==target){
                return true;
            }
            if(matrix[i][0]<=target && matrix[i][n-1]>=target){
                return binary_search(matrix[i],target);
            }
        }
        return false;
    }
};
