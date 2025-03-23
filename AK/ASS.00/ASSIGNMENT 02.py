n = input("Enter Integer:")

if n.isdigit():  # Check if the input is a valid integer
    n = int(n)
    
    if n <= 1:
        print("NOT A PRIME!!")
    else:
        flag = 0
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                flag = 1
                break
        if flag == 1:
            print("NOT A PRIME!!")
        else:
            print("PRIME!!")
else:
    print("Invalid input! Please enter a valid integer.")
