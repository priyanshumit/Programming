"use strict";


const app = new function() {
	this.doCrypt = function(isDecrypt) {
		const shiftText = document.getElementById("shift").value;
		if (!/^-?\d+$/.test(shiftText)) {
			alert("Shift is not an integer");
			return;
		}
		let shift = parseInt(shiftText, 10);
		if (shift < 0 || shift >= 26) {
			alert("Shift is out of range");
			return;
		}
		if (isDecrypt)
			shift = (26 - shift) % 26;
		let textElem = document.getElementById("text");
		textElem.value = caesarShift(textElem.value, shift);
	};
	
	function caesarShift(text, shift) {
		const UPPER_A = "A".codePointAt(0);
		const LOWER_A = "a".codePointAt(0);
		let result = "";
		for (const ch of text) {
			let cc = ch.codePointAt(0);
			if (UPPER_A <= cc && cc <= "Z".codePointAt(0))  // Uppercase
				cc = (cc - UPPER_A + shift) % 26 + UPPER_A;
			else if (LOWER_A <= cc && cc <= "z".codePointAt(0))  // Lowercase
				cc = (cc - LOWER_A + shift) % 26 + LOWER_A;
			result += String.fromCodePoint(cc);
		}
		return result;
	}	
};
