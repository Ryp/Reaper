#include "shaderhelper.hpp"

#include <fstream>
#include <iostream>

void ShaderHelper::loadSimpleShader(mogl::ShaderProgram& shader, const std::string& vertexFile, const std::string& fragmentFile)
{
    std::ifstream   vsFile(vertexFile);
    std::ifstream   fsFile(fragmentFile);
    mogl::Shader    vertex(GL_VERTEX_SHADER);
    mogl::Shader    fragment(GL_FRAGMENT_SHADER);

    vertex.compile(vsFile);
    fragment.compile(fsFile);

    shader.attach(vertex);
    shader.attach(fragment);

    Assert(shader.link(), shader.getLog());
}