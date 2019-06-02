try:
    from a03 import sqrt
except ImportError:
    pass

try:
    from a03 import good_enough
except ImportError:
    pass

try:
    from a03 import improve_guess
except ImportError:
    pass 

epsilon = 1e-4  # precision needed

import io
from contextlib import redirect_stdout
import base64


def test_sqrt_int_s0():
    v = 36
    assert abs(sqrt(v, 1.0) - 6) < epsilon

def test_sqrt_int_s1():
    v = 283748324.2394
    assert abs(sqrt(v, 1.0) - 16844.83078) < epsilon

def test_improve_guess_s1():
    n = 36
    g = 2.998
    assert abs(improve_guess(n, g) - 7.50300) < epsilon

def test_improve_guess_s2():
    n = 36
    g = 12122.083
    assert abs(improve_guess(n, g) - 6061.04298) < epsilon

def test_steps_s1(): 
    v, out = capture_output(sqrt)(36, 1.0)
    assert out.startswith("Took: 7 steps")


def test_steps_s2(): 
    v, out = capture_output(sqrt)(36, 6.0)
    assert out.startswith(base64.b64decode(b'VG9vazogMSBzdGVwcw==').decode('ascii'))


# output capturing decorator
def capture_output(fn):
    def wrapper(*args, **kwargs):
        f = io.StringIO()
        with redirect_stdout(f):
            v = fn(*args, **kwargs)
            out = f.getvalue()
        return v, out

    return wrapper
