#Lab Week 8
#1
#A
if 12 < 12:
  print('Less')
else:
  print('Not Less')

#B
Var1,Var2 = 25.12,15.00
if Var1 <= Var2:
  print('Less or equal')
else:
  print ('Greater than')

#2
#A
Y,X = 15.0,25.0
if Y != (X - 10.0):
  X = X - 10
else:
  X = X / 2.0

#B
Y = 10.0
X = 25.0
if Y != (X - 10.0):
  X = X - 10
else:
  X = X / 2.0

#C
Y = 15.0
if (Y < 15.0) and (Y >= 0.0):
  X = 5 * Y
else:
  X = 2 * Y

#D
Y = 10.0
if (Y < 15.0) and (Y >= 0.0):
  X = 5 * Y
else:
  X = 2 * Y

#E
Y = 36.0
if (Y < 15.0) and (Y >= 0.0):
  X = 5 * Y
elif Y >20 :
  X = 4 * Y
else:
  X = 2 * Y

#F
Y = -5
if (Y < 15.0) and (Y >= 0.0):
  X = 5 * Y
elif Y >20:
  X = 4 * Y
else:
  X = 2 * Y

#G
Y = 67
if (Y < 15.0) and (Y >= 0.0):
  X = 5 * Y
elif Y >20:
  if Y<30:
    X = 4 * Y
  else:
    X = 0 * Y
else:
  X = 2 * Y
