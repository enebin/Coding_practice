from math import floor

def gradingStudents(grades):
    for i in range(len(grades)):
        if grades[i] < 38:
            pass
        elif grades[i] % 5 >= 3:
            grades[i] -= grades[i] % 5
            grades[i] += 5
        else :
            pass

    return grades


print(gradingStudents([1,2,3,4,5,6,7]))