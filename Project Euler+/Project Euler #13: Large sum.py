# Enter your code here. Read input from STDIN. Print output to STDOUT
a = input()
sum = 0
while ( a > 0 ):
    a -= 1
    b = input()
    sum = sum + b
    
print str(sum)[0:10]