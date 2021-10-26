//find two odd appreaing number
void oddAppearing (int arr[],int n){
	int Xor = 0 , res1 = 0 , res2 = 0;

	for(int i=0;i<n;i++){
		Xor = Xor ^ arr[i];
	}
	int sn = Xor & ~(Xor-1);

	for(int i=0;i<n;i++){
		if((arr[i]&sn)!=0)
			res1 = res1^arr[i];
		else
			res2 = res2^arr[i];
	}
	cout<<res1<<" "<<res;
}