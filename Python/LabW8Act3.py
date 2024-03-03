#Teenager Internet Addiction

print("!!Teenager Internet Addiction!!")

minute = eval(input("Number of minutes spent on the Internet in a day: "))
hour = minute / 60

if hour >= 2:
  print("You are might be addicted to the Net")
  answer = 0
  q1 = input("Do you stay online longer than you intended? ").lower()
  if q1 == "yes":
    answer += 1
  q2 = input("Do you hear other people in your life complain about how much time you spend online? ").lower()
  if q2 == "yes":
    answer += 1
  q3 = input("Do you say or think, 'Just a few more minutes' when online? ").lower()
  if q3 == "yes":
    answer += 1
  q4 = input("Do you try and fail to cut down on how much time you spend online? ").lower()
  if q4 == "yes":
    answer += 1
  q5 = input("Do you hide how long you’ve been online? ").lower()
  if q5 == "yes":
    answer += 1

  if answer >= 3:
    print("You are an INTERNET ADDICT")
  else:
    print("Control your Internet usage. You might become an ADDICT")
else:
  print("Keep up the good habit")