emails = {}

ct = int(input())

for i in range(ct):
    email = input()
    username = email.split('@')[0]
    username = username.replace('.', '')
    username = username.split('+')[0]
    email = username + "@" + email.split('@')[1]
    emails[email] = True

print(len(emails))
