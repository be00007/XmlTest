#include "tinyxml2.h"

int main() {
    tinyxml2::XMLDocument doc;

    // 创建声明
    tinyxml2::XMLDeclaration *decl = doc.NewDeclaration();
    doc.InsertFirstChild(decl);

    // 创建根元素
    tinyxml2::XMLElement *root = doc.NewElement("Root");
    doc.InsertEndChild(root);

    // 创建子元素
    tinyxml2::XMLElement *element1 = doc.NewElement("Child");
    // element1->SetText("Hello, TinyXML2!");
    element1->SetAttribute("type", "int");
    root->InsertEndChild(element1);

    tinyxml2::XMLElement *subelement = doc.NewElement("item");
    subelement->SetAttribute("type", "uint32");
    subelement->SetText("tiny");
    root->InsertEndChild(subelement);
    // 保存成XML文件
    doc.SaveFile("example.xml");

    return 0;
}
