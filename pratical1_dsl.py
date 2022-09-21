def absent(a):
	count=0
	for i in range(3):
		if(a[i]=="ab"):
			count=count+1
	print("total number of absent students are =",count)
	print("total number of present students are =",3-count)
def avg(a):
    sum=0
    count=0
    for i in range(3):
        if(a[i]!=0):
            sum=sum+a[i]
            count=count+1
    avg=sum/count
    print("average marks =",avg)
    
def highest(a):
    for i in range(3):
        highest=a[0]
        for i in a:
            if i> highest:
                highest=i
    print(highest)
    






a=[]
#empty list/array
for i in range(3):
	c=int(input("enter your marks"))
	a.append(c)
    



print(a)
absent(a)
avg(a)
highest(a)
