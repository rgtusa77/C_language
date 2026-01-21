while True:
    nums = list(map(int, input().split()))
    if nums == [0, 0, 0]:
        break

    nums.sort()

    a, b, c = nums

    if c**2 == b**2 + a**2:
        print("right")
    else :
        print("wrong")