////////////////////////////////////////////////////////////////////////////////
/// ReaperGL
///
/// Copyright (c) 2015-2016 Thibault Schueller
/// This file is distributed under the MIT License
////////////////////////////////////////////////////////////////////////////////

#include "ResourceManager.h"

#include "Model.h"

ResourceManager::ResourceManager(const std::string& path)
:   _path(path + '/')
{}

Model* ResourceManager::getModel(const std::string& file)
{
    if (!_models[file])
        return (loadModel(file));
    return (_models[file]);
}

Model* ResourceManager::loadModel(const std::string& file)
{
    return (_models[file] = _loader.load(_path + file));
}