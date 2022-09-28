def display_matrix(matrix):
    for i in range(len(matrix)):
        print("[ ", end='')
        for j in range(len(matrix[0])):
            print(matrix[i][j], end=' ')
        print("]")
    print("")

def input_matrix():
    r=int(input("Enter the no. of rows   : "))
    c=int(input("Enter the no. of columns: "))
    matrix=[]
    for i in range(r):
        a=[]
        for j in range(c):
            print("Enter the (",i+1,",",j+1,") element: ",end='')
            elem=int(input())
            a.append(elem)
        matrix.append(a)
    print("Matrix is :")
    display_matrix(matrix)
    return matrix

def add_matrix(matrix1, matrix2):
    matrix1_row=len(matrix1)
    matrix=[]
    for i in range(matrix1_row):
        a=[]
        for j in range(len(matrix1[i])):
            elem=matrix1[i][j]+matrix2[i][j]
            a.append(elem)
        matrix.append(a)

    display_matrix(matrix1)
    display_matrix(matrix2)
    print("Addition of two matrices is :\n")
    display_matrix(matrix)

def subtract_matrix(matrix1, matrix2):
    matrix1_row=len(matrix1)
    matrix=[]
    for i in range(matrix1_row):
        a=[]
        for j in range(len(matrix1[i])):
            elem=matrix1[i][j]-matrix2[i][j]
            a.append(elem)
        matrix.append(a)

    display_matrix(matrix1)
    display_matrix(matrix2)
    print("Subtraction of two matrices is :\n")
    display_matrix(matrix)

def transpose_matrix(matrix):
    matrix_row=len(matrix)
    matrix_column=len(matrix[0])
    matrix_trans=[]

    for i in range(matrix_column):
        a=[]
        for j in range(matrix_row):
            elem=matrix[j][i]
            a.append(elem)
        matrix_trans.append(a)
    display_matrix(matrix)
    print("Transpose of matrix is:")
    display_matrix(matrix_trans)

def multiply_matrix(matrix1, matrix2):
    matrix=[]
    for i in range(len(matrix1)):
        a=[]
        for j in range(len(matrix2[0])):
            elem=0
            for k in range(len(matrix2)):
                elem+=matrix1[i][k]*matrix2[k][j]
            a.append(elem)
        matrix.append(a)
    display_matrix(matrix1)
    display_matrix(matrix2)
    print("Multiplication of two matrices is :\n")
    display_matrix(matrix)

flag='y'
print("Input the first Matrix:")
matrix1=input_matrix()
print("Input the second Matrix:")
matrix2=input_matrix()
while(flag=='y'):
    print("<-------Menu------>")
    print("1.Addition")
    print("2.Subtraction")
    print("3.Multiplication")
    print("4.Transpose")
    choice=int(input("Enter the choice: "))
    if(choice==1):
        if(len(matrix1)==len(matrix2) and  len(matrix1[0])==len(matrix2[0])):
            add_matrix(matrix1,matrix2)
        else:
            print("Addition is not possible")
    elif(choice==2):
        if(len(matrix1)==len(matrix2) and  len(matrix1[0])==len(matrix2[0])):
            subtract_matrix(matrix1,matrix2)
        else:
            print("Subtraction is not possible")
    elif(choice==3):
        if(len(matrix1[0])==len(matrix2) ):
            multiply_matrix(matrix1,matrix2)
        else:
            print("Multiplication is not possible")
    elif(choice==4):
        n=int(input("Which matrix do you want to transpose (1/2): "))
        if(n==1):
            transpose_matrix(matrix1)
        elif(n==2):
            transpose_matrix(matrix2)
        else:
            print("Incorrect Choice!!!!")
    else:
        print("Incorrect Choice!!!!")
    flag=input("Do you want to continue (y/n): ")
if(flag=='n'):
    print("Thank You!!!")
