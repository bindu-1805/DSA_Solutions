//LC240.cpp - Variation 2
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(), n=mat[0].size();
        int r=0,c=n-1;
        while(r<m && c>=0){
            if(target == mat[r][c]){
                return true;
            }
            else if(target < mat[r][c]){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
}

//LC74.cpp - Variation 1

    bool searchInRow(vector<vector<int>>& mat, int target, int row){
        int n = mat[0].size();
        int st = 0, end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(target == mat[row][mid]){
                return true;
            }
            else if(target > mat[row][mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        int startRow = 0, endRow = m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow-startRow)/2;
            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]){
                //Apply BS on the right row
                return searchInRow(mat, target, midRow);

            } else if(target >= mat[midRow][n-1]){
                startRow = midRow + 1;
            }
            else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
