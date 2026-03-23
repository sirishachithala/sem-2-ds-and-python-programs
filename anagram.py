def is_anagram(s,t):
    return sorted(s)==sorted(t)
s=input("Enter first string:")
t=input("Enter second string:")
if is_anagram(s,t):
    print("Valid anagram")
else:
    print("Not an anagram")