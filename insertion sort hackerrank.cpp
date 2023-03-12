#include<iostream>
using namespace std;

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,a[13],i,pos,x,k;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
scanf("%d",&x);
for(k=0;k<n;k++){
if(x>a[k])
continue;
else
pos=k;
break;
}
n++;
pos++;
for (i = n-1; i >= pos; i--)
a[i] = a[i - 1];

// insert x at pos
a[pos - 1] = x;

// print the updated array
for (i = 0; i < n; i++)
printf("%d ", a[i]);

/* Enter your code here. Read input from STDIN. Print output to STDOUT */
return 0;
}


