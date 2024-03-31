x = msgbox("Privet! Your software must be taken under the property of state blyat!!", 0+48, "USSR!")
x = msgbox("AHAA!! All private data has been taken from you hoho (including babushka and kartoshka)", 0+64, "USSR!")

do until x=vbYes
x = msgbox ("A pledge to the USSR now!! (be comrade),you cannot say No.",vbYesNoCancel + vbExclamation ,"USSR!")
loop

choice = MsgBox( _
  "Press OK to pay to be comrade cyka :) ", _
  vbExclamation+vbOkCancel+vbDefaultButton2, _
  "Pay Now Blyat!!")

If choice = vbOK Then MsgBox "Payment complete! You will be new comrade for Soviet Russia", vbInformation, "Happy Stalin"
If choice = vbCancel Then MsgBox "OOOOO You want to cancel?? It's ok we already took the payment HAHAHA >:)", vbCritical, "Angry Stalin!"

x = msgbox("Spasibo comrade. See you later.", 0+64, "Proud USSR")