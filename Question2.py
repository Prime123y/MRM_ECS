import cmath

def quad(sent): 

   list1=sent.split()
   a=0
   b=0
   c=0
   ctr=1
   x1=0
   x2=0
   for x in list1:
    #print(list1[0])
    if(x.isdigit()==True):
        if(ctr==1):
            a=x
            ctr+=1
        elif(ctr==2):
            b=x
            ctr+=1
        else:
            c=x
            ctr+=1
    
# Converting str values to int
   a1=int(a)
   b1=int(b)
   c1=int(c)
   check=type(b)
#Finding Discriminant
   d=(b1**2) - (4*a1*c1)

   if(d>0):
     x1= (-b1 + cmath.sqrt(d))/(2*a1)
     x2= (-b1 - cmath.sqrt(d))/(2*a1)
   elif(d<0):
    x1=(-b1/2*a1) + cmath.sqrt(-d)/(2*a1)
    x2=(-b1/2*a1) - cmath.sqrt(-d)/(2*a1)
   else:
    x1=x2=(-b1/2*a1)

   print("{:.2f}".format(x1))
   print("{:.2f}".format(x2))

sent=quad("- 1 x^2 + 4 x + 3 ")



      

