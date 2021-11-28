const ninja = {
name : "narutoo",
	   weapon: "suriken",
	   food : "apple"
};


//1. 스프레드 연산자
const ninja2 = {...ninja};
ninja2.name = "sakura";

console.log(ninja, ninja2);

//2. 오브젝트 객체 assign 메소드
const ninja3 = Object.assign({}, ninja, {name : "saske", age: 13});

console.log(ninja3);


