def search(nums, b):
    finished = True
    for c in b:
        if c == False:
            finished = False
    if finished == True:
        if nums[0] // 100 == nums[-1] % 100:
            print(sum(nums))
        return

    for i in range(4, 9):
        if b[i-4] == True:
            continue
        for j in poly[i]:
            if nums[-1] % 100 == j // 100:
                b2 = b[:]
                b2[i-4] = True
                search(nums + [j], b2)

poly = {}

for i in range(3, 9):
    poly[i] = []
    n = 0
    while True:
        if i == 3:
            num = n*(n+1)//2
        elif i == 4:
            num = n*n
        elif i == 5:
            num = n*(3*n-1)//2
        elif i == 6:
            num = n*(2*n-1)
        elif i == 7:
            num = n*(5*n-3)//2
        elif i == 8:
            num = n*(3*n-2)

        if num >= 10000:
            break
        elif num >= 1000:
            poly[i].append(num)

        n += 1

for a in poly[3]:
    search([a], [False, False, False, False, False])
