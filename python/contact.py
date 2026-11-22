def display_menu():
    menu = ["Add Contact", "View Contact", "Edit Contact",
            "Delete Contact", "List All Contacts", "Exit"]
    print("Contact Book Menu:")
    for i in range(len(menu)):
        print(f"{i + 1}. {menu[i]}")


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


def view_contact(contact_book):
    name = input("Enter your name to view: ")
    if name not in contact_book:
        print("Contact not found!")
    else:
        contact_info = contact_book[name]
        print(f"Name: {name}")
        for key, value in contact_info.items():
            print(f"{key.capitalize()}: {value}")


def edit_contact(contact_book):
    name = input("Enter your name to edit: ")
    if name not in contact_book:
        print("Contact not found!")
    else:
        newPhone = input("Enter your new phone or press enter: ")
        newEmail = input("Enter your new email or press enter: ")
        newAddress = input("Enter your new address or press enter: ")
        if newPhone:
            contact_book[name]["phone"] = newPhone
        if newEmail:
            contact_book[name]["email"] = newEmail
        if newAddress:
            contact_book[name]["address"] = newAddress
        print("Contact updated successfully!")


def delete_contact(contact_book):
    name = input("Enter your name to delete: ")
    if name not in contact_book:
        print("Contact not found!")
    else:
        del contact_book[name]
        print("Contact deleted successfully!")


def list_all_contacts(contact_book):
    if contact_book:
        for name, info in contact_book.items():
            print(f"Name: {name}")
            print(f"Phone: {info['phone']}")
            print(f"Email: {info['email']}")
            print(f"Address: {info['address']}")
            print()
    else:
        print("No contacts available.")


contact_book = {}
while True:
    display_menu()
    try:

        n = int(input())

        if n < 1 or n > 6:
            raise ValueError

        if n == 1:
            add_contact(contact_book)
        elif n == 2:
            view_contact(contact_book)
        elif n == 3:
            edit_contact(contact_book)
        elif n == 4:
            delete_contact(contact_book)
        elif n == 5:
            list_all_contacts(contact_book)
        elif n == 6:
            break
    except ValueError:
        print("Invalid choice. Please try again.")
