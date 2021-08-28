def minTrees(n):
	count = 0;

	while (n):
		n &= (n - 1);
		count += 1;
	return count;

if __name__ == '__main__':
    test_num = int(input())

    num_list = []

    for i in range(test_num):
        num = int(input())
        num_list.append(num)

    for i in num_list:
	    print(minTrees(i));

