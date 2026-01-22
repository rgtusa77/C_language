n = int(input())
shirts = list(map(int, input().split()))
T, P = map(int, input().split())

shirt_count = 0

for shirt in shirts:
    if shirt == 0:
        continue
    else :
        shirt_count += shirt // T
        if shirt % T > 0:
            shirt_count += 1

pen_set = n // P
pen_sep_count = n % P

print(shirt_count)
print(pen_set, pen_sep_count)
