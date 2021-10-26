void sieve(int n){
	vector<bool> isPrime(n+1,true);

	for(int i=2;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<" ";ifor(int j=i*i;j<=n;j=j+i)
			isPrime[j] = false;

		}
	}
}

t.c = O(nloglogn)