lst = []
print("Enter 3 nos:")
for i in range(3):
    ele = input()
    if ele.isdigit():
        lst.append(int(ele))
    else:
        print("Invalid input! Please enter a valid integer.")
        break

if len(lst) == 3:
    max_val = lst[0]
    for num in lst:
        if num > max_val:
            max_val = num
    print("The maximum number is:", max_val)
else:
    print("Input was not valid. Exiting.")
