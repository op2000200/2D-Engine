#pragma once

#include <General/Object.hpp>

namespace Engine
{
    class GameObject : public Object
    {
        private:
            Object *hitbox;
            GameObjectProperties properties;
        public:
            GameObject();
            ~GameObject();
    };
} // namespace Engine
