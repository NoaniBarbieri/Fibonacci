def fib(n):
    if isinstance(n,int):
        if n==0:
            exit
        elif n==1:
            return 1
        elif n==2:
            return 1
        else:
            return (fib(n-1)+fib(n-2))
def serie(n,i=1):
    if n==i and n==2:
        print(fib(i))
        exit
    elif n==1:
        print(fib(1))
    elif n==i:
        print(fib(i))
    else:
        if n>i:
            print(fib(i))
            serie(n,i+1)
        elif n==i:
            exit
        
