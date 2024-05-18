n = int(input("n: "))
for i in range(1,n+1):
    if(i==1):
        print((" "*((n)-1))+(("*"*((2*n+1)%2+1))))
    elif(i==n):
        print(("*"*(2*n)))
    else:
        print((" "*((n-i)))+"*"+(" "*(2*i-2))+"*")
