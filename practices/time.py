time = int(input("What is the hour in military time: "))

if time < 12:
    print(f"Good morning!")
elif time > 12 and time < 17 or time == 12:
    print(f"Good afternoon!")
else:
    print(f"Good evening!")