try:
    from a07 import read_data
except ImportError:
    print("failed to load read_data")
    pass

try:
    from a07 import split_safe
except ImportError:
    print("failed to load split_safe")
    pass



def test_split_safe_s1(): 
    res = split_safe("Name,'Father Name',Address,Age")
    exp = ['Name','Father Name','Address','Age']
    assert res == exp

def test_split_safe_s2(): 
    res = split_safe("Ali,Tariq,'House 10, Street 20',30")
    exp = ['Ali','Tariq','House 10, Street 20','30']
    assert res == exp

def test_split_safe_s3(): 
    res = split_safe("Ali, Tariq,'House 10, Street 20',30")
    exp = ['Ali','Tariq','House 10, Street 20','30']
    assert res == exp

def test_split_safe_s4(): 
    res = split_safe("")
    exp = []
    assert res == exp

def test_split_safe_s5(): 
    res = split_safe("a,'n,x'")
    exp = ['a', 'n,x']
    assert res == exp


def test_read_data_s1(): 
    res = read_data('', 'file.csv')
    exp = [['Name', 'Father Name', 'Address', 'Age'], 
           ['Ali', 'Farooq', 'Street 10, Sector E2, Phase1', '34'], 
           ['Bilal', 'Khan', 'Sector E3, Phase1', '76'], 
           ['Khan','Ajmal', 'Nowhere', '65']]
    assert res == exp

def write_str_to_file(s, directory, filename): 
    import os 
    full_filename = os.path.join(directory, filename)
    if not os.path.exists(directory): 
        os.mkdir(directory)

    with open(full_filename, 'w') as f: 
        f.write(s)
    
def write_str_and_get_date(s, d, f): 
    import os 
    write_str_to_file(s, d, f)
    res = read_data(d, f)
    os.remove(os.path.join(d, f))
    os.rmdir(d)
    return res 

def test_read_data_s2(): 
    s = "Name,Father Name,Address"
    res = write_str_and_get_date(s, 'temp', 'file.csv')
    exp = [['Name', 'Father Name', 'Address']]
    assert res == exp

def test_read_data_s3(): 
    s = "Name,Father Name,Address\nAli,Khayam,'H, 21, Street 2'"
    res = write_str_and_get_date(s, 'temp', 'file.csv')
    exp = [['Name', 'Father Name', 'Address'], 
           ['Ali', 'Khayam', 'H, 21, Street 2']]
    assert res == exp