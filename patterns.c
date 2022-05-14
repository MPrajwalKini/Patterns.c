//*
//* *
//* * *
#include <stdio.h>

int main() {
    int i,j,n=3;
    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


//	  *
//  *	*
//* * *
#include <stdio.h>

int main() {
    int i,j,k,n=3;
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf("\t");
        }
        for(k=0;k<i+1;k++){
            printf("*\t");
        }
        printf("\n");
    }
    
    return 0;
}


//   *
//  *	*
//*  *  *
#include <stdio.h>

int main() {
    int i,j,k,n=3;
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<i+1;k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

//    *
//  *	* *
//* * * * *
#include <stdio.h>

int main() {
    int i,j,k,n=3;
    
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


//1
//1 2
//1 2 3
#include <stdio.h>

int main() {
    int i,j,n=3;
    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d\t",j+1);
        }
        printf("\n");
    }
    
    return 0;
}


//1
//2 2
//3 3 3
#include <stdio.h>

int main() {
    int i,j,n=3;
    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d\t",i);
        }
        printf("\n");
    }
    
    return 0;
}


//	  1
//  1 2
//1 2 3
#include <stdio.h>

int main() {
    int i,j,k,n=3;
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf("\t");
        }
        for(k=0;k<i+1;k++){
            printf("%d\t",k+1);
        }
        printf("\n");
    }
    
    return 0;
}


//	  1
//  2 2
//3 3 3
#include <stdio.h>

int main() {
    int i,j,k,n=3;
    
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf("\t");
        }
        for(k=0;k<i+1;k++){
            printf("%d\t",i+1);
        }
        printf("\n");
    }
    
    return 0;
}

//      1
//    1 2 1
//  1 2 3 2 1
//1 2 3 4 3 2 1
#include<stdio.h>

int main() {
    int i,j,n=4;
    
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("%d",j+1);
        }
        for(j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
