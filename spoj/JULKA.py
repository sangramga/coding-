for i in range(1,11):
    n = input()
    d = input()
    if(n%2==0):
        a = n/2 + d/2
        print a
        print n-a
    else:
        a = n/2 + 1 + d/2
        print a
        print n-a
