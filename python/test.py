# n = int(input())
# for i in range(1, n+1, 2):
#     print("*"* (i))


def add_contact(contact_book):
    name = input("Enter your name: ")
    phone = input("Enter your phone: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")
    if name in contact_book:
        print("Contact already exists!")
    else:
        contact_book[name] = {
        "phone": phone,
	    "email": email,
	    "address": address}
        print("Contact added successfully!")


my = {}
add_contact(my)