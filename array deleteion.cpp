#include<stdio.h>


   int main (){
	
	
	int a [] ={4,8,3,6,2},i;
	int key;
	int porToDelete;
	int size=5;
	
	display(a,size);
	
	size=deleteElement(a,size,key);
   display (a,size);
   
   return 0;		
}
