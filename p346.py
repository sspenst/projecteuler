LIMIT = 10**12

b = 2

repunits = set([1])

while True:
    power = b*b
    num = power + b + 1
    if num >= LIMIT:
        break

    while num < LIMIT:
        repunits.add(num)
        power *= b
        num += power

    b += 1

print(sum(repunits))
