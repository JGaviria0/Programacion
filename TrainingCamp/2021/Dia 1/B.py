n = int(input())
number = input()
a = []
b = []
for i in range(0,10):
  x = ''
  for j in number:
    x += str((int(j)+i)%10)
  a.append(x)

for i in a:
  ans = str(9*10**1000)
  for j in range(0,len(i)):
    x = i[j:] + i[:j]
    if int(x) < int(ans):
      ans = x
  b.append(ans)
ans = str(9*10**1000)
for i in b:
  if int(i) < int(ans):
    ans = i
print(ans)