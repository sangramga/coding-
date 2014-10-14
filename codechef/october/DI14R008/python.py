def todec(s):
    z=""
    l=len(s)
    for i in range(0,l):
        if s[i]=='a':
            z+='0'
        else:
            z+='1'
    y=int(z,2)
    return y
t=input()
while t>0:
    s=raw_input()
    l=len(s)
    x=todec(s)
    pos=-1
    for i in range(0,l):
        if s[i]=='b':
            pos=i
            break
    pos1=pos
    if pos==-1:
        print '0,0'
    else:
        for i in range(pos,l):
            if s[i]=='a':
                z=""
                for j in range(i,pos-1,-1):
                    z=z+s[j]
                for j in range(i+1,l):
                    z=z+s[j]
                y=todec(z)
                if y<x:
                    x=y
                    pos1=i
        print pos,pos1
    t-=1
        
    

        

