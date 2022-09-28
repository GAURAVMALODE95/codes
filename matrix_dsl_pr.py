def display_matrix1(x):
    for i in range(col1):
        for j in range(row1):
            print(matrix1[i][j],end=" ")
        print()
def display_matrix2(x):
    for i in range(col2):
        for j in range(row2):
            print(matrix2[i][j],end=" ")
        print()

def add(matrix1,matrix2):
    matrix=[]
    for i in range(len(matrix1)):
        a=[]
        for j in range(len(matrix1[i])):
            ele=matrix1[i][j]+matrix2[i][j]
            a.append(ele)
        matrix.append(a)
    print(matrix)

def sub(matrix1,matrix2):
    matrix=[]
    for i in range(len(matrix1)):
        a=[]
        for j in range(len(matrix1[i])):
            ele=matrix1[i][j]-matrix2[i][j]
            a.append(ele)
        matrix.append(a)
    print(matrix)




row1=int(input("enter the number of rows"))
col1=int(input("enter the number of coloums"))
matrix1=[]
for i in range(row1):
    a=[]
    for j in range(col1):
        a.append(int(input("enter the elements")))
    matrix1.append(a)

row2=int(input("enter the number of rows"))
col2=int(input("enter the number of coloums"))
matrix2=[]
for i in range(row2):
    b=[]
    for j in range(col2):
        b.append(int(input("enter the elements")))
    matrix2.append(b)

display_matrix1(matrix1)
display_matrix2(matrix2)
add(matrix1,matrix2)
sub(matrix1,matrix2)
