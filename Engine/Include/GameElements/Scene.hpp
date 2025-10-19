#pragma once

#include <General/Object.hpp>

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

    class StaticScene : public Scene
    {
        private:
        public:
            StaticScene();
            ~StaticScene();
    };
} // namespace Engine
