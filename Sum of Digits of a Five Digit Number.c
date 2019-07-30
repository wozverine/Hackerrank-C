#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
	
    /*int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.*/
    char x[5];
    scanf("%s", x);
    printf("%d",x[0]-'0'+x[1]-'0'+x[2]-'0'+x[3]-'0'+x[4]-'0');
    return 0;
}

