var hotel = {
    name: 'Park',
    rooms: 120,
    booked: 77,
    checkAvailability: function (){ /* Đặt tên hàm*/
        return this.rooms - this.booked; /* Hàm trả về kết quả*/
    }
};

var elName = document.getElementById('hotelName');
elName.textContent = hotel.name;

var elRooms = document.getElementById('rooms');
elRooms.textContent=hotel.checkAvailability();