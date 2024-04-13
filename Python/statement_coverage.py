def testme(x):
    j = 0
    while j < 2:
        print(j)
        if(x == j):
            print("Good\n")
        j = j + 1
    return x
    
testme(10)