
list1=[1,2,3,4,1,2,3,6,8,'a','a','b','c']

list2=[]
for x in list1:
    if x not in list2:
        list2.append(x)
    else:
        continue
        
print(list2)