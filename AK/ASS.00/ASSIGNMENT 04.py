r = input("Enter Radius:")

if r.isdigit():
    r = int(r)
    import math
    print("Area=", math.pi * (r**2))
    print("Circumference=", 2 * math.pi * r)
else:
    print("Invalid input! Please enter a valid integer for radius.")
