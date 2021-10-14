#Reversing the number!   
n = int(input("Enter number :"))
rev = 0
while n > 0:
    rem = n % 10
    rev = (rev * 10)+rem
    n = n//10
print("Reversed number is: "+str(rev))
