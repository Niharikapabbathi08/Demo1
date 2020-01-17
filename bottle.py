n=int(input())
a=list(map(int,input().split()))
l=list(set())
for i in range(n):
    x=0
    for j in range(len(l)):
        if a[i] not in l[j]:
            l[j].add(a[i])
            x=1
            break
    if x==0:
        l.append(set([a[i]]))
print(len(l))
