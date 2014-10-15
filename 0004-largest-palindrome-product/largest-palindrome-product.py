big = 0
pro = 0

a = 0
while a < 1000:
  a += 1
  b = 0
  while b < 1000:
    b += 1
    pro = a * b
    if str(pro) == str(pro)[::-1]:
      if pro > big:
        big = pro

print big

