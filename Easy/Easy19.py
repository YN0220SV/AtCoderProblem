N,M,X=map(int,input().split())
a=list(map(int,input().split()))
b=[i for i in a if(i<X)]
c = [i for i in a if(i > X)]
print(min(len(b),len(c)))
