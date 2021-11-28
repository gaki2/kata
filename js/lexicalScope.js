let a = 5;

const fn = () => console.log(a);

(function() {
	let a = 10;
	fn();
 })()
