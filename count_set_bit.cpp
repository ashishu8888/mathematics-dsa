//brian kerningam's algorithm
/* when you subtract 1 from a number all the bits which are 0 after the last set bit , they become 1 and the last set bit becom 0 from 1*/
int countBits(int n){
	int res = 0;
	while(n>0){
		n = (n&(n-1));
		res++;
	}
	return res;
}