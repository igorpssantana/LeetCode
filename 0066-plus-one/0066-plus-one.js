/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    
    let arr = [], intermediate = 1;
    
    for(let a = digits.length - 1; a >= 0; a--){
        
        if(digits[a] + intermediate !== 10){
            arr.unshift(digits[a] + intermediate);
            intermediate= 0;
        } else 
            arr.unshift(0);
        
        if (intermediate === 1 && !(digits[a-1]))
            arr.unshift(1);     
    }
    
    return arr;
};