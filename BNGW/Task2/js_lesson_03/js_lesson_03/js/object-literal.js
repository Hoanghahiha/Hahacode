var hotel = {
    name: 'Quay',
    rooms: 40,
    booked: 25,
    checkAvailability: function (){ /* cách khai báo một hàm trong biến*/
        return this.rooms - this.booked; /* trả về kết quả, truy cập đến đối tượng hiện tại*/
    }
};

var elName = document.getElementById('hotelName');
elName.textContent= hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent=hotel.checkAvailability(); /* gọi hàm*/