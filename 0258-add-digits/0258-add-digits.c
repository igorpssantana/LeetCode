#include <math.h>

int sumDecimals (int num){

    int aux, sum = 0, p_level = 1, paux_level = 0;
    
    do{
        if(p_level == 1) sum += num % (int) pow(10, p_level); else sum += ((num % (int) pow(10, p_level)) - aux) / (pow(10, paux_level));
        aux = num % (int) pow(10, p_level);
        p_level++;
        paux_level++;  
    } while (num != (num % (int) pow(10, p_level - 1)));

    return sum;
}
int addDigits(int num){

    int sum = num;

    while ((float) sum / 10 >= 1.0 ){

        sum = sumDecimals(sum);
    }

    return sum;
}