//'Affan 22010453 (OOP_LabW4) [CS]

//1 ---------------------------------------------------------------
int matricNum = 22010453;
Console.WriteLine("Matric Number (String): " + Convert.ToString(matricNum));

float cgpa = 3.98f;//f for float
Console.WriteLine("CGPA (Int): " + Convert.ToInt32(cgpa));
Console.Write("\n");

//2 ----------------------------------------------------------------
bool value = true;
Console.WriteLine("Boolean (String): " + Convert.ToString(value));

char grade = 'A';
Console.WriteLine("Character (String): " + Convert.ToString(grade));
Console.Write("\n");

//3 ----------------------------------------------------------------
int x = 8; //declare
//AND
x &= 3;
Console.WriteLine("AND Operator: " + x);

//OR
x |= 3;
Console.WriteLine("OR Operator: " + x);

//XOR
x ^= 3;
Console.WriteLine("XOR Operator: " + x);

//Right Shift
x >>= 3;
Console.WriteLine("Right Shift Operator: " + x);

//Left Shift
x <<= 3;
Console.WriteLine("Left Shift Operator: " + x);

Console.Write("\n");

//4 ---------------------------------------------------------------
Console.Write("What is your age? ");
int userAge = Convert.ToInt32(Console.ReadLine());
int myAge = 19;
if (!(userAge >= myAge))
{
    Console.WriteLine("You are not older than 19 years old!");
}
else
{
    Console.WriteLine("You are older than 19 years old!");
}
Console.Write("\n");

//5 ---------------------------------------------------------------
string studentName = "Affan";
//calc length
Console.WriteLine("Length of Name: " + studentName.Length); 
Console.Write("\n");

//6 ---------------------------------------------------------------
string firstName = "Dior";
string lastName = "Savage";
//parking lot method
string name = $"My favourite perfume is: {firstName} {lastName}";
Console.WriteLine(name);
Console.Write("\n");

//7 ---------------------------------------------------------------
Console.Write("Your Score: ");
int score = Convert.ToInt32(Console.ReadLine());
if (score >= 40 && score <= 100)
{
    Console.WriteLine("You Pass!");
}
else
{
    Console.WriteLine("You Fail!");
}
Console.Write("\n");

//8 ---------------------------------------------------------------
int[] marks = new int[10]; //10 spaces marks array
int sum = 0;
for (int i = 0; i < 10; i++)
{
    Console.Write("What is Student " + (i + 1) + " marks? ");
    if (i == 4)
    {
        Console.WriteLine("Student is on MC!");
        continue;
    }
    marks[i] = Convert.ToInt32(Console.ReadLine());
    sum += marks[i];
}
Console.WriteLine("Total Marks: " + sum);
Console.Write("\n");

//9 ---------------------------------------------------------------
int[,] matrix = { { 1, 2, 3 }, //2D array
                  { 4, 5, 6 }, 
                  { 7, 8, 9 } };

Console.WriteLine("Item at (1, 3):" + matrix[0, 2]);