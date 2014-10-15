n = 0
m = 0
limit = 100
for i in range(1, limit + 1):
    n = n + i**2
    m = m + i
m = m**2
print m - n
