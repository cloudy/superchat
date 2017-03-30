#ifndef MODEL_H
#define MODEL_H 2016

#include <vector>

#include "chat_room.h"
#include "user.h"

class Model
{
public:
	Model();
	void moveUserToNewChatRoom(User user, ChatRoom destination_chat_room);
	User findUser(unsigned long long uuid);


	//getters
	std::vector<std::string> getAllChatroomNames() const;

private:
	ChatRoom chat_rooms[10];
	std::vector<User> users; //DISCUSSION: current user will never change, can we just keep our user as first index in vector?
	User* current_user; //DISCUSSION: current user will never change, can we just keep our user as first index in vector?
};

#endif