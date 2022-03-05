# Decimal_Converter
My decimal converter works different for each section... <br><br>
**For converting to binary**, I create an array and set I = 0 to increment later. I then call a while loop to fill 
the spots of the array and increase the increment. I then use a for loop to print each index of the array, 
which prints binary. <br><br>
**For converting to hex**, I create a char and set I = 0. I then say if the decimal is 0, to print 0. I then do a 
while loop for when the decimal is not 0. I set the remainder equal to decimal modulus 16. I then do an 
if statement to add numbers, and the else statement adds letters. Then I print out each hex index.<br><br>
**For BCD**, this one was tricky. I created bcd, which was an empty string. And an integer save to keep the decimals 
original number. Then I did an if statement to check if decimal was 0, and what to output. I then did an else if 
the length of the input was 1, then I used the binary code to do this, but I set bcd equal to “0000 0000 “, 
so that it would show all 3 sets of zeros. Another else if was used for when the length was 2. I made a 
new array called tens. I reset decimal and divided it by 10. Then I used a while loop to convert that digit 
to binary. Then printed out the bcd = “0000 “, then used a for loop to print the tens digit out. I then used 
another array called single and divided by 10 again. I then used modulus to get the singles digit and used 
a while loop to set the array. I then used a for loop to print the array. The final else if, was when the length 
was 3. This starts with a new array hundred. I then divided decimal by 100 and set the while loop greater 
than 0. The while loop loads up the array, and the for loop is used after to print out the binary. 
Afterwards, almost the exact same code from when the length was 2, is used.<br><br>
**SCREEN SHOTS BELOW** <br>
![image](https://user-images.githubusercontent.com/79284398/156878490-878a1a18-467a-43b6-914b-3d6e2c201e96.png)
![image](https://user-images.githubusercontent.com/79284398/156878524-0910290f-9621-4431-88ca-247ae38cc624.png)
