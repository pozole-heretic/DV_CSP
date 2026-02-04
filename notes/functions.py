def hello():
    print("Hello World!")

hello()

def full_name(first, last):
    return f"{first} {last}"

print(full_name("Daniel", "Valenzuela"))
name = full_name("Rohann", "Hines")
print(f"{name} doesn't like {full_name('Enzo', 'Marin')}")

def factoral(number):
    total = 1
    for i in range(1, number +1):
        total *= i
    return total

for num in range(1,10):
    print(f"The factoral of {num} is {factoral(num)}")

name = "Ms. LaRose"

def admin():
    print(f"{name} is the admin for the lab!")
    name = "Mr. Macinanti"
    print(f"{name} is the admin for the lab!")

admin()