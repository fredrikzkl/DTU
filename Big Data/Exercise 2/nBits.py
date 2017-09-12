# Exercise 2.1
def convertToBit(n,lst):
    if n == 0:
        return lst
    else:
        bitPattern = "{0:b}".format(n)
        bitPatterinIterator = len(bitPattern)-1
        lstIterator = len(lst)-1

        for i in range(0,bitPatterinIterator+1):
            lst[lstIterator] = bitPattern[bitPatterinIterator]
            bitPatterinIterator = bitPatterinIterator - 1;
            lstIterator = lstIterator - 1;

        return lst


# Main start
n = int(input("Enter a number: "))

lst = ["0"]*n

for i in range(0, 2**n):
    lst = ["0"]*n
    print convertToBit(i,lst)
