"""
Special number is a numbe in which the 
sum of the factorial of digits of a number (N) 
is equal to the number itself.
"""
import math
#taking user input
num=int(input("Enter a number: "))
n =num
rem=0
rev=0
#while loop to add the factorial of each digit of a number
while n>0:
    rem=n%10
    rev+=math.factorial(rem) 
    n=n//10
#checking if number is Special number or not
if rev==num:
    print(num,"is a Special Number")
else:
    print(num,"is  not a Special Number")
#Code by Rijushree Guha 