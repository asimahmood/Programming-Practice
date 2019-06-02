## IMPORTS GO HERE

## END OF IMPORTS 


#### YOUR CODE FOR calculate_force GOES HERE ####
def calculate_force(a,m):
    if type (a) != float or type(m)!= float:
        return None
    else:
        f = m * a
        return f
calculate_force(1.0, 7.2) 
#calculate_force(1.0, 0.2) 


#### End OF MARKER


#### YOUR CODE FOR find_and_print_energy GOES HERE ####
def find_and_print_energy(m):
    if type(m) != float:
        return None
    else:
        c = 299792458
        e = m*(c*c)
        print ('The energy equivalent of mass',m, 'is:',e)
        return e
        
#find_and_print_energy(0.0009)
#find_and_print_energy(0.0009)

#### End OF MARKER  




if __name__ == '__main__': 
    print(calculate_force(True, True))
    print(find_and_print_energy(0.0002))  

