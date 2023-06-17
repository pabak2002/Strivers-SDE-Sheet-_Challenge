class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
    int n = matrix[0].size();
    int m = matrix.size();
    int j = n-1;

    while(i>=0 and i<m and j>=0 and j<n){
        
        if(matrix[i][j]==target) return 1;

        else if(matrix[i][j]>target) j--;

        else if(matrix[i][j]<target) i++;
    }
    return 0;
    }
};