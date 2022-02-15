using System;
using System.Globalization;

namespace Numbers
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();


            /*
                Tipo para moedas:
            */

            // var valor = 10.25;
            
            // decimal valor = 10.25m;
            // Console.WriteLine(valor);








            /*
                Formatando moedas:            
            */

            // var valor = 10.25m;

            // var culture = CultureInfo.CurrentCulture;

            // Console.WriteLine(valor.ToString(CultureInfo.CreateSpecificCulture("en-US")));

            // Console.WriteLine(valor.ToString(CultureInfo.CreateSpecificCulture("en-UK")));

            // Console.WriteLine(valor.ToString(CultureInfo.CreateSpecificCulture("pt-PT")));

            // Console.WriteLine(valor.ToString(CultureInfo.CreateSpecificCulture("es-ES")));

            // Console.WriteLine(valor.ToString(CultureInfo.CreateSpecificCulture("pt-BR")));



            // Console.WriteLine(valor.ToString("G", CultureInfo.CreateSpecificCulture("pt-BR"))); // 10,25

            // Console.WriteLine(valor.ToString("C", CultureInfo.CreateSpecificCulture("pt-BR"))); // R$ 10,25

            // Console.WriteLine(valor.ToString("C", CultureInfo.CreateSpecificCulture("es-ES"))); // 10,25 €

            // Console.WriteLine(valor.ToString("C", CultureInfo.CreateSpecificCulture("en-US"))); // $10.25

            // Console.WriteLine(valor.ToString("E04", CultureInfo.CreateSpecificCulture("en-US"))); // 1.0250E+001

            // Console.WriteLine(valor.ToString("N", CultureInfo.CreateSpecificCulture("en-US"))); // 10.250

            // Console.WriteLine(valor.ToString("P", CultureInfo.CreateSpecificCulture("en-US"))); // 1,025.000%








            /*
                math:
            */

            var valor = 10539.25m;

            // Console.WriteLine(
            //     // Math.Round(valor) // 10539
            //     // Math.Ceiling(valor) // 10540
            //     Math.Floor(valor) // 10539 
            // );

            Console.WriteLine(Math.Round(valor));
            Console.WriteLine(Math.Ceiling(valor));
            Console.WriteLine(Math.Floor(valor));
        }
    }
}