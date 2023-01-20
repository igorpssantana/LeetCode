int fib(int n){

    int fibonacciSum, fibonacciNumber = 0, fibonacciLast = 0;

    for(int a = 0; a <= n; a++)
    {
        
        fibonacciSum  = fibonacciLast + fibonacciNumber;
        
        if(a == 1){
            continue;
        }
        else{
            fibonacciLast = fibonacciNumber;
        }
        
        if(a == 0)
            fibonacciNumber = 1;
        else{
            fibonacciNumber = fibonacciSum;
        }
        
        
         
    }

   return fibonacciSum;

}