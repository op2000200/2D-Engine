#include "GameElements/Scene.hpp"

namespace Engine
{
    Scene::Scene()
    {
    }

    Scene::~Scene()
    {
    }

    void Scene::addObjectToRender(Object *obj)
    {
        renderQueue.push_back(obj);
    }
} //namespace Engine