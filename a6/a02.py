## IMPORTS GO HERE

## END OF IMPORTS 


#### YOUR CODE FOR calculate_force GOES HERE ####
def calculate_force(a,m):
    if type (a) and type (m) is int:
        return None
    else :
        f = m * a
        return f
calculate_force(1.0, 0.2) 

def find_and_print_energy(m):
    if type(m) is int:
        return None
    
    else:
        c = 299792458
        e = m*(c*c)
        print ('The energy equivalent of mass',m, 'is: ',e)
find_and_print_energy(0.0009)
#find_and_print_energy(0.0009)


#### End OF MARKER


#### YOUR CODE FOR find_and_print_energy GOES HERE ####

#### End OF MARKER  




if __name__ == '__main__': 
    print(calculate_force(1.0, 0.2))
    print(find_and_print_energy(0.0009))  

