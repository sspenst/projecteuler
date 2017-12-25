import functools
import random

_num_roman_map = [
    (1000, "M"),
    (900, "CM"),
    (500, "D"),
    (400, "CD"),
    (100, "C"),
    (90, "XC"),
    (50, "L"),
    (40, "XL"),
    (10, "X"),
    (9, "IX"),
    (5, "V"),
    (4, "IV"),
    (1, "I")
]

def num_to_roman(num):
    roman = ""
    i = 0

    while i < len(_num_roman_map):
        n, r = _num_roman_map[i]

        if num >= n:
            num -= n
            roman += r
        else:
            i += 1

    return roman

def roman_to_num(roman):
    num = 0
    i = 0

    while i < len(_num_roman_map):
        n, r = _num_roman_map[i]

        if roman.startswith(r):
            roman = roman[len(r):]
            num += n
        else:
            i += 1

    return num

def generate_primes(n):
    """ Input n>=6, Returns a list of primes, 2 <= p < n """
    n, correction = n-n%6+6, 2-(n%6>1)
    sieve = [True] * (n//3)
    for i in range(1,int(n**0.5)//3+1):
      if sieve[i]:
        k=3*i+1|1
        sieve[      k*k//3      ::2*k] = [False] * ((n//6-k*k//6-1)//k+1)
        sieve[k*(k-2*(i&1)+4)//3::2*k] = [False] * ((n//6-k*(k-2*(i&1)+4)//6-1)//k+1)
    return [2,3] + [3*i+1|1 for i in range(1,n//3-correction) if sieve[i]]

def prime_sieve(n):
    """ Sieve of Eratosthenes """
    result = [True] * (n + 1)
    result[0] = result[1] = False
    for i in range(int(n**0.5 + 1)):
        if result[i]:
            for j in range(i * i, len(result), i):
                result[j] = False
    return result

def is_prime(n):
    """ Implemented based on the GMP library source code """
    if n < 3 or n & 1 == 0:
        return n == 2

    d = 3
    r = 1

    while r != 0:
        q = n // d
        r = n - q * d
        if q < d:
            return True
        d += 2

    return False

def is_prime2(n):
    """ Implemented based on the GMP library source code """
    if n < 32:
        return (0xa08a28ac >> n) & 1
    if n & 1 == 0:
        return False

    if n % 3 == 0:
        return False
    if n % 5 == 0:
        return False
    if n % 7 == 0:
        return False

    d = 11

    while True:
        q = n // d
        r = n - q * d
        if q < d:
            return True
        if r == 0:
            break
        d += 2
        q = n // d
        r = n - q * d
        if q < d:
            return True
        if r == 0:
            break
        d += 4

    return False

_known_primes = [2, 3]

def is_prime3(n, _precision_for_huge_n=16):
    """
    Gives correct values for n less than 341550071728321.

    Source:
    https://rosettacode.org/wiki/Miller%E2%80%93Rabin_primality_test#Python
    """
    def _try_composite(a, d, n, s):
        if pow(a, d, n) == 1:
            return False
        for i in range(s):
            if pow(a, 2**i * d, n) == n-1:
                return False
        return True # n  is definitely composite

    global _known_primes
    if len(_known_primes) == 2:
        _known_primes += [x for x in range(5, 1000, 2) if is_prime(x)]
    if n in _known_primes or n in (0, 1):
        return True
    if any((n % p) == 0 for p in _known_primes):
        return False
    d, s = n - 1, 0
    while not d % 2:
        d, s = d >> 1, s + 1
    # Returns exact according to http://primes.utm.edu/prove/prove2_3.html
    if n < 1373653:
        return not any(_try_composite(a, d, n, s) for a in (2, 3))
    if n < 25326001:
        return not any(_try_composite(a, d, n, s) for a in (2, 3, 5))
    if n < 118670087467:
        if n == 3215031751:
            return False
        return not any(_try_composite(a, d, n, s) for a in (2, 3, 5, 7))
    if n < 2152302898747:
        return not any(_try_composite(a, d, n, s) for a in (2, 3, 5, 7, 11))
    if n < 3474749660383:
        return not any(_try_composite(a, d, n, s) for a in (2, 3, 5, 7, 11, 13))
    if n < 341550071728321:
        return not any(_try_composite(a, d, n, s) for a in (2, 3, 5, 7, 11, 13, 17))
    # otherwise
    return not any(_try_composite(a, d, n, s)
                   for a in _known_primes[:_precision_for_huge_n])
 
def is_probable_prime(n):
    """
    Miller-Rabin primality test.
 
    A return value of False means n is certainly not prime. A return value of
    True means n is very likely a prime.
    
    Source:
    https://rosettacode.org/wiki/Miller%E2%80%93Rabin_primality_test#Python
    """
    assert n >= 2
    # special case 2
    if n == 2:
        return True
    # ensure n is odd
    if n % 2 == 0:
        return False
    # write n-1 as 2**s * d
    # repeatedly try to divide n-1 by 2
    s = 0
    d = n-1
    while True:
        quotient, remainder = divmod(d, 2)
        if remainder == 1:
            break
        s += 1
        d = quotient
    assert(2**s * d == n-1)
 
    # test the base a to see whether it is a witness for the compositeness of n
    def try_composite(a):
        if pow(a, d, n) == 1:
            return False
        for i in range(s):
            if pow(a, 2**i * d, n) == n-1:
                return False
        return True # n is definitely composite
 
    _mrpt_num_trials = 5 # number of bases to test

    for i in range(_mrpt_num_trials):
        a = random.randrange(2, n)
        if try_composite(a):
            return False
 
    return True # no base tested showed n as composite

def factors(n):    
    return set(functools.reduce(list.__add__,
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)))
