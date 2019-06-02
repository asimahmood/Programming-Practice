try:
    from a06 import get_student_marks
except ImportError:
    print("Bad import of get_student_marks")

try:
    from a06 import get_grade
except ImportError:
    print("Bad import of get_grade")



epsilon = 1e-4

def test_marks_s1():
    # grade_boundaries = {'A': 80, 'B': 70, 'C': 60, 'D': 50}
    student_data = [ 
        {'roll_no': 'p18-1001', 'marks': {
                'english': (1.4, 2.5, 15, 9.6, 33), 
                'calculus': (2.4, 1.5, 12, 1.6, 21),
            }, 'attendance': 88.4
        }, 
        {'roll_no': 'p18-1002', 'marks': {
                'english': (2.4, 1.5, 12, 1.6, 21),
                'programming fundaments': (2.4, 1.5, 12, 1.6, 21),
            }, 'attendance': 79.4
        }, 
        {'roll_no': 'p18-1003', 'marks': {
                'calculus': (2.4, 1.5, 12, None, 21), 
                'programming fundamentals': (2.4, 1.5, 12, 1.6, 21), 
            }, 'attendance': 79.4
        }, 
    ]


    student_marks = get_student_marks(student_data)
    assert abs(student_marks['p18-1001']['english'] - 61.5) < epsilon
    assert abs(student_marks['p18-1001']['calculus'] - 38.5) < epsilon

    assert abs(student_marks['p18-1002']['english'] - 38.5) < epsilon
    assert abs(student_marks['p18-1002']['programming fundaments'] - 38.5) < epsilon

    assert abs(student_marks['p18-1003']['calculus'] - 36.9) < epsilon
    assert abs(student_marks['p18-1003']['programming fundamentals'] - 38.5) < epsilon


    # ensure no extra keys 
    diff = list(set(student_marks['p18-1001'].keys()) - set(['english', 'calculus']))
    assert len(diff) == 0, "Extra subjects found"



def test_marks_s2():
    # grade_boundaries = {'A': 80, 'B': 70, 'C': 60, 'D': 50}
    student_data = [ 
        {'roll_no': 'p18-1001', 'marks': {
                'english': (1.4, 2.5, 15, 9.6, 33), 
                'calculus': (2.4, 1.5, 12, 1.6, 21),
            }, 'attendance': 88.4
        }, 
        {'roll_no': 'p18-1002', 'marks': {
                'english': (2.4, 1.5, 12, 1.6, 21),
                'programming fundaments': (2.4, 1.5, 12, 1.6, 21),
            }, 'attendance': 79.4
        }, 
        {'roll_no': 'p18-1122', 'marks': {
                'calculus': (2.4, 1.5, 12, 28, 21), 
                'programming fundamentals': (2.4, 1.5, 12, 1.6, 21), 
            }, 'attendance': 79.4
        }, 
    ]


    student_marks = get_student_marks(student_data)
    assert abs(student_marks['p18-1001']['english'] - 61.5) < epsilon
    assert abs(student_marks['p18-1001']['calculus'] - 38.5) < epsilon

    assert abs(student_marks['p18-1002']['english'] - 38.5) < epsilon
    assert abs(student_marks['p18-1002']['programming fundaments'] - 38.5) < epsilon

    assert abs(student_marks['p18-1122']['calculus'] - 64.9) < epsilon
    assert abs(student_marks['p18-1122']['programming fundamentals'] - 38.5) < epsilon

    # ensure no extra keys 
    diff = list(set(student_marks['p18-1122'].keys()) - set(['programming fundamentals', 'calculus']))
    assert len(diff) == 0, "Extra subjects found"



def test_grades_s1():
    grade_boundaries = {'A': 80, 'B': 70, 'C': 60, 'D': 50}
    assert get_grade(65, grade_boundaries) == 'C'


def test_grades_s2():
    grade_boundaries = {'A': 70, 'B': 60, 'C': 50, 'D': 40}
    assert get_grade(65, grade_boundaries) == 'B'

def test_grades_s3():
    grade_boundaries = {'A': 70, 'B': 60, 'C': 50, 'D': 40}
    assert get_grade(5.7, grade_boundaries) == 'F'

def test_grades_s4():
    grade_boundaries = {'A': 90, 'B': 89, 'C': 88, 'D': 87}
    assert get_grade(76, grade_boundaries) == 'F'