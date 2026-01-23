n = int(input())

n_list = list(map(int, input().split()))

count = 0

for element in n_list :
    state = 1

    if element == 1 :
        continue

    for i in range(2, int(element**0.5) + 1) :
        if element % i == 0  :
            state = 0
            break

    if state == 1 :
        count += 1
    
print(count)