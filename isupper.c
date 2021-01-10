 #include <stdio.h>   
 #include <ctype.h>   
 int main()   
 {    
 	char p[]="The Matrix Reloaded";    
	 int i=0;    
	 while(p[i])   
	  {    
	   if( !isupper(p[i]++) )    
	    i++;;   
		 }   
		  printf("%d", i);   
		   return 0; 
		     } 
