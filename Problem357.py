'''
- Create a list of all primes up to 100 000 001
- Search through all even numbers
- For each number, find all pairs of factors
- Check if the sum of each pair of factors is in the list of primes
- If all pairs are in the list, add it to the sum
'''
def primes2(n):
    """ Input n>=6, Returns a list of primes, 2 <= p < n """
    n, correction = n-n%6+6, 2-(n%6>1)
    sieve = [True] * (n/3)
    for i in xrange(1,int(n**0.5)/3+1):
      if sieve[i]:
        k=3*i+1|1
        sieve[      k*k/3      ::2*k] = [False] * ((n/6-k*k/6-1)/k+1)
        sieve[k*(k-2*(i&1)+4)/3::2*k] = [False] * ((n/6-k*(k-2*(i&1)+4)/6-1)/k+1)
    return [2,3] + [3*i+1|1 for i in xrange(1,n/3-correction) if sieve[i]]

primes = primes2(100000001)

print("Primes computed")

for i in xrange(2,100,2):
	for j in xrange(1,int(i**0.5)+1):
		if i % j == 0:
			if (j + int(i/j)) in primes:
				print(i)
