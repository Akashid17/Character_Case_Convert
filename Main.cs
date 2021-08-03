
using System;

class CharacterX
{
	public

	void CharacterConvert(char ch)
	{
		if(ch >= 'A' && ch <= 'Z')
		{
			ch = (char)((int)ch+32);

			Console.WriteLine(ch);
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			ch = (char)((int)ch-32);

			Console.WriteLine(ch);
		}
		else
		{
			Console.WriteLine("Wrong Character Entered");
		}
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Character");
		char cValue = Convert.ToChar(Console.ReadLine());

		CharacterX cobj = new CharacterX();
		cobj.CharacterConvert(cValue);
	}
}