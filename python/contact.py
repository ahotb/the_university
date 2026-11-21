def display_menu():
    menu = ["Add Contact", "View Contact", "Edit Contact", "Delete Contact", "List All Contacts", "Exit"]
    print("Contact Book Menu:")
    for i in range(len(menu)):
        print(f"{i + 1}. {menu[i]}")

def add_contact(contact_book):
    name = input()
    phone = input()
    email = input()
    address = input()
    if name in contact_book:
        print("Contact already exists!")
    else:
        contact_book[name] = {
        "phone": phone,
	    "email": email,
	    "address": address}
        print("Contact added successfully!")

def view_contact(contact_book):
    name = input()
    if name not in contact_book:
        print("Contact not found!")
    else:
        contact_info = contact_book[name]
        print(f"Name: {name}")
        for key, value in contact_info.items():
            print(f"{key.capitalize()}: {value}")

def edit_contact(contact_book):
    name = input()
    if name not in contact_book:
        print("Contact not found!")
    else:
        newPhone = input()
        newEmail = input()
        newAddress = input()
        if newPhone:
            contact_book[name]["phone"] = newPhone
        if newEmail:
            contact_book[name]["email"] = newEmail
        if newAddress:
            contact_book[name]["address"] = newAddress
        print("Contact updated successfully!")









