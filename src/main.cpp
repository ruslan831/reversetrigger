#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;
class $modify(PlayerObject){
    void ringJump(GameObject* ringObj) {
        if (ringObj->m_objectID == 141)
        {
            this->m_playerSpeed = -m_playerSpeed; 
        }
        
    return PlayerObject::ringJump(ringObj);
    }
};


