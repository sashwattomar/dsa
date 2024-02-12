class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows  = matrix.size();
        int cols = matrix[0].size();
        int i = 0;
        int j = rows-1;
        while( i < j ) {
            swap( matrix[i], matrix[j]);
            i++;
            j--;
        }
        for( int k = 0; k < rows; k++) {
                 for( int l = k+1; l < cols; l++) {
                     swap(matrix[k][l],matrix[l][k]);
                }
        }
        return;
    }
};