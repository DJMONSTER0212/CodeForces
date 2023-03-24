k = int(input())
st = input()
dic = {}
for i in st:
    if(i in dic):
        dic[i] = dic[i] +1
    else :
        dic[i] = 1
# print(dic)
e= 0
for i in dic:
    if dic[i]%k !=0:
        e=e+1
if e:
    print(-1)
else :
    ans = ''
    for i in dic:
        ans = ans+ i*(dic[i]//k)
    temp = ans
    for i in range(k-1):
        ans = ans + temp
    print(ans)