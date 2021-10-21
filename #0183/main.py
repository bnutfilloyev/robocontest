def sortLargeNumbers(arr, n):

	arr.sort(key=int)

arr = []
n = int(input())
    
for i in range(n):
    num = int(input())
    arr.append(num)

sortLargeNumbers(arr, n)

for i in arr:
	print(i)

