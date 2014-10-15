num = 20
keep_going = True
to = 20

while keep_going:
    num += 1
    for n in range(2,to+1):
        if num % n != 0:
            break
        elif n == to:
            print num
            keep_going = False

