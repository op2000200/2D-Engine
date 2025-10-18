#pragma once

#include <Object.hpp>

namespace Engine
{
    class Scene
    {
    private:
        std::vector<Object*> renderQueue;
    public:
        Scene();
        ~Scene();

        std::vector<Object*> getRenderQueue() {return renderQueue;};
        void addObjectToRender(Object* obj);
    };
} // namespace Engine
