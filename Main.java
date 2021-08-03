
import java.lang.*;
import java.io.*;

class CharacterX
{
    public void CharacterConvert(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = (char)((int)ch+32);

            System.out.println(ch);
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            ch = (char)((int)ch-32);

            System.out.println(ch);
        }
        else
        {
            System.out.println("Wrong Character Entered");
        }
    }
}

class Main
{
    public static void main(String Args[])throws Exception
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.println("Enter Character");
        char cValue = (char)bobj.read();

        CharacterX cobj = new CharacterX();
        cobj.CharacterConvert(cValue);
    }
}