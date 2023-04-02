h1,m1= input().split(':')
h2,m2= input().split(':')
h1=int(h1)
m1=int(m1)
h2=int(h2)
m2=int(m2)
min1 = h1*60+m1
min2 = h2*60+m2
diff = min1-min2
if(diff<0):
    diff = -1*diff
diff = diff//2
# print(diff)
# diff = abs(diff)
# diff =min1-min2
# print(min1)
# print(min2)
# print(diff//2)
if(m1+diff<60):
    m = m1+diff
    h = h1
    if m==60:
        m=0
        h=h+1
    m=str(m)
    h=str(h)
    if len(h)==1:
        h = '0'+h
    if len(m)==1:
        m='0'+m
    ans = h+':'+m
    print(ans)

elif m1+diff>=60:
    # print(diff//60)
    m=0
    h=0
    if diff//60 >0:
        h = h1 + (diff//60)
        m = m1 + (diff - (diff//60)*60)
    else :
        h = h1+1
        m = diff-(60 - m1) 
    # if m == 60:
    #     m=0
    #     h=h+1
    if(m>=60):
        h=h+1
        m = m -60
    m = str(m)
    # h= h+1
    h = str(h)
    if len(h)==1:
        h = '0'+h
    if len(m)==1:
        m='0'+m
    ans = h+':'+m
    print(ans)