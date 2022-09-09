N,M = map(int,input().split())
G=list(map(int,input().split()))
S=set(i+1 for i in range(M))

for i in range(N):
    L=list(map(int,input().split()))
    S&=set(L[1:])

print(len(S))


