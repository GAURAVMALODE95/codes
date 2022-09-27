total_ammount=0
print("if you want to deposit press d and enter ammount")
print("if you want to withdraw press w and enter ammount")
while True:
	
	a=input()
	ops=a.split(" ")
	operation=ops[0]
	ammount=int(ops[1])
	
	
	
	if(operation=="d"):
		total_ammount=ammount+total_ammount
		
		
		
	if(operation=="w"):
		if(ammount > total_ammount):
			print("insufficient balance!!")
		else:
			total_ammount=total_ammount-ammount
	print("your total balance is = ",total_ammount)
	
	
	a=input("press y for continew")
	if not(a=="y"):
		break
		
		
		
print(total_ammount)
