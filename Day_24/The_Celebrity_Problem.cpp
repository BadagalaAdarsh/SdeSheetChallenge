int findCelebrity(int n) {
    int c=0;
    for(int i=1;i<n;i++){
        if(knows(c,i)==1){
            c=i;
           }
     }
    for(int i=0;i<n;i++){
        if(i!=c and (knows(c,i)==1 or knows(i,c)==0))return -1;
       }
   return c;
}
