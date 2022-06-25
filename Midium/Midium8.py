import numpy as np
N=int(input())
a=list(map(int,input().split()))
C1=[0 for k in range(8)]
C2=0
for i in  a:
    if i<3200:
        C1[int(i/400)]=1
    else:
        C2+=1

#print(C1)
if C2>0:
    ans1=sum(C1)
    ans2=sum(C1)+C2
else:
    ans1=sum(C1)
    ans2=sum(C1)

if ans1==0:
    ans1=1


print(ans1)
print(ans2)

