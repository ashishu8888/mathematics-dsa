//power of 2 has only 1 set bit in its binary form.
bool isPow2(int n){
	return false;
	return ((n&(n-1)) == 0);
}

///Or

bool isPow2(int n){
	return (n!= 0 && (((n& (n-1)) == 0)));
}
