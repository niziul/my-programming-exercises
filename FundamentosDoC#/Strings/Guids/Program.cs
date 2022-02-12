using System;

namespace Guids 
{
    class Program
    {
        enum TextFile  
        {
            OPEN,
            SAVING,
            CLEAN
        }
        static void Main(string[] args)
        {
            ConsoleInterface();
        }

        
        struct OldGloballyUniqueIdentifier
        {
            /*
                Globally Unique Identifier
            */
            public static Guid Id {get; set;} = Guid.NewGuid();
            public static string ?InString {get; set;}           
            public static string ?InSubstring {get; set;}           
        }

        struct TextFileLegacy
        {
            public static string ?ContentsOfLegacy {get; set;}
            public static string Path = "LegacyTextFile.txt";    
        }
        
        static void ConsoleInterface()
        {
            ShowsTestThings();
            Shows_a_GloballyUniqueIdentifierAndDisplaysTheOldOnes();                
        }
        static void ShowsTestThings()
        {
            Console.Write("[");
            MenuSkeleton();
            Console.Write("]");
            
            Console.Beep();

            Console.WriteLine("~ Hello, world! xd");

            Console.WriteLine();

            Console.WriteLine($"-- Lagest Window Width: {Console.LargestWindowWidth}");
            Console.WriteLine($"-- Window Height : {Console.WindowHeight}");


            Thread.Sleep(2000);

            Console.Beep();

            Console.WriteLine();
        }
        static void Shows_a_GloballyUniqueIdentifierAndDisplaysTheOldOnes()
        {
            OldGloballyUniqueIdentifier.InString += OldGloballyUniqueIdentifier.Id;
            OldGloballyUniqueIdentifier.InSubstring += OldGloballyUniqueIdentifier.Id.ToString().Substring(0, 8);
            

            Console.WriteLine($"-- New id (used GUID) :\n[{OldGloballyUniqueIdentifier.InSubstring}]");

            Thread.Sleep(2000);

            Console.Beep();

            Console.Write("[");
            MenuSkeleton();
            Console.Write("]");

            Console.WriteLine($"-- Olds ids :\n{ReturnWhatYouReadInTheLegacy()}");

            SavingAndManagingGloballyUniqueIdentifierInLegacyTextFile(TextFile.SAVING);
            

            Console.Write("[");
            MenuSkeleton();
            Console.Write("]");
        }
        static void MenuSkeleton()
        {
            for (var i = 0; i <= Console.BufferWidth - 3; i++)
                Console.Write("-");
        }

        static void SavingAndManagingGloballyUniqueIdentifierInLegacyTextFile(TextFile doWhat)
        {
            OpenTextFile();

            switch(doWhat)
            {
                case TextFile.SAVING: SavingTextFile(); break;
                case TextFile.OPEN: OpenTextFile(); break;
                default: CleanTextFile(); break;
            }
        }

        static void OpenTextFile()
        {
            EditTextFile(ReturnWhatYouReadInTheLegacy());
        }
        static void EditTextFile(string Content)
        {
            TextFileLegacy.ContentsOfLegacy = $"{Content}";
        }
        static void SavingTextFile()
        {
            CleanTextFile();

            //EditTextFile(TextFileLegacy.ContentsOfLegacy += $"[{OldGloballyUniqueIdentifier.InString}] \n ~ {DateTime.Now}");
            EditTextFile(TextFileLegacy.ContentsOfLegacy += $"[{OldGloballyUniqueIdentifier.InSubstring}] \n ~ {DateTime.Now}");
            
            using (var fileLegacyToWrite = new StreamWriter(TextFileLegacy.Path))
                fileLegacyToWrite.WriteLine(TextFileLegacy.ContentsOfLegacy);

        }
        static void CleanTextFile()
        {
            using (var fileLegacyToClean = new StreamWriter(TextFileLegacy.Path))
                fileLegacyToClean.WriteLine();
        }
    

        static string ReturnWhatYouReadInTheLegacy()
        {
            using (var fileLegacyToOpen = new StreamReader(TextFileLegacy.Path))
                return fileLegacyToOpen.ReadToEnd();
        }
    }
}