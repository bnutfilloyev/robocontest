import math

def isPerfectSquare(x):
	s = int(math.sqrt(x))
	return s*s == x

def isFibonacci(n):

	return isPerfectSquare(5*n*n + 4) or isPerfectSquare(5*n*n - 4)
	
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

for i in arr:
    if (isFibonacci(i) == True):
        arr.remove(i)

print(*sorted(arr, reverse=True, key=None))