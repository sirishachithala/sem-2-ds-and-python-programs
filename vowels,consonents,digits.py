s=input()
v=0
c=0
d=0
for ch in s:
  if ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u':
    v=v+1
  elif ch.isdigit():
    d=d+1
  else:
    c=c+1
print("vowels are:",v)
print("consonents are:",c)
print("digits are:",d)