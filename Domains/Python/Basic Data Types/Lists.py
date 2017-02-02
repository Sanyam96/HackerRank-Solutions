x=input()

a=[]
for x in range(x):
    abc=raw_input().split()
    if abc[0] == 'insert':
        a.insert(int(abc[1]),int(abc[2]))
    elif abc[0] == 'print':
        print a
    elif abc[0] == "remove":
        a.remove(int(abc[1]))
    elif abc[0] == "append":
        a.append(int(abc[1]))
    elif abc[0] == "sort":
        a.sort()
    elif abc[0] == "pop":
        a.pop()
    elif abc[0] == "reverse" :
        a.reverse()