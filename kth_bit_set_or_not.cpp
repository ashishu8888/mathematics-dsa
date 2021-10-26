// left shift
void kth_bit(int n , int k){
	if(n&(1<<k-1)!=0)
		printf("Yes");
	else
		printf("No");
}

// right shift

void kth_Bit(int n,int k){
	if((n>>k-1)&1 == 1)
		printf("yes");
	else
		printf("no");
}