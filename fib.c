// fib.c
  
float fib(x){
int a, b, auxiliar, i;  
 
  a = 0;
  b = 1;  

  	printf("%d\n", b);  
  for(i = 0; i < x; i++){
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    printf("%d\n", auxiliar);
  }
	return 0;  
	  
	  }
