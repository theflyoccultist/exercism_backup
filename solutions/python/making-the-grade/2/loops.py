"""Functions for organizing and calculating student exam scores."""


def round_scores(student_scores):
    return [round(score) for score in student_scores]
        

def count_failed_students(student_scores):
    return sum(1 for score in student_scores if score <= 40)


def above_threshold(student_scores, threshold):
    return [score for score in student_scores if score >= threshold]


def letter_grades(highest):
    lowest = 41
    interval = round((highest - lowest) / 4)
    letter_grade_interval = []
    
    for grade in range(lowest, highest, interval):
        letter_grade_interval.append(grade)
    return letter_grade_interval


def student_ranking(student_scores, student_names):
    ranks = []
    for index, student in enumerate(student_names):
        ranks.append(f"{index + 1}. {student.title()}: {student_scores[index]}")
    return ranks


def perfect_score(student_info):
    perfect = next((student for student in student_info if student[1] == 100), [])
    return perfect