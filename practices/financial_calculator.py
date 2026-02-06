def question(monthly):
    return float(input(f"What is your monthly {monthly}: $"))

monthly_income = question("income")

monthly_rent_mortgage = question("rent/mortgage")

monthly_utilities = question("utilities")

monthly_groceries = question("groceries")

monthly_transportation = question("transportation")

savings = monthly_income/10

total = monthly_transportation + monthly_groceries + monthly_utilities + monthly_rent_mortgage + savings

def percent(monthly):
    return round(monthly/monthly_income*100)

print("Your rent is $", monthly_rent_mortgage, "and that is ", percent(monthly_rent_mortgage), "% of your income.")

print("Your utilities are $", monthly_utilities, "and that is ", percent(monthly_utilities), "% of your income.")

print("Your groceries are $", monthly_groceries, "and that is ", percent(monthly_groceries), "% of your income.")

print("Your transporation is $", monthly_transportation, "and that is ", percent(monthly_transportation), "% of your income.")

print("You should save $", savings, ", that is 10% of your income.")

print("You have $", monthly_income-total, "of spending money each month!")