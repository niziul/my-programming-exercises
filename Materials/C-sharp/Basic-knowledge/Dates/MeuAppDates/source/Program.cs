using System;
using System.Globalization;

namespace MeuAppDates
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Clear();

            /*
                Iniciando com datas:
            */

            // var date = new DateTime();
            
            // var currentDate = DateTime.Now; // A data atual do sistema

            // Console.WriteLine(currentDate);







            /*
                Obtendo valores da data:
            */

            // var date = new DateTime(2020, 10, 12, 8, 23, 40);

            // Console.WriteLine(date);
            // Console.WriteLine();
            // Console.WriteLine(date.Year);
            // Console.WriteLine(date.Month);
            // Console.WriteLine(date.Day);
            // Console.WriteLine();
            // Console.WriteLine(date.Hour);
            // Console.WriteLine(date.Minute);
            // Console.WriteLine(date.Second);
            // Console.WriteLine();
            // Console.Write(date.DayOfWeek);
            // Console.Write($" = {(int)date.DayOfWeek}");
        
        
        
        
        
            


            /*
                Formatando datas:
            */

            // var date = DateTime.Now;

            
            // // var formatada = String.Format("{0:yyyy}", date);

            // // var formatada = String.Format("{0:M}", date);
            
            // // var formatada = String.Format("{0:yyyy-M-dd}", date);

            // // var formatada = String.Format("{0:yyyy/M/dd}", date);

            // // var formatada = String.Format("{0:dd/M/yyyy}", date);

            // // var formatada = String.Format("{0:dd/M/yyyy hh:mm:ss}", date);

            // var formatada = String.Format("{0:dd/M/yyyy hh:mm:ss ff z}", date);

            // Console.WriteLine(formatada);
        
        
        
        
        
        
        
        
            /*
                Padrões de formatação:
            */
        
            // var date = DateTime.Now;

            
            // // var formatada = String.Format("{0:t}", date); // --> 20:14

            // // var formatada = String.Format("{0:d}", date); //  --> 14/02/2022

            // // var formatada = String.Format("{0:T}", date); // ---> 20:15:30  

            // // var formatada = String.Format("{0:D}", date); // ---> segunda-feira, 14 de fevereiro de 2022

            // // var formatada = String.Format("{0:f}", date); // ---> segunda-feira, 14 de fevereiro de 2022 20:17

            // // var formatada = String.Format("{0:g}", date); // ---> 14/02/2022 20:17


            // // Padrão:

            // // var formatada = String.Format("{0:r}", date); // ---> Mon, 14 Feb 2022 20:18:36 GMT

            // // var formatada = String.Format("{0:s}", date); // ---> 2022-02-14T20:22:18

            // var formatada = String.Format("{0:u}", date); // ---> 2022-02-14 20:22:47Z




            // Console.WriteLine(formatada);








            /*
                Adicionando valores:
            */

            
            // var date = DateTime.Now;

            
            // // var dia = date.Day + 1; // evite usar!

            
            // Console.WriteLine(date.AddDays(12));

            
            // Console.WriteLine(date.AddMonths(2));

            
            // Console.WriteLine(date.AddYears(5));


            // Console.WriteLine();

            
            // Console.WriteLine(date.AddHours(2));

            
            // Console.WriteLine(date.AddMinutes(6));

            
            // Console.WriteLine(date.AddSeconds(22));








            /*
                Comparando datas:
            */

            // DateTime? date = null;

            // var date = DateTime.Now;

            // // if (date == DateTime.Now)
            // //     Console.WriteLine("é sim!");

            // // if (date.Date == DateTime.Now.Date)
            // //     Console.WriteLine("é sim!");

            // if (date.Date >= DateTime.Now.Date)
            //     Console.WriteLine("é igual!");



            // Console.WriteLine(date);









            /*
                CultureInfo:
            */

            // var pt = new CultureInfo("pt-PT");
            // var br = new CultureInfo("pt-BR");
            // var enK = new CultureInfo("en-UK");
            // var enS = new CultureInfo("en-US");
            // var de = new CultureInfo("de-DE");
            // var atual = CultureInfo.CurrentCulture;


            // // Console.WriteLine(DateTime.Now);
            // // Console.WriteLine(pt);

            // // Console.WriteLine(string.Format("{0:D}", DateTime.Now));

            // // Console.WriteLine(DateTime.Now.ToString("D"));
            
            // // Console.WriteLine(DateTime.Now.ToString("D", pt)); // segunda-feira, 14 de fevereiro de 2022

            // // Console.WriteLine(DateTime.Now.ToString("D", de)); // Montag, 14. Februar 2022

            // Console.WriteLine(DateTime.Now.ToString("D", atual)); // segunda-feira, 14 de fevereiro de 2022










            /*
                Timezone:
            */

            // var dateTimeUtc = DateTime.UtcNow;

            // // Console.WriteLine(DateTime.Now); 

            // // Console.WriteLine(dateTime); // 15/02/2022 00:06:13

            
            // // Console.WriteLine(dateTime.ToLocalTime()); // 14/02/2022 21:08:42


            // // var timezoneAustralia = TimeZoneInfo.FindSystemTimeZoneById("Pacific/Auckland");
            // // Console.WriteLine(timezoneAustralia); // (UTC+12:00) Auckland, Wellington


            // // var horaAustralia = TimeZoneInfo.ConvertTimeFromUtc(dateTimeUtc, timezoneAustralia);
            // // Console.WriteLine(horaAustralia); // 15/02/2022 13:14:06


            // var timezones = TimeZoneInfo.GetSystemTimeZones();
            // foreach (var timezone in timezones)
            // {
            //     Console.WriteLine(timezone.Id);
            //     Console.WriteLine(timezone);
            //     Console.WriteLine(TimeZoneInfo.ConvertTimeFromUtc(dateTimeUtc, timezone));
            //     Console.WriteLine("--------------");
            // }










            /*
                Timespan:
            */

            var timeSpan = new TimeSpan();

            Console.WriteLine(timeSpan); // 00:00:00


            var timeSpanNanosegundos = new TimeSpan(1);
            Console.WriteLine(timeSpanNanosegundos); // 00:00:00.0000001

            var timeSpanHoraMinutoSegundo = new TimeSpan(5, 12, 8);
            Console.WriteLine(timeSpanHoraMinutoSegundo); // 05:12:08

            var timeSpanDiaHoraMinutoSegundo = new TimeSpan(3, 5, 50, 10);
            Console.WriteLine(timeSpanDiaHoraMinutoSegundo); // 3.05:50:10

            var timeSpanDiaHoraMinutoSegundoMilissegundo = new TimeSpan(15, 12, 55, 8, 100);
            Console.WriteLine(timeSpanDiaHoraMinutoSegundoMilissegundo); // 15.12:55:08.1000000


            Console.WriteLine(timeSpanHoraMinutoSegundo - timeSpanDiaHoraMinutoSegundo); // -3.00:38:02
            Console.WriteLine(timeSpanDiaHoraMinutoSegundo.Days); // 3
            Console.WriteLine(timeSpanDiaHoraMinutoSegundo.Add(new TimeSpan(12, 0, 0))); // 3.17:50:10








        }
    }
}