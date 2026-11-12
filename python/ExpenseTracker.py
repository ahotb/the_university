print("Welcome to the Daily Expense Tracker!")
print()
menu = ["Add a new expense", "View all expenses", "Calculate total and average expense", "Clear all expenses", "Exit"]
print("Menu:")
for i  in range(len(menu)):
    print(f"{i + 1}. {menu[i]}")


data = []
while True:
    try:
        n = float(input("\nEnter your choice (1-5): "))

        if n < 1 or n > len(menu):
               raise ValueError
        
        if n == 1:
                val = float(input("Enter expense amount: "))
                data.append(val)
                print("Expense added successfully!")
        elif n == 2:
                if not data:
                        print("No expenses recorded yet.")
                else:
                        print("Your expenses:")
                        for i in range(len(data)):
                                print(f"{i + 1}. {data[i]}")
        elif n == 3:
                if not data:
                        print("No expenses recorded yet.")
                else:
                        sums = sum(data)
                        print(f"Total expense: {sums}")
                        print(f"Average expense: {sums / len(data)}")
        elif n == 4:
                data.clear()
                print("All expenses cleared.")
        elif n == 5:
                print("Exiting the Daily Expense Tracker. Goodbye!")
                break
    except ValueError:
       print("Invalid choice. Please try again.")