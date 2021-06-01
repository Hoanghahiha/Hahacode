function sinhvien(name,age){ /* tạo hàm*/
    this.name = name;
    this.age= age;
    this.checkAvailability = function (){
        return 2021 - this.age;
    };
};
/* khởi tạo hai biến đối tượng*/
var quaysinhvien = new sinhvien('Quay ','1993');
var parksinhvien = new sinhvien('Park ','1997');

var details1 = quaysinhvien.name + 'age : ';
details1+= quaysinhvien.checkAvailability();
var elsinhvien1 = document.getElementById('hotel1');
elsinhvien1.textContent=details1;

var details2 = parksinhvien.name + 'age: ';
details2 += parksinhvien.checkAvailability();
var elSv2 = document.getElementById('hotel2');
elSv2.textContent = details2;
