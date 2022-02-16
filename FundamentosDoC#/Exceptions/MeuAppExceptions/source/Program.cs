using System;

namespace MeuAppExceptions
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();

            /*
                Exceptions:
            */

            // var arr = new int[3];
            
            // for (int index = 0; index < 10; index++)
            // {
            //     // System.IndexOutOfRangeException
            //     Console.WriteLine(arr[index]);
            // }






            /*
                Try/Catch
            */

            // var arr = new int[3];

            // try
            // {                
            //     for (int index = 0; index < 10; index++)
            //     {
            //         Console.WriteLine(arr[index]);
            //     }
    
            // }
            // catch (Exception ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);

            //     Console.WriteLine("Ops, algo deu errado!");
            // }
            





            /*
                Tratando erros
            */

            // var arr = new int[3];

            // try
            // {                
            //     for (int index = 0; index < 10; index++)
            //     {
            //         // IndexOutOfRangeException: index fora de alcance
            //         Console.WriteLine(arr[index]);
            //     }
    
            // }
            // catch (IndexOutOfRangeException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine("Não encontrei o índice na lista");
            // }
            // catch (Exception ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);

            //     Console.WriteLine("Ops, algo deu errado!");
            // }








            /*
                Disparando exceções:
            */

            // var arr = new int[3];

            // try
            // {                
            //     // for (int index = 0; index < 10; index++)
            //     // {
            //     //     // IndexOutOfRangeException: index fora de alcance
            //     //     Console.WriteLine(arr[index]);
            //     // }

            //     Cadastrar("");
            // }
            // catch (IndexOutOfRangeException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine("Não encontrei o índice na lista");
            // }
            // catch (ArgumentNullException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine("Falha ao cadastrar texto");
            // }
            // catch (Exception ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);

            //     Console.WriteLine("Ops, algo deu errado!");
            // }
            









            /*
                Custom Exceptions:
            */

            
            // var arr = new int[3];

            // try
            // {                
            //     // for (int index = 0; index < 10; index++)
            //     // {
            //     //     // IndexOutOfRangeException: index fora de alcance
            //     //     Console.WriteLine(arr[index]);
            //     // }

            //     Cadastrar("");
            // }
            // catch (MinhaException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine(ex.QuandoAconteceu);
            //     Console.WriteLine("Exceção customizada");
            // }
            // catch (IndexOutOfRangeException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine("Não encontrei o índice na lista");
            // }
            // catch (ArgumentNullException ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);
            //     Console.WriteLine("Falha ao cadastrar texto");
            // }
            // catch (Exception ex)
            // {
            //     Console.WriteLine(ex.InnerException);
            //     Console.WriteLine(ex.Message);

            //     Console.WriteLine("Ops, algo deu errado!");
            // }

            








            /*
                Finally:
            */

            try
            {                
                // for (int index = 0; index < 10; index++)
                // {
                //     // IndexOutOfRangeException: index fora de alcance
                //     Console.WriteLine(arr[index]);
                // }

                Cadastrar("fadlsfkja");
            }
            catch (MinhaException ex)
            {
                Console.WriteLine(ex.InnerException);
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.QuandoAconteceu);
                Console.WriteLine("Exceção customizada");
            }
            catch (IndexOutOfRangeException ex)
            {
                Console.WriteLine(ex.InnerException);
                Console.WriteLine(ex.Message);
                Console.WriteLine("Não encontrei o índice na lista");
            }
            catch (ArgumentNullException ex)
            {
                Console.WriteLine(ex.InnerException);
                Console.WriteLine(ex.Message);
                Console.WriteLine("Falha ao cadastrar texto");
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.InnerException);
                Console.WriteLine(ex.Message);

                Console.WriteLine("Ops, algo deu errado!");
            }
            finally
            {
                Console.WriteLine("Chegou ao fim!");
            }
        }
        
        private static void Cadastrar(string texto)
        {
            if (string.IsNullOrEmpty(texto))
                // throw new Exception("O texto não pode ser nulo ou vazio");
                // throw new ArgumentNullException("O texto não pode ser nulo ou vazio");
                throw new MinhaException(DateTime.Now);
        }
        
        public class MinhaException : Exception
        {
            public MinhaException(DateTime date)
            {
                QuandoAconteceu = date;
            }
            public DateTime QuandoAconteceu {get; set;}
        }
    }
}