monthly_income = float(input("What is your monthly income: $"))

monthly_rent_mortgage = float(input("What is your monthly rent/mortgage: $"))

monthly_utilities = float(input("What is your monthly utilities: $"))

monthly_groceries = float(input("What is your monthly groceries: $"))

monthly_transportation = float(input("What is your monthly transportation: $"))

print("Your rent is $", monthly_rent_mortgage, "and that is ", round(monthly_rent_mortgage/monthly_income, 2), "% of your income.")
