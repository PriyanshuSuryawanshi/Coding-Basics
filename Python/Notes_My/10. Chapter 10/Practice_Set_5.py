class Train:
    def book(self):
        print("service currently unavailable")
    def get_status(self):
        print("10 Seats Remaining")
    def get_fare(self):
        print("Rs.500 per Ticket")
        
t1 = Train()
t1.book()
t1.get_status()
t1.get_fare()
