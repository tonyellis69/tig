#pragma once

enum TOpCode { opNop, opPrint, opGiveOptions, opOption, opJumpEvent, opEnd, opAssign, opPushStr, opPushInt, 
	opPushVar, opGetString, opAdd,  opStartTimer, opTimedEvent,
	opExpressVar, opPushObj, opCall, opReturn, opReturnVal, opHot, opInitArray,
	opPushElem, opAssignElem
};

static char* opCode[] = { "opNop\0",
	"opPrint\0",
	"opGiveOptions\0",
	"opOption\0",
	"opJumpEvent\0",
	"opEnd\0", 
	"opAssign\0", 
	"opPushStr\0",
	"opPushInt\0", 
	"opPushVar\0",
	"opGetString\0",
	"opAdd\0",
	"opStartTimer\0",
	"opTimedEvent\0",
	"opExpressVar\0",
	"opPushObj\0",
	"opCall\0",
	"opReturn\0",
	"opReturnVal\0",
	"opHot\0",
	"opInitArray\0",
	"opPushElem\0",
	"opAssignElem\0"};

const int memberIdStart = 1000;
const int globalVarStart = 100;

enum TigVarType { tigUndefined, tigString, tigInt, tigFloat, tigObj, tigFunc, tigArray };
