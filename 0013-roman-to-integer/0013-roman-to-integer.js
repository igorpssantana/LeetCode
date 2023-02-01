/**
 * @param {string} s
 * @return {number}
 */

 const romanNumbers = {

    'I' : 1,
    'V' : 5,
    'X' : 10,
    'L' : 50,
    'C' : 100,
    'D' : 500,
    'M' : 1000,
}
     
var romanToInt = function(s) {
    
    let a = 0, discount = 0;

    s = [...s];

    while (s[a]){

        romanNumbers[s[a]] < romanNumbers[s[a+1]] ? discount -= romanNumbers[s[a]]: discount += romanNumbers[s[a]];
        a++;
    }

    return discount;
};