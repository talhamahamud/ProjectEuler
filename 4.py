#------------------------------Project Euler-----------------------------
#-----------------------------Problem Number 4---------------------------
# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers 
# is 9009 = 91 * 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

#Solution:
def palin(k): #So in this solution, firstly we define a function, by which we will detect a palindrom.
    if str(k)==str(k)[::-1]:
        return True
    
b=0 # and this variable will help us to keep track on the largetst palindromic number.
f=100 # then the starting point
l=999 # end point
while f<=999: # Now the loop is starting. 
    for i in range(f, 999): # Here is two loop, the while loop will go to 100 to 999 and the for loop will do that,
        if palin(i*f)==True and b<(i*f): # but for each 1 while loop the for loop will complete 100 to 999.
            # that's how we will get every possible value of multiplication of 3 digit.
            b=i*f # and this line is helping us to keep track the largest value.
    f=f+1
    
print(b)# lastly we are pringing the value to see.

