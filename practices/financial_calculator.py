monthly_income = float(input("What is your monthly income: $"))

monthly_rent_mortgage = float(input("What is your monthly rent/mortgage: $"))

monthly_utilities = float(input("What is your monthly utilities: $"))

monthly_groceries = float(input("What is your monthly groceries: $"))

monthly_transportation = float(input("What is your monthly transportation: $"))

total = monthly_transportation + monthly_groceries + monthly_utilities + monthly_rent_mortgage

print("Your rent is $", monthly_rent_mortgage, "and that is ", round(monthly_rent_mortgage/monthly_income*100), "% of your income.")

print("Your utilities are $", monthly_utilities, "and that is ", round(monthly_utilities/monthly_income*100), "% of your income.")

print("Your groceries are $", monthly_groceries, "and that is ", round(monthly_groceries/monthly_income*100), "% of your income.")

print("Your transporation is $", monthly_transportation, "and that is ", round(monthly_transportation/monthly_income*100), "% of your income.")

print("You should save $", monthly_income/10, ", that is 10% of your income.")

print("You have $", monthly_income-total, "of spending money each month!")