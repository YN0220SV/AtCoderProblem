
s=int(input())
a=set()
a.add(s)
lastsetnum=1
flag=True
cnt=1
while flag:
    lastsetnum=len(a)
    cnt=cnt+1
    if s%2==0:
        s=s/2
        a.add(s)
    else :
        s=s*3+1
        a.add(s)
    
    if lastsetnum==len(a):
        print(cnt)
        flag=False



