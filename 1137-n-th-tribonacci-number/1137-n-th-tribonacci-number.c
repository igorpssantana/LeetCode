int tribonacci(int n){

    int t1 = 0, t2 = 1, t3 = 1, tSum;

    for(int a = 0; a <= n; a++){

        if(n == 0)
            return tSum = t1;
    
        else if(n > 0 && n < 3)
            return tSum = t2;
        
        else if(n >= 3 && a >= 3){

            tSum = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = tSum;
        }
    }

    return tSum;




}