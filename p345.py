from munkres import Munkres, print_matrix

print("Solution using memoization:")

def matrix_sum(row, cols, matrix):
    cache_tup = (row, tuple(sorted(cols)))
    if cache_tup in matrix_sum_cache:
        return matrix_sum_cache[cache_tup]

    max_sum = 0

    for i in range(len(matrix)):
        if i not in cols:
            if row == len(matrix) - 1:
                return matrix[row][i]

            this_sum = matrix[row][i] + matrix_sum(row + 1, cols + [i], matrix)
            if this_sum > max_sum:
                max_sum = this_sum

    matrix_sum_cache[cache_tup] = max_sum
    return max_sum

matrix_sum_cache = {}
lines = open("files/p345_input.txt", "r").read().split("\n")
matrix = []

for line in lines:
    matrix.append(list(map(int, line.strip().split())))

print(matrix_sum(0, [], matrix), end='\n\n')

print("Solution using the Hungarian (Munkres) Algorithm:")
lines = open("files/p345_input.txt", "r").read().split("\n")

matrix = []
cost_matrix = []

for line in lines:
    matrix.append(list(map(int, line.strip().split())))
    cost_matrix.append([1000 - int(num) for num in line.strip().split()])

indices = Munkres().compute(cost_matrix)
total = 0

for row, column in indices:
    total += matrix[row][column]
    print('(%d, %d) -> %d' % (row, column, matrix[row][column]))

print('total = %d' % total)
