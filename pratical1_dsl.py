import numpy as np
def absent(a):
	count=0
	for i in range(10):
		if(a[i]=="ab"):
			count=count+1
	print("total number of absent students are=",count)

		
a=[] #empty list
for i in range(10):
	c=input("enter your marks")
	a.append(c)


print(a)
absent(a)
