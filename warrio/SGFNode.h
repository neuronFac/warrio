#pragma once
class SGFNode
{
	SGFNode* parent;
	SGFNode* child;
	SGFNode* next;
public:
	SGFNode():parent(NULL), child(NULL), next(NULL){
		cout << "Created new SGF Node";
	}
	~SGFNode();
};

