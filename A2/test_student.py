try: 
    from a02 import calculate_force 
except ImportError: 
    pass 
try: 
    from a02 import find_and_print_energy 
except ImportError: 
    pass 

import io
from contextlib import redirect_stdout

epsilon = 0.001 # precision needed


def test_float():
    m = 2.0
    a = 10.0
    result = 20

    assert abs(calculate_force(m, a) - result) < epsilon


def test_bool(): 
    if calculate_force(True, True) is not None: 
        raise AssertionError
   

def test_find_and_print_energy():
    val = 0.0009
    v, out = capture_output(find_and_print_energy)(val)

    assert out.startswith("The energy equivalent of mass 0.0009 is: 80887966086313.")


def test_find_and_print_energy_01():
    val = 0.0009
    v, out = capture_output(find_and_print_energy)(val)
    result = 80887966086313.58
    assert abs(v - result) < epsilon

def test_find_and_print_energy_02():
    val = True
    if find_and_print_energy(val) is not None: 
        raise AssertionError

# output capturing decorator
def capture_output(fn):
    def wrapper(*args, **kwargs):
        f = io.StringIO()
        with redirect_stdout(f):
            v = fn(*args, **kwargs)
            out = f.getvalue()
        return v, out

    return wrapper
