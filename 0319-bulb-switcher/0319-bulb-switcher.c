// int bulbSwitch(int n){
    
//     bool bulbs[n+1];
//     int turn, jumper, manyOn = 0;

//     memset(bulbs, true, sizeof(bulbs));

//     for(turn = 1; turn < n; turn++){
//         if(n == 0) return 0;
//         for(jumper = turn; jumper <= n; jumper += turn + 1){
//             bulbs[jumper] = bulbs[jumper] ? false : true;
//         }
        
//     }

//     for(int walker = 0; walker <= n; walker++){

//        if(bulbs[walker]) manyOn++;
//     }

//     return manyOn;
// }

// That's actually pretty interesting, the code above is a ilustrative way to do it. It doesn't pass all the test, unfortunately. So, i started looking for a better efficience solution and, while i was ilustrating the problem logic in my notebook, i found out that the n square represents the number of bulbs on at the end. It's not a pretty embased hypothesis but i made some test cases and it worked. Probably, the mathematical explanation will be more complex than that but that's a way to do it, apparently.

#include <math.h>

int bulbSwitch(int n){
    return (int) sqrt(n);
}