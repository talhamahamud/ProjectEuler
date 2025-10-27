s_sq=0
sq_s=0

for i in range(101):
    s_sq=s_sq+i**2
    sq_s=sq_s+i

print((sq_s)**2-s_sq)