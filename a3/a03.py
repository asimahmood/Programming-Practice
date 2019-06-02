## IMPORTS GO HERE

## END OF IMPORTS

#### YOUR CODE FOR good_enough() FUNCTION GOES HERE ####
i = 0
def good_enough(x, guess): 
    global i
    i = i + 1
    if abs(guess * guess - x) < 0.00001: 
       print("Took:", i, "steps")
       i = 0
       return True
    else: 
        return False
#### End OF MARKER


#### YOUR CODE FOR sqrt() FUNCTION GOES HERE ####
def sqrt(x, guess = 0.0): 
    if x <= 0: 
        return None 

    if guess < 0:
        return None
    
    if good_enough(x,guess): 
        return guess 
    
    else: 
        new_guess = improve_guess(x, guess)  
        return sqrt(x, new_guess)
#### End OF MARKER


#### YOUR CODE FOR improve_guess() FUNCTION GOES HERE ####
def improve_guess(x, guess):
    v = guess - (((guess*guess) - x) / (2*guess))
    return v  
#### End OF MARKER

