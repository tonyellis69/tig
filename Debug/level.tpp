/* Code describing level. */

#include global.tpp
#include coreObj.tpp


/** Initialisation code.*/
init() {
	//start player in the right room:
	move player to foyer;
};


CRoom foyer has name "foyer",  description = { 
"I was in what had once been a luxurious reception area. Algae encrusted the windows, admitting 
only a thin trickle of light. It fell on mouldering couches, plastic tables and an imposing reception
desk. Swathes of 
dust-choked cobweb hung from the ceiling like grey,
motheaten banners. It didn't look as if the place had been abandoned for years: 
it looked more like centuries. "; 
}, 	
northTo = broadCorridor;

-> CGameObj box has name "pale plastic box", initial "A pale plastic box lay discarded here.",
description "It wasn't really any kind of colour, just pale.";
-> CGameObj box2 has name "dark plastic box", initial "Someone had left a dark plastic box here.",
description "Made from a dull, black-but-not-really-black plastic.";
-> CGameObj fromitz has name "fromitz board", initial "An old fromitz board gathered dust on the floor.",
description "It looked like every other fromitz board I'd ever seen.";

-> CScenery  CSupporter desk has name "reception desk", pushed = 0, initial { text = "A formidable reception desk stretched
almost the length of the room. ";
if (pushed == 1)
	text = text + " It had recently been pushed.";
return text;
}
,  description "An imposing block of moulded plastic, now as 
dusty as everything else.", 
push {  
	pushed = 1;
	"\n\nStraining my back, I managed to push the desk a few centimetres.";
	
};

-> -> CGameObj doll has name "Russian doll", initial "Somewhat incongrously, a painted Russian doll sat on the floor.",
description "Carved from wood and painted in bright, patterned colours.";
-> -> CGameObj bug has name "tiny microphone", description "About the size of my littlest thumb-nail.";



CCorridor broadCorridor has name "broad corridor", description "As I ventured into the corridor, Max obligingly shone a
torch light ahead of me. It showed what once would have been a spacious and stylish hallway, with artfully 
curving walls and an orange carpet. Whole civilisations of mould had spawned in that carpet and 
passed away since it had last seen use. Darkness closed in all around me until I might as well have
been exploring a cave. The hallway wound deeper into the building to the north, and back the way I
had come to the south.",
shortName "broad corridor",
northTo = octHall, southTo = foyer;




CRoom octHall has description = "I came to a large, octagonal hall, as dead and dusty as
everywhere else.", // An imposingly large door blocked the way north.",
westTo = westPassage, neTo = nePassage, southTo = broadCorridor, northTo = rustyDoor;

CCorridor westPassage has description = "I ventured down the east-west passageway. Max's torchlight afforded 
me little glimpses of decayed surfaces.",
westTo pipeRoom, eastTo octHall;

CRoom pipeRoom has description = "I emerged in a room as large as any I had seen so far. It
was dominated by inumerable outsized pipes, emerging from the shadows, walls, floor and ceiling to converge
in a major piece of machinery in the centre of the room. Whatever purpose it had once served, it was
lifeless now.",
eastTo westPassage;

CCorridor nePassage has description = "I ventured down the passageway... I could go northeast or southwest.",
swTo octHall, neTo junction;

CRoom junction has description = "I found myself at the end of the passage.",
westTo turbineHall, eastTo maintenance, swTo nePassage;

CRoom turbineHall has description {
"I found myself at the bottom of a vertical chamber that must have filled most of the remaining space
in the building. Enormous cyclindrical machines rose into the dark, towering over me and the rusty metal crates that lay
discarded here. A network of pipes snaked among the spaces in between them, as
did a maintenance catwalk. ";},
eastTo junction;


-> CScenery catwalk has name "maintenance catwalk", description "Too high to reach, it led off tantalisingly
into the dark.",
climb {
	if (player.onObject != crate) {
		"\n\nThe catwalk was too high to reach.";
	}
	if (player.onObject == crate) {
		if (crate.pushed == true) {
			player.onObject = nothing;
			"\n\nStanding on the crate, I was able to climb onto the catwalk.";
		} else { 
			"\n\nAlthough I was higher, the crate was nowhere near the catwalk.";
		}
	}
};

-> CScenery crate has name "crates", pushed = false, description {
	result = "Nearly as big as me, but empty. ";
	if (pushed == false)
		result += "I could just about move one or two of them if I put my back into it.";
	else 
		result += "I'd managed to push one under the catwalk.";
	return result;
},
climb {  
	if (player.onObject == self) {
		player.onObject = nothing;
		"\n\nI climbed off the crate.";
	} else {
		player.onObject = self;
		"\n\nI climbed onto one of the crates.";
	}
},
push {
	if (pushed == false) {
		if (player.onObject == self) {
			"\n\nThat was never going to happen while I was standing on it.";
			return;
		}
		pushed = true;
		"\n\nWith a lot of swearing, I pushed one of the crates under the catwalk.";
	} else { 
		 "\n\nThere was no point pushing the crate any further.";
	}
	
};

CRoom maintenance has description = "The maintenance room was full of old, corroded machinery and 
rusty tools.",
westTo junction;

CRoom gallery has description "I found myself in a spacious, empty gallery.",
southTo rustyDoor;

-> CStatic CContainer panel has name "maintenance panel", open = false,
initial "Some kind of maintenance panel is set in the wall by the door.";

->-> CStatic crank has name "rusty crank", subject = rustyDoor, 
description "Some kind of mechanical handle you can turn.",
turnSub() {
	if (subject.open == false) {
		"\n\nComplaining loudly, the rusty door scrapes open as you turn the crank.";
		subject.open = true;
	} else
		"\n\nThe crank won't turn any further.";
};

CDoor rustyDoor has name "rusty door", northTo gallery, southTo octHall, open = false;




