

void rotate(vector<vector<int>>& matrix, int rowStart, int colStart, int rowEnd, int colEnd) {
    
    if(rowStart >= rowEnd - 1 || colStart >= colEnd - 1)
        return;
    
    int previous = matrix[rowStart + 1][colStart];
    int current;
    
    for(int i = colStart; i < colEnd; i++) {
        current = matrix[rowStart][i];
        matrix[rowStart][i] = previous;
        previous = current;
    }
    
    rowStart++;
    
    for(int i = rowStart; i < rowEnd; i++) {
        current = matrix[i][colEnd - 1];
        matrix[i][colEnd - 1] = previous;
        previous = current;
    }
    
    colEnd--;
    
    if(rowStart < rowEnd) {
        
        for(int i = colEnd - 1; i >= colStart; i--) {
            current = matrix[rowEnd - 1][i];
            matrix[rowEnd - 1][i] = previous;
            previous = current;
        }
    }
    
    rowEnd--;
    
    if (colStart < colEnd) {
        
        for(int i = rowEnd - 1; i >= rowStart; i--) {
            current = matrix[i][colStart];
            matrix[i][colStart] = previous;
            previous = current;
        }
        
    }
    colStart++;
    
    rotate(matrix, rowStart, colStart, rowEnd, colEnd);
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    rotate(mat, 0, 0, n, m);

}
