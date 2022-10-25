#include "Block.h"
#include "Physics.h"

Block::Block(int id = 0, Position* bposition = new Position()) {
	_id = id;
	_position* = bposition*;
};

Block::Block(int id = 0, Position* bposition = new Position(), int* color, char* symbol, bool* collision) {
	_id = id;
	_position* = bposition*;
	_color* = color*;
	_symbol* = symbol*;
	_collision* = collision*;
};

Entity::getId() {
	return _id;
}

Entity::getPosition() {
	return _position;
}