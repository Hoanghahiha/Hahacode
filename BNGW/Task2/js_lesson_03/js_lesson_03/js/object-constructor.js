var hotel = new Object(); /* tạo ra một đối tượng mới*/
hotel.name = 'Park'; /* tên đối tượng.tên thuộc tính*/
hotel.rooms = 120;
hotel.booked = 77;
hotel.checkAvailability=function (){
    return this.rooms - this.booked;
};

var elName = document.getElementById('hotelName');
elName.textContent=hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent=hotel.checkAvailability();