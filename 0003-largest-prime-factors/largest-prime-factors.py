num = 600851475143
temp = 0

# i = 2
# while i <= num / i :
#   if num % i == 0 :
#     temp = i
#   i += 1
# print "err... lowest factor"
# print temp

# i = num
# while i > 1 :
#   i -= 1
#   if num % i == 0 :
#     print i

divi = 1
while divi < num :
  if num % divi == 0 :
    num /= divi
  divi += 1
print "method two"
print num
