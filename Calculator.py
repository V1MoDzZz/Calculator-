import sys

sys.ps1 = '\033[01;32m '
print(sys.ps1)

def multiply():
 a1 = float(input('Enter the number 1st number: '))
 b1 = float(input('Enter the 2nd number: '))
 print(a1*b1)

def plus():
 a1 = float(input('Enter the number 1st number: '))
 b1 = float(input('Enter the 2nd number: '))
 print(a1+b1)
 

def minus():
 a1 = float(input('Enter the number 1st number: '))
 b1 = float(input('Enter the 2nd number: '))
 print(a1-b1)
 
 

def divide():
 a1 = float(input('Enter the number 1st number: '))
 b1 = float(input('Enter the 2nd number: '))
 print(a1/b1)
 
l = input('Do ya wanna multiply, plus, divide or minus? [OPTIONs:minus/plus/divide/multiply]: ')

if (l == "plus"):
 plus()
elif (l == "minus"):
 minus()
elif (l == "divide"):
 divide()
elif (l == "multiply"):
 multiply()
else:
 print("Sorry but there\'s no option for that. pleae make sure you spelled correctly. the choices are : minus, plus, divide of multiply")

*You can use it if want*
