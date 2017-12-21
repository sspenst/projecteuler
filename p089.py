import eulerlib

romans = open("files/p089_roman.txt", "r").read().strip().split("\n")
total = 0

for roman in romans:
    before_len = len(roman)
    after_len = len(eulerlib.num_to_roman(eulerlib.roman_to_num(roman)))
    total += before_len - after_len

print(total)