num_roman_map = [
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

    while i < len(num_roman_map):
        n, r = num_roman_map[i]

        if num >= n:
            num -= n
            roman += r
        else:
            i += 1

    return roman

def roman_to_num(roman):
    num = 0
    i = 0

    while i < len(num_roman_map):
        n, r = num_roman_map[i]

        if roman.startswith(r):
            roman = roman[len(r):]
            num += n
        else:
            i += 1

    return num

def generate_primes(n):
    """ Input n>=6, Returns a list of primes, 2 <= p < n """
    n, correction = n-n%6+6, 2-(n%6>1)
    sieve = [True] * int(n/3)
    for i in range(1,int(n**0.5)/3+1):
      if sieve[i]:
        k=3*i+1|1
        sieve[      k*k/3      ::2*k] = [False] * ((n/6-k*k/6-1)/k+1)
        sieve[k*(k-2*(i&1)+4)/3::2*k] = [False] * ((n/6-k*(k-2*(i&1)+4)/6-1)/k+1)
    return [2,3] + [3*i+1|1 for i in range(1,n/3-correction) if sieve[i]]

def prime_sieve(n):
    # Sieve of Eratosthenes
    result = [True] * (n + 1)
    result[0] = result[1] = False
    for i in range(int(n**0.5 + 1)):
        if result[i]:
            for j in range(i * i, len(result), i):
                result[j] = False
    return result
