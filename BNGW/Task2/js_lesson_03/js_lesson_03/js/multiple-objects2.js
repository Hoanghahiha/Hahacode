var today = new Date();
var year = today.getFullYear();
function sinhvien(name,age){ /* tạo hàm*/
    this.name = name;
    this.age= age;
    this.checkAvailability = function (){
        return year - this.age;
    };
};
/* khởi tạo hai biến đối tượng*/
var sinhvien1 = new sinhvien('Hoang Ha ','1993');
var sinhvien2 = new sinhvien('Van Thanh ','1997');

var details1 = sinhvien1.name + 'age : ';
details1+= sinhvien1.checkAvailability();
var elsinhvien1 = document.getElementById('hotel1');
elsinhvien1.textContent=details1;

var details2 = sinhvien2.name + 'age: ';
details2 += sinhvien2.checkAvailability();
var elSv2 = document.getElementById('hotel2');
elSv2.textContent = details2;
