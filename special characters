#include <stdio.h> 
#include <ctype.h> 
 
void main() 
{ 
    int i=0,special=0; 
    char str[100]; 
     
    printf("Enter any string: "); 
    gets(str);  
     
    while(str[i] != '\0') 
    { 
    	if((isalpha(str[i])==0) && (isdigit(str[i])==0) && (isspace(str[i])==0)) special++;    	 
    	i++; 
	} 
	printf("Special Characters = %d",special); 
} 
