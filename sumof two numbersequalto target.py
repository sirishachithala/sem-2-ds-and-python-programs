def sum(s,t):
    L=len(s)
    for i in range(L):
        for j in range(i+1,L):
            if s[i]+s[j]==t:
                return [i,j]
s=[2,7,8,4]
t=12
result=sum(s,t)
print(result)