#ifndef MODEL_LOADER_H
#define MODEL_LOADER_H

#include <vector>
#include <string>
#include <glm/glm.hpp>
#include <GL/glew.h> // Include OpenGL headers for GLuint

struct Model {
    std::vector<glm::vec3> vertices; // Vertex positions
    std::vector<glm::vec3> normals;  // Vertex normals
    std::vector<glm::vec2> uvs;      // Texture coordinates

    GLuint VAO; // Vertex Array Object
    GLuint VBO; // Vertex Buffer Object
};

Model loadModel(const std::string& path);

#endif
