numbers =[3,5,13,134,4,6,54,2,3541,432]
names = ["Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson"]

names[0] = "Eric"
names.append("Jayshree") #adds to the end of the list
index = names.index("Vienna")
names.pop(index)
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} -10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")