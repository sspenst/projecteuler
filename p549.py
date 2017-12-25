LIMIT = 10**8

smallest_m = [0] * (LIMIT + 1)

for n in range(2, len(smallest_m)):
    # loop through all prime numbers and ~deal with them~
    if smallest_m[n] == 0:
        # loop through multiples of n
        i = n
        power = 1
        while True:
            # increment power for each additional multiple of n (i.e. loop iteration)
            # power represents the smallest number that contains all n factors of i!
            power *= n
            if power > LIMIT:
                break

            # check all multiples of power and update smallest_m
            for j in range(power, len(smallest_m), power):
                if i > smallest_m[j]:
                    smallest_m[j] = i

            # multiply power by n for any additional n factors of i
            k = i // n
            while k % n == 0:
                power *= n
                k //= n

            i += n

print(sum(smallest_m))
