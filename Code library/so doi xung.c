int sdx(int n){
	int a=0, b, c=n;
	while(n!=0){
		b=n%10;
		a=a*10+b;
		n=n/10;
	}
	if(a==c) return 1;
	return 0;
}
