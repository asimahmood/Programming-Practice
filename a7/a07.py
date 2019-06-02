## IMPORTS GO HERE
import os
## END OF IMPORTS


### YOUR CODE FOR split_safe() FUNCTION GOES HERE ###

#=======================================================
def spliting(a):
    b = []
    c = 0
    for i in a:
        c = c + 1
        if i == "'":
            break
    while c < len(a):
        if a[c] == "'":
            break
        b.append(a[c])
        c = c + 1
    s = "".join(b)
    return s
#=======================================================
def split_safe(a):
    list = []
    if a == '':
        return list

    w = a.split(",")
    
    q = []
    for i in w:
        i = i.strip()
        q.append(i)
    
    c = 0
    co = 0

    while co < len(q):
        if q[co][c] == "'":
            fun = spliting(a)
            list.append(fun)
            co+=1
            break
        list.append(q[co])
        co+=1
    while co < len(q):
        if q[co][len(q[co])-1] == "'":
            co+=1
            continue
        list.append(q[co])
        co+=1
    return list
#=======================================================
def read_data(x,y):
    filename = os.path.join(x,y)
    data = []
    with open(filename, 'r') as f:
        for lines in f:	
            #p = lines.rstrip().split(',')
            #print(lines)
            lines = lines.replace('\n','')
            data.append(split_safe(lines))
            #data.pop()
            #data.append(p)
    return data
#=======================================================
"""
def split_safe(a):
    a = a.replace("'","*")
    for i in a:
        i = i.strip("*")
    result = a.split(",")
    length = len(result)
    list = []
    
    
    for i in range(length):
        if "'"in result[i]:
            result[i] += "," + result[i+1]
            result.remove(result[i+1])
            break
        if "'"in result[i]:
            result[i] += "," + result[i+1]
            result.remove(result[i+1])
            break
    for i in result:
        i = i.strip("\'")
        list.append(i)
    
    flag = 0
    index = 0
    str1 = ""
    fin = []
    for word in list:
        for character in word:
            if flag == 0:
                if character == "*":
                    flag = 1
                    str1 = list[index] + "," + list[index+1]
                    str1 = str1.replace("*","")
                    
                    list[index] = str1
                    del list[index+1]
        index = index + 1   
    return list"""


if __name__ == '__main__':
    print(split_safe("Name,'Father Name',Address,Age"))
    print(split_safe("Ali,Tariq,'House 10, Street 20',30"))

    print(read_data('', 'file.csv'))
    pass
