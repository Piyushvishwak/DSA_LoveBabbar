#include <bits/stdc++.h>
#include <cmath>
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int result=1;
	while(n>0){
		if(n&1){
			result=(1LL*(result%m)*(x)%m)%m;
		}
		x=(1LL*(x%m)*(x%m))%m;
		n=n>>1;
	}
	return result;
}