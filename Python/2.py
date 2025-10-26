start=1
second=2
total=0
while start<= 4000000:
    if start%2==0:
        total=total+start
    start, second=second, start+second

print(total)

