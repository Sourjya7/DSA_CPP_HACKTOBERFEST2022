/*You are given a positive integer primeFactors. You are asked to construct a positive integer n that satisfies the following conditions:

The number of prime factors of n (not necessarily distinct) is at most primeFactors.
The number of nice divisors of n is maximized. Note that a divisor of n is nice if it is divisible by every prime factor of n. For example, if n = 12, then its prime factors are [2,2,3], then 6 and 12 are nice divisors, while 3 and 4 are not.
Return the number of nice divisors of n. Since that number can be too large, return it modulo 109 + 7.

Note that a prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. The prime factors of a number n is a list of prime numbers such that their product equals n.
*/


typedef long long ll;
int mod = 1000000007;
ll power(ll x, ll y){
	ll res = 1;                
	while (y > 0){        
		if (y & 1)
			res = (res*x) % mod;         
		y >>= 1; // y /= 2
		x = (x*x) % mod;
	}
	return res % mod;
}
int maxNiceDivisors(int n) {        
	ll ans = 1;
	if(n <= 3)return n;        
	ll numOfDiv3 = n / 3, rem = n % 3;
	if(rem == 1) rem = 4, --numOfDiv3;
	else if(!rem) rem = 1;

	return (power(3, numOfDiv3) * rem) % mod;                                        
}
