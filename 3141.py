from datetime import datetime
from math import floor


name = input()
today = input()
birth = input()

today = datetime.strptime(today, '%d/%m/%Y').date()
birth = datetime.strptime(birth, '%d/%m/%Y').date()

if (today.day == birth.day and today.month == birth.month):
    print("Feliz aniversario!")

age = today.year - birth.year

if ((today.month < birth.month) or (today.month == birth.month and today.day < birth.day)):
    age -= 1

print("Voce tem {} anos {}.".format(age, name))
