## IMPORTS GO HERE

## END OF IMPORTS

#### YOUR CODE FOR is_prime() FUNCTION GOES HERE ####
def is_prime(x):
    if float(x) != int (x):
        return False
    else:
        count = 0
        a = 1
        while a<=x:
            if x%a == 0:
                count = count+1
                a=a+1
            else:
                a = a + 1
        if count == 2:
            return True
        else:
            return False
#### End OF MARKER

#### YOUR CODE FOR output_factors() FUNCTION GOES HERE ####
def output_factors(x):
    count = 1
    while count <= x:
        if x%count == 0:
            print(count)
            count+=1
        else:
            count+=1 
#### End OF MARKER

#### YOUR CODE FOR get_largest_prime() FUNCTION GOES HERE ####
def get_largest_prime(x):
    a = 1
    z = 0
    while a<x:
        if is_prime(a):
            z = a
            a+=1
        else:
            a+=1
    return z
#### End OF MARKER



if __name__ == '__main__':
    print(is_prime(499))  # should return True

    print(get_largest_prime(10))  # should return 7
    # print get_largest_prime(100000)  # bonus, try with 100k

    output_factors(10)  # should output -- 1 2 5 10 -- one on each line
