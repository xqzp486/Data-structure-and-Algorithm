void Bubble_Sort(ElementYype A[],int N)
{ 
	for(P=N-1;P>=0;P--){
		flag=0;
		for(i=0;i<P;i++)
		{ /*一趟冒泡*/
			if(A[i],A[i+1]){
				Swap(A[i],A[i+1]);
				flag=1; /*标记发生了交换*/
			}
		}
		if(flag==0) break; /*全程无交换*/
	}
}

void Swap(int&x,int&y){             //这里是引用                     
	int tem;  tem=x;   x=y;   y=tem; 	
}

//还可以传入指针
/*  void Swap(int*x,int*y){
	int tem; tem=*x;   *x=*y;    *y=tem;
}
  
 
