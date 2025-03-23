flag = "y"
while flag == "y":
    n1_input = input("Enter first no:")
    n2_input = input("Enter second no:")
    choice_input = input("Input 1.for adding 2. for subtraction 3.for Multiplication 4.for div")

    if n1_input.isdigit() and n2_input.isdigit() and choice_input.isdigit():
        n1 = int(n1_input)
        n2 = int(n2_input)
        choice = int(choice_input)

        if choice < 5 and choice > 0:
            if choice == 1:
                print(n1 + n2)
            elif choice == 2:
                print(n1 - n2)
            elif choice == 3:
                print(n1 * n2)
            else:
                if n2 == 0:
                    print("Can't divide by zero")
                else:
                    print(n1 / n2)
        else:
            print("Please enter a valid choice")
    else:
        print("Invalid input! Please enter valid integers for numbers and choice.")

    flag = input("Enter 'y' to continue or enter any other key to terminate")
