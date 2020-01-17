n=int(input())
s=input()
q=int(input())
for i in range(q):
	p=int(input())
	p-=1
	print(s[:p].count(s[p]))