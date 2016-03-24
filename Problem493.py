'''
We want to find the expected number of distinct colors,
so what we can do is find the probability that a specific color
is present in the randomly picked balls. If you select 20 balls that are not
from a specific color and divide that by the total number of selections,
you get the probability that that specific color is not present.
So 1 - (60 choose 20) / (70 choose 20) gives the probability that a given
selection of balls will contain a specific color. If you multiply this
by 7 for each of the 7 balls, you arrive at the answer.

7 * (1 - (60 choose 20) / (70 choose 20) )
'''

import math

def nCr(n, r):
	f = math.factorial
	return f(n) / f(r) / f(n-r)
	
print (7.0 * (1.0 - (nCr(60,20) + 0.0) / nCr(70,20)))