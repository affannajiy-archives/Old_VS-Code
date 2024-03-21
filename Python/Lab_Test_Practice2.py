msg = "Mahen Borgirs Bill Calculator"
print(msg)
print("*" * len(msg))

table = int(input("Enter the number of tables: "))
name = []
quantity = []
price = []
total_bills = [] #Initialize an empty list to store total bills per table

for x in range(table):
    item_count = int(input("Enter the number of menu items for Table {}: ".format(x + 1)))
    table_total = 0 #Initialize a variable to store total bill for current table

    for y in range(item_count):
        item_name = input("Enter the name of menu item {} for Table {}: ".format(y + 1, x + 1))
        name.append(item_name)
        item_quantity = int(input("Enter the quantity of {} purchased: ".format(item_name)))
        quantity.append(item_quantity)
        item_price = float(input("Enter the price of {}: ".format(item_name)))
        price.append(item_price)
        total = item_quantity * item_price
        table_total += total  # Add current item total to table total

    total_bills.append(table_total) # Append the calculated table total to the total_bills list

# Bill Summary
print("\nBill Summary:")
print("No.\tName\t\tTotal Bill") # \t for indentation
for z in range(table):
    print("{}\t{}\t\tRM{:.2f}".format(z + 1, name[z], total_bills[z])) # total_bills for individual table total