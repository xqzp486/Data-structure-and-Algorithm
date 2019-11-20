void PercDown(int A[],int P,int N){
    /*将N个元素的数组以A[p]为根的子堆调整为最大堆*/ 
    int Parent,Child;
    int X;
    X=A[P];
    for(Parent=p;(Parent*2+1)<N;Parent=Child){
        Child=Parent*2+1;
        if((Child!=N-1)&&(A[Child]<A[Child+1]){
            Child++;
        }
        if(X>=A[Child]) break; /*找到合适的位置了*/
        else A[Parent]=A[Child]; 
    }
    A[Parent]=X;
}
void HeapSort(int A[],int N){
    int i;
    for(i=N/2-1;i>=0;i--)
        PercDown(A;i;N);/*建立最大堆*/
        
    for(i=N-1;i>0;i--){
        Swap(&A[0],&A[i]);
        PercDown(A;0;i);
    } 
        
} 
