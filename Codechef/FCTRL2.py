# https://www.codechef.com/problems/FCTRL2

a = int(input())

for i in range(a):
    b = int(input())
    
    i = 1
    while b>0:
        i = i*b
        b = b-1
        
    print (i)
        
