import random

contacts_list = []
contacts_file = []


class Contacts:
    Name = ''
    Phone = ''
    Email = ''
    Company = ''
    Notes = ''
    def __init__(self, contacts_dictionary):
        """This function makes the name, phone, email, company, and any notes
        into an object from the contacts dictionary."""
        self.Name = contacts_dictionary["Name"]
        self.Phone = contacts_dictionary["Phone"]
        self.Email = contacts_dictionary["Email"]
        self.Company = contacts_dictionary["Company"]
        self.Notes = contacts_dictionary["Notes"]
    def get_contacts_info(self):
        """This function creates a dictionary and inserts the objects
        information into the dictionary."""
        contacts_info = dict()
        contacts_info["Name"] = self.Name
        contacts_info["Phone"] = self.Phone
        contacts_info["Email"] = self.Email
        contacts_info["Company"] = self.Company
        contacts_info["Notes"] = self.Notes
        return contacts_info
    def update_contact_note(self, update_note):
        """This function updates the notes when the command Note is
        entered."""
        self.Notes = update_note


def start_up():
    """When the program starts it creates an object of each contact with the
    name, phone, company, email, and notes for the default contacts file."""
    contacts_file.append("contacts.txt")
    with open("contacts.txt", "r") as file:
        contacts_info = file.readline().split(",")
        while len(contacts_info) != 1:
            contacts_dict = dict()
            if contacts_info[0] != "Name":
                contacts_dict["Name"] = contacts_info[0].strip("\n")
                contacts_dict["Phone"] = contacts_info[1].strip("\n")
                contacts_dict["Company"] = contacts_info[2].strip("\n")
                contacts_dict["Email"] = contacts_info[3].strip("\n")
                if len(contacts_info) == 5:
                    contacts_dict["Notes"] = contacts_info[4].strip("\n")
                else:
                    contacts_dict["Notes"] = ''
                contacts_list.append(Contacts(contacts_dict))
            contacts_info = file.readline().split(",")


def info():
    """This function does clears the contacts_list and does the same thing
    as start up, but while its doing it it counts how many contacts, companies
    there are and how many contacts per companies."""
    contacts_list.clear()
    company_dict = dict()
    try:
        with open(contacts_file[0], "r") as file:
            contacts_info = file.readline().split(",")
            while len(contacts_info) != 1:
                contacts_dict = dict()
                if contacts_info[0] != "Name":
                    contacts_dict["Name"] = contacts_info[0].strip("\n")
                    contacts_dict["Phone"] = contacts_info[1].strip("\n")
                    contacts_dict["Company"] = contacts_info[2].strip("\n")
                    if contacts_dict["Company"] in company_dict:
                        company_dict[contacts_info[2]] += 1
                    else:
                        company_dict[contacts_info[2]] = 1
                    contacts_dict["Email"] = contacts_info[3].strip("\n")
                    if len(contacts_info) == 5:
                        contacts_dict["Notes"] = contacts_info[4].strip("\n")
                    else:
                        contacts_dict["Notes"] = ''
                    contacts_list.append(Contacts(contacts_dict))
                contacts_info = file.readline().split(",")
            print("Number of Contacts: " + str(len(contacts_list)))
            print("Number of Companies: " + str(len(company_dict)))
            for (company, number) in company_dict.items():
                print("Company name:" + str(
                    company) + "," + " Number of contacts: " + str(number))
    except FileNotFoundError:
        print("The File does not exist!")


def list():
    """This function creates a list of the contacts that are currently in
    the program, either the default contacts or the loaded contacts."""
    print("--------------------------------------------------------------")
    for contact_info in contacts_list:
        contact = contact_info.get_contacts_info()
        print("Name: " + str(contact["Name"]))
        print("Phone: " + str(contact["Phone"]))
        print("Company: " + str(contact["Company"]))
        print("Email: " + str(contact["Email"]))
        print("Notes: " + str(contact["Notes"]))
        print("--------------------------------------------------------------")


def remove(name):
    """This function removes any contact, the name enter is
    case-insensitive."""
    index = 0
    while index < len(contacts_list):
        contact = contacts_list[index].get_contacts_info()
        lower_case = contact["Name"].lower()
        if contact["Name"] == name:
            del contacts_list[index: index + 1]
            print("The Contact has been removed.")
            list()
            return
        elif lower_case == name:
            del contacts_list[index: index + 1]
            print("The Contact has been removed.")
            list()
            return
        index += 1
    if index == len(contacts_list):
        print("Contact not found")
        list()


def note(name):
    """This function allows for the user to see the current note for a
    contact and enter a new one or leave it as is."""
    index = 0
    while index < len(contacts_list):
        contact = contacts_list[index].get_contacts_info()
        if contact["Name"] == name:
            print("Current notes: " + str(contact["Notes"]))
            change = input("Do you want to update the note?: ")
            if change == "yes":
                new_note = input("Enter the new note: ")
                contacts_list[index].update_contact_note(new_note)
                print("New Note added!")
                break
            else:
                return
        index += 1
    if index == len(contacts_list):
        print("Contact not found")


def add(new_contact):
    """This function adds a new contact."""
    contacts_list.append(Contacts(new_contact))
    print("New Contact Added")


