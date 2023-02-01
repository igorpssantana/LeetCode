/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    

    let numberS, Snumber = String(x), signal = 1;
    
    Snumber = [...Snumber];
    
    numberS = '';
    
    for(let a = Snumber.length-1; a>=0; a-- ){
        
        Snumber[a] !== '-' ? numberS += Snumber[a] : signal = -1;
    }
    
    numberS = Number(numberS) * signal;

    if((numberS > (-2)**31 && numberS < 2**31 - 1)) return numberS
    else return 0;
    
    

};