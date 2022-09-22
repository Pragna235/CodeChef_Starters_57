#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i=0;
	scanf("%d",&t);
    while(t--){
	    int n,a[10000],i,count=0,zc=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    if(a[i]<0)
	    count++;
	    if(a[i]==0){
	    zc++;
	   }
	    }
	    if(zc==1 || count%2==0)
	    printf("0\n");
	    else
	    printf("1\n");
	    
	}
	return 0;
}