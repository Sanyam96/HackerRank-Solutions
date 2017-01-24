x = input()
if x % 2 != 0:
    print "Weird"
elif x%2 == 0 and x <= 5 and x >= 2 :
    print "Not Weird"
elif x%2 == 0 and x <= 20 and x >= 6 :
    print "Weird"
elif x % 2 == 0 and x > 20:
    print "Not Weird"