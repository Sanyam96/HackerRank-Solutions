# Enter your code here. Read input from STDIN. Print output to STDOUT
#!/usr/bin/py
if __name__ == '__main__':
    t = input()
    all_elements = set(raw_input())
     
    for _ in xrange(t-1):
        all_elements &= set(raw_input())
         
    print len(all_elements)