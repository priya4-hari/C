
int main()  
{  
   // Since && defines a sequence point after first operand, it is  
   // guaranteed that f1() is completed first. 
   int p = f1() && f2();   
   return 0;  
}
