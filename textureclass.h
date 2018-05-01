#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <stdio.h>
#include "shader.h"
class textureobject{
public:
    glm::vec3 m_materialambient;
    glm::vec3 m_materialdiffuse;
    glm::vec3 m_materialspecular;
    float m_materialshininess;
    glm::vec3 m_lightambient;
    glm::vec3 m_lightdiffuse; // darken the light a bit to fit the scene
    glm::vec3 m_lightspecular;
    textureobject(glm::vec3 materialambient, glm::vec3 materialdiffuse, glm::vec3 materialspecular, float materialshininess, glm::vec3 lightambient, glm::vec3 lightdiffuse, glm::vec3 lightspecular);
    void setShaderSettings(Shader shader);
};

textureobject::textureobject(glm::vec3 materialambient, glm::vec3 materialdiffuse, glm::vec3 materialspecular, float materialshininess, glm::vec3 lightambient, glm::vec3 lightdiffuse, glm::vec3 lightspecular)
{
    m_materialambient = materialambient;
    m_materialdiffuse = materialdiffuse;
    m_materialspecular = materialspecular;
    m_materialshininess = materialshininess; 
    m_lightambient = lightambient;
    m_lightdiffuse = lightdiffuse; 
    m_lightspecular = lightspecular;
}

void textureobject::setShaderSettings(Shader shader)
{
    shader.setVec3("material.ambient",  m_materialambient);
    shader.setVec3("material.diffuse",  m_materialdiffuse);
    shader.setVec3("material.specular", m_materialspecular);
    shader.setFloat("material.shininess", m_materialshininess);
    shader.setVec3("light.ambient",  m_lightambient);
    shader.setVec3("light.diffuse",  m_lightdiffuse); // darken the light a bit to fit the scene
    shader.setVec3("light.specular", m_lightspecular); 
}