num = int(input())

num_list = []

for i in range(num):
    in_num = int(input())
    num_list.append(in_num)

for i in num_list:
    print(pow(i, 2, 1000000007))
