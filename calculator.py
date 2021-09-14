#
#   Simple calculator in python3 with no functions and limited space!!
#
print("Pick a number!!\n","1)add\n","2)subtract\n","3)multiply\n","4)divide")

choice = input("pick a number!!!!: ")
first_number = float(input("Pick your first number: "))
second_number = float(input("Pick your second number: "))
if choice == "1":
		print(first_number, "+", second_number, "=", first_number+second_number)
elif choice == "2":
		print(first_number, "-", second_number, "=", first_number-second_number)
elif choice == "3":
		print(first_number, " x ", second_number, "=", first_number*second_number)
elif choice == "4":
		print(first_number, "/", second_number, "=", first_number/second_number)
else:
	print("invalid input")







