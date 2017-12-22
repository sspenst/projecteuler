import eulerlib

digits = 14
rth_nums = range(1, 10)
total = 0

for _ in range(2, digits):
    new_rth_nums = []

    # loop through all rth nums with (_-1) digits
    for rth in rth_nums:
        # try appending each digit 0-9 to create a new rth
        for i in range(10):
            num = rth * 10 + i

            c = num
            s = 0
            while c:
                s, c = s + c % 10, c // 10
            # check if right trunctable harshad number
            if num % s == 0:
                new_rth_nums.append(num)
                # check if strong harshad number
                if eulerlib.is_prime2(num // s):
                    # find associated strong right truncatble harshad primes
                    for j in range(10):
                        p = num * 10 + j
                        if eulerlib.is_prime2(p):
                            total += p

    rth_nums = new_rth_nums

print(total)
