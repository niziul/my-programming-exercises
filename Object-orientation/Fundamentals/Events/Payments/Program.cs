using Spectre.Console;

namespace Payments;

class Program 
{ 
    static void Main(string[] args) 
    { 
        var room = new Room(3); 
            room.RoomSoldOutEvent += OnRoomSoldOut;
            room.ReserveSeat();
            room.ReserveSeat();
            room.ReserveSeat();
            room.ReserveSeat();
            room.ReserveSeat();
    } 
    static void OnRoomSoldOut(object sender, EventArgs e)
    {
        AnsiConsole.WriteLine("Sala lotada.");
    }
}

public class Room 
{ 
    public int Seats { get; set; }


    private int seatsInUse = 0;
    
    public Room(int seats) 
    { 
        Seats = seats; 
        seatsInUse = 0; 
    }
    
    public void ReserveSeat() 
    { 
        seatsInUse++; 
        if(seatsInUse > Seats) 
            OnRoomSoldOut(EventArgs.Empty);
        else
            AnsiConsole.WriteLine("Assento reservado!"); 
    }

    public event EventHandler RoomSoldOutEvent;

    protected virtual void OnRoomSoldOut(EventArgs e) 
    {
        EventHandler handler = RoomSoldOutEvent;
        handler?.Invoke(this, e);
    }
}