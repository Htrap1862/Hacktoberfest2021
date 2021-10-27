#Brute force
numFibCalls=0
def fibonacci(n):
    global numFibCalls
    numFibCalls += 1
    if n<=1:
        return n
    else:
        f=fibonacci(n-1) + fibonacci(n-2)
        return f
n=int(input("enter a number for brute force:"))
def testFib(n):
    for i in range(n):
        global numFibCalls
        numFibCalls = 0
        print('fibonacci value of' ,i ,'=' , fibonacci(i))
        print('fib was called', numFibCalls, 'times')

testFib(n)

#Memoization
FibCalls=0
memo = {0: 0, 1: 1}


def fibonacci_memorization(n):
    global FibCalls
    FibCalls+=1
    global memo
    if n in memo:
        return memo[n]
    if n <=1:
        return n
    else:
        f=fibonacci_memorization(n - 2) + fibonacci_memorization(n - 1)
        memo[n]=f
    return f


m=int(input("enter a number for Memoization:"))
def testFibMemo(m):
    for i in range(m):
        global FibCalls
        FibCalls = 0
        print('fibonacci value of' ,i ,'=' , fibonacci_memorization(i))
        print('fib was called', FibCalls, 'times')

testFibMemo(m)

#Bottom up approach

F=[0]*100
numCalls=0
def fib(n):
    global numCalls
    numCalls += 1

    if(n<=1):
        return n
    F[0]=0
    F[1]=1
    for i in range(2,n+1):
        F[i]=F[i-2]+F[i-1]

    return F[n]
N=int(input("enter a number for bottomup:"))

def testFibB(N):
    for i in range(n):
        global numCalls
        numCalls = 0
        print('fibonacci value of' ,i ,'=' , fib(i))
        print('fib was called', numCalls, 'times')

testFibB(N)
