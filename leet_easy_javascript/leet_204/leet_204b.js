/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    if(n<=2) return 0; if(n == 3) return 1;
    var primes = [], cnt = 1, i, j;
    primes[2] = true;
    for(i = 4; i<n; i+=2) primes[i] = false;
    for(i = 3; i < n; i+=2){
        if(primes[i] == undefined){
            cnt++;
            primes[i] = true;
            for(j=i+i; j<n; j+=i) primes[j] = false;
        }
    }
    return cnt;
};

/* ~ sieve of eranthoses solution-method */