def load():
    """This function allows the user to enter their own contacts file
    instead of using the default one."""
    contacts_list.clear()
    contacts_file.clear()
    new_file = input("Enter Name of Contacts File: ")
    contacts_file.append(new_file)
    try:
        with open(new_file, "r") as file:
            contacts_info = file.readline().split(",")
            while len(contacts_info) != 1:
                contacts_dict = dict()
                if contacts_info[0] != "Name":
                    contacts_dict["Name"] = contacts_info[0].strip("\n")
                    contacts_dict["Phone"] = contacts_info[1].strip("\n")
                    contacts_dict["Company"] = contacts_info[2].strip("\n")
                    contacts_dict["Email"] = contacts_info[3].strip("\n")
                    if len(contacts_info) == 5:
                        contacts_dict["Notes"] = contacts_info[4].strip("\n")
                    else:
                        contacts_dict["Notes"] = ''
                    contacts_list.append(Contacts(contacts_dict))
                contacts_info = file.readline().split(",")
            print("File Loaded!")
    except FileNotFoundError:
        print("File Does not Exist!, Enter a new file")
        load()


def save():
    """This function allows the user to save all the changes made to the
    current file, either the default or the loaded one."""
    with open(contacts_file[0], "w") as file:
        file.write("Name, Phone, Company, Email, Notes\n")
        for contact in contacts_list:
            contact_dict = contact.get_contacts_info()
            file.write(
                contact_dict["Name"] + "," + contact_dict["Phone"] + "," +
                contact_dict["Company"] + "," + contact_dict["Email"] + "," +
                contact_dict["Notes"] + "\n")
        print("Contacts have been saved to " + str(contacts_file[0]))


def commands():
    """This function takes in a file of commands, reads the lines of the
    file, and looks for a command, once a command is found it will input
    the information given until it has found a new command, and then it
    continues until there are no more lines."""
    file_name = input("Enter file with commands: ")
    index = 0
    contact_info = dict()
    with open(file_name, "r") as file:
        lines = file.readlines()
    while index < len(lines):
        line = lines[index].split(" ")
        if line[0].strip("\n") == "add":
            contact_info["Name"] = line[1].strip("\n")
            contact_info["Phone"] = ''
            contact_info["Company"] = ''
            contact_info["Email"] = ''
            contact_info["Notes"] = ''
            index += 1
            line = lines[index].split(":")
            while line[0] in ["phone", "Phone", "Company", "company", "Email",
                "email", "Notes", "notes"] and index < len(lines):
                if line[0] in ["phone", "Phone"]:
                    contact_info["Phone"] = line[1].strip("\n")
                elif line[0] in ["Company", "company"]:
                    contact_info["Company"] = line[1].strip("\n")
                elif line[0] in ["Email", "email"]:
                    contact_info["Email"] = line[1].strip("\n")
                elif line[0] in ["Notes", "notes"]:
                    contact_info["Notes"] = line[1].strip("\n")
                index += 1
                if index < len(lines):
                    line = lines[index].split(":")
            contacts_list.append(Contacts(contact_info))
        elif line[0].strip("\n") == "remove":
            remove(line[1].strip("\n"))
            break


def lookup(name):
    """This function allows you too look up any name in the current contacts
    file and then displays it, the function is case_insensitive."""
    index = 0
    while index < len(contacts_list):
        contact = contacts_list[index].get_contacts_info()
        lower_case = contact["Name"].lower()
        if contact["Name"] == name:
            print("----------------------------------------------------------")
            print("Name: " + str(contact["Name"]))
            print("Phone: " + str(contact["Phone"]))
            print("Company: " + str(contact["Company"]))
            print("Email: " + str(contact["Email"]))
            print("Notes: " + str(contact["Notes"]))
            print("----------------------------------------------------------")
            return
        elif lower_case == name:
            print("----------------------------------------------------------")
            print("Name: " + str(contact["Name"]))
            print("Phone: " + str(contact["Phone"]))
            print("Company: " + str(contact["Company"]))
            print("Email: " + str(contact["Email"]))
            print("Notes: " + str(contact["Notes"]))
            print("----------------------------------------------------------")
            return
        index += 1
    if index == len(contacts_list):
        print("Contact not found")


def main():
    start_up()
    rand_number = random.randint(0, 4)
    welcome_message = ["Hello", "Bonjour", "Hola", "Guten Tag", "Goedendag"]
    print(welcome_message[rand_number] + ", Welcome to the Contact "
                                         "Application!")
    command = input("Please enter a command: ")
    while command != "exit":
        if command == "about":
            print("Contacts App. Developed by Javier Reyna for CSE107")
            command = input("Please enter a command: ")
        elif command == "info":
            info()
            command = input("Please enter a command: ")
        elif command == "list":
            list()
            command = input("Please enter a command: ")
        elif command == "remove":
            name = input("Enter name you want to remove: ")
            remove(name)
            command = input("Please enter a command: ")
        elif command == "note":
            name = input("Name of the Contact: ")
            note(name)
            command = input("Please enter a command: ")
        elif command == "add":
            add_dict = dict()
            name = input("Enter Name: ")
            phone = input("Enter Phone: ")
            company = input("Enter Company Name: ")
            email = input("Enter Email address: ")
            notes = input("Enter any Notes: ")
            add_dict["Name"] = name
            add_dict["Phone"] = phone
            add_dict["Company"] = company
            add_dict["Email"] = email
            add_dict["Notes"] = notes
            add(add_dict)
            command = input("Please enter a command: ")
        elif command == "load":
            load()
            command = input("Please enter a command: ")
        elif command == "save":
            save()
            command = input("Please enter a command: ")
        elif command == "commands":
            commands()
            command = input("Please enter a command: ")
        elif command == "lookup":
            name = input("Enter the name of the contact you're looking for: ")
            lookup(name)
            command = input("Please enter a command: ")
        else:
            print("Enter a valid command!")
            command = input("Please enter a command: ")
    exit_message = ["Goodbye!", "Have a Nice Day!", "Bye", "See You Later",
        "Comeback Soon"]
    print(exit_message[rand_number])


if __name__ == "__main__":
    main()
