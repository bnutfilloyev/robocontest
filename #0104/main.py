from math import sqrt, trunc

letter = input()
row = trunc(sqrt(len(letter)))
col = row if row * row == len(letter) else row + 1

k = 0

mtrx = ["" for i in range(col)]

for x in letter:
    mtrx[k % col] += x
    k += 1
    
for word in mtrx:
    print(word, end=" ")
