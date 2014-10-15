a = b = 1
count = 0

while a < 4000000 and b < 4000000 :
  a = a + b
  if a % 2 == 0 :
    count += a
  b = a + b
  if b % 2 == 0 :
    count += b
print count
