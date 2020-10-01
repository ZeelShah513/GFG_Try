def sol(l):
    ls=[]
    for i in range(len(l)-1):
        # print(l[i])
        # print(l[i],max(l[i+1:]))
        
        if l[i] >= max(l[i+1:]):
            ls.append(l[i])
    ls.append(l[-1])
    # print(ls)
    return ls
      
      
def sol2(l):
    ls=[]
    for i in range(len(l)):
        le = l[i]
        for j in range(i+1,len(l)):
            if l[j] >= le:
                le = l[j]
        ls.append(le)
    # print(ls)
    return set(ls)

for t in range(int(input())):
    n = input()
    l=list(map(int,input().split()))
    # ls=sol(l)
    ls=sol2(l)
    for i in ls:
        print(i,end=" ")
    print("")
    
