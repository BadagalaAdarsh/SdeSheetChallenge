bool isValid(int matrix[9][9],int x,int y,int val){
    for(int j=0;j<9;j++){
        if(matrix[x][j]==val){
            return false;
        }
    }

    for(int i=0;i<9;i++){
        if(matrix[i][y]==val){
            return false;
        }
    }

    int subx=x/3 *3;
    int suby=y/3 * 3;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[subx + i][suby + j]==val){
                return false;
            }
        }
    }

    return true;
}

bool solve(int matrix[9][9],int i,int j){
    
    if(i==9){ // if i reaches at the end then weve found one solution return true;
        return true;
    }
    
    int ni=0;
    int nj=0;
    
    if(j==8){
        ni=i+1;
        nj=0;
    }else{
        ni=i;
        nj=j+1;
    }

    if(matrix[i][j]!=0){
        return solve(matrix,ni,nj);
    }
    
    for(int po=1;po<=9;po++){
        
        if(isValid(matrix,i,j,po)){ // is valid hoga toh jaate jao
            matrix[i][j]=po; // assign the po at this position
            if(solve(matrix,ni,nj)){ // if the remaining matrix is giving true, then we know that we have one sudoku solution.
                return true; // so return
            }else{
                matrix[i][j]=0; //else backtrack and try different combinations.
            }
        }
    }

    return false; // return false; if not found;


}

bool isItSudoku(int matrix[9][9]) {
    
    return solve(matrix,0,0);

}
