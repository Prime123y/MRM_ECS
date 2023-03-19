
list1=[]

while True:
    value = input("Enter a value, press enter to stop ")
    if value == "":
        break
    list1.append(value)

list2=[]
l=len(list1)
for x in list1:
     if(x[0]==' '):
           continue
        
     if x.strip() not in list2:
         list2.append(x.strip())
     else:
        continue
        
print(list2)

list1=[]
