#include <stdio.h>
#include<stdlib.h>
int maxam(int a,int b,int c){

    if(a>=b && a>=c) {
         return a;

    }
    else if(b>=c && b >=a) {
        return b;}
        else return c;


}
int maxans(int **a,int n,int m){
    int max=0,i,j,v[n][m];
     if(n==1){
        for(i=0;i<m;i++)
        max+=a[0][i];
    return max;
    }

   else{
     for(j=0;j<n;j++)
        for(i=0;i<m;i++)
        {
            v[j][i]=0;

        }
     for(j=0;j<n;j++)
     {
        v[j][0]=a[j][0];
        if(max<v[j][0])
            max=v[j][0];

    }
    for(j=1;j<m;j++){
        v[0][j]=(v[0][j-1]>v[1][j-1]?v[0][j-1]:v[1][j-1])+a[0][j];
        if(max<v[0][j])
            max=v[0][j];
        for(i=1;i<n-1;i++)
        {
            v[i][j]=maxam(v[i-1][j-1],v[i][j-1],v[i+1][j-1])+a[i][j];
            if(max<v[i][j])
                max=v[i][j];
        }
        v[n-1][j]=(v[n-1][j-1]>v[n-2][j-1]?v[n-1][j-1]:v[n-2][j-1])+a[n-1][j];
        if(max<v[n-1][j])
            max=v[n-1][j];
    }



    return max;}
}
int main() {
	//code
	int t,n,m,i,k,j,max=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d%d",&n,&m);
	int **a = (int **)malloc(n * sizeof(int *));
        for (j=0; j<n; j++)
            a[j] = (int *)malloc(m * sizeof(int));

        for(j=0; j<n; j++)
            {for(k=0;k<m;k++)
               { scanf("%d",&a[j][k]);
	      }
}
        printf("%d\n",maxans(a,n,m));
	}
	return 0;
}
