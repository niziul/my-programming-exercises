using System;

namespace MeuAppMethodsAndFunctions
{
    class Program
    {
        static void Main(string[] args)
        {
            MeuMetodo();
        }

        static void MeuMetodo()
        {
            Console.WriteLine(RetornaNome("Niziul", "luizin"));
        }


        static string RetornaNome(
            string nome, 
            string sobrenome,
            /*
                Parâmetros opcionais. (Regras: tem que sempre ser atribuído, e se adicionado por ultimo) :
            */
            int idade = 20,   
            bool teste = false,
            double novo = 20.32
        )
        {
            return nome + " " + sobrenome + " " + idade.ToString();
        }
        
    }
}