
### Code for get_grades starts here 

### END MARKER 



### Code for get_student_marks starts here 

### END MARKER 



if __name__ == '__main__': 
    grade_boundaries = {'A': 80, 'B': 70, 'C': 60, 'D': 50}
    
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


    # print(student_data)
    student_marks = get_student_marks(student_data)
    print(student_marks)

    print(get_grade(80, grade_boundaries))








 