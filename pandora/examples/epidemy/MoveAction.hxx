
#ifndef __MoveAction_hxx__
#define __MoveAction_hxx__

#include <Action.hxx>
#include <string>

namespace Engine
{
	class Agent;
}

namespace Examples
{

class MoveAction : public Engine::Action
{
public:
	MoveAction();
	virtual ~MoveAction();
	void execute( Engine::Agent & agent );
	std::string describe() const;
};

} // namespace Examples

#endif // __MoveAction_hxx__

