/**
 * @param {number} n
 * @return {number}
 */


var countPrimes = function(n) {
    if(n < 3) return 0;
    if(n == 3) return 1;
    var primes = []; //~ note: off by one bc not including 2
    var flag1 = true, flag2 = true;
    primes.push(3);
    //~ var breaker = -1;
    var i2 = 0;
    for(var i = 5; i<n; i+=6){
        flag1 = true;
        flag2 = true
        //~ breaker = Math.ceil(Math.sqrt(i));
        for(var j in primes){
            i2 = i+2;
            if(i2>=n) flag2 = false;
            if((i%primes[j])===0)
                flag1 = false;
            if((i2%primes[j])===0)
                flag2 = false;
            if(flag1 === false && flag2 === false)
                break;
            //~ if(primes[j]>breaker)
                //~ break;
            if((primes[j]*primes[j])>i) //~ using breaker (above) was an alternative attempt
                break;                  
        }
        if(flag1===true)
            primes.push(i);
        if(flag2===true)
            primes.push(i2);
    }
    return primes.length + 1; //~ +1 to account for the number 2
};

/* ~ time limit exceeded -- nevertheless a mathematically correct solution */