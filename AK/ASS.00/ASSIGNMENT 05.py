sum = 0
temp = 0

n = input("Enter the number of subjects: ")
if n.isdigit() and int(n) > 0:
    n = int(n)
else:
    print("Invalid input! Please enter a valid positive integer for the number of subjects.")
    exit()

for i in range(n):
    marks = input(f"Enter marks for subject {i + 1}: ")
    
    if marks.isdigit():
        marks = int(marks)
        if marks > 100 or marks < 0:
            print("Enter valid marks between 0 and 100!")
            i -= 1
            continue
        if marks < 40:
            temp = 1
        sum += marks
    else:
        print("Invalid input! Please enter a valid integer for the marks.")
        i -= 1
        continue

if temp == 0:
    percent = sum / n
    print("Your Percentage =", percent)
    if percent < 40:
        print("FAIL")
    elif percent < 60:
        print("PASS - III Div.")
    elif percent < 80:
        print("PASS - II Div.")
    elif percent <= 100:
        print("PASS - I Div.")
else:
    print("FAIL")
