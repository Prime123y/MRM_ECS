import cmath
poly1='+2x^2-5x-3' #Enter quadratic with appropriate sign
a=poly1[0:2]
b=poly1[5:7]
c=poly1[8:]

a1=a.split('x')
b1=b.split("x")
c1=c.split()
for x in a1:    
 a2=eval(x)
 for x in b1:
  b2=eval(x)
  for x in c1:
   c2=eval(x)

d=(b2**2) + (4*a2*c2 )
if(d>0):
     x1= (-b2 + cmath.sqrt(d))/(2*a2)
     x2= (-b2 - cmath.sqrt(d))/(2*a2)
elif(d<0):
    x1=(-b2/2*a2) + cmath.sqrt(-d)/(2*a2)
    x2=(-b2/2*a2) - cmath.sqrt(-d)/(2*a2)
else:
    x1=x2=(-b2/2*a2)


print("{:.2f}".format(x1))
print("{:.2f}".format(x2))
