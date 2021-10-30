#taking user input
num=int(input("Enter a numer: "))
n =num
rem=0
rev=0
#while loop to reverse a number
while n>0:
    rem=n%10
    rev+=rem**3 #number reverse formula
    n=n//10
#checking if number is Armstrong number or not
if rev==num:
    print(num,"is a Armstrong Number")
else:
    print(num,"is  not a Armstrong Number")
#Code by Rijushree Guha 