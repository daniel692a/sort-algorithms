const bubbleSort = array => {
	for (let i = 0; i < array.length; i++) {
		let swap = false;
		for (let j = 0; j < array.length-i; j++) {
			if (array[j]>array[j+1]) {
				let temp = array[j];
				array[j] = array[j+1];
				array[j+1]=temp;
				swap = true;
			}
		}
		if (swap===false) {
			break;
		}
	}
	return array
}

console.log(bubbleSort([5, 4, 1, 8, 2]));
