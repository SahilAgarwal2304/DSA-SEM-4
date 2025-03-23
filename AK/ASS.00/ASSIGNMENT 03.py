n = input("Enter Integer:")

if n.isdigit():
    n = int(n)
    if n % 2 == 0:
        print("EVEN")
    else:
        print("ODD")
else:
    print("Invalid input! Please enter a valid integer.")
