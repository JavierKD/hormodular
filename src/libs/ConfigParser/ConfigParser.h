//------------------------------------------------------------------------------
//-- ConfigParser
//------------------------------------------------------------------------------
//--
//-- Reads the configuration file and gets the main parameters
//--
//------------------------------------------------------------------------------
//--
//-- This file belongs to the Hormodular project
//-- (https://github.com/David-Estevez/hormodular.git)
//--
//------------------------------------------------------------------------------
//-- Author: David Estevez-Fernandez
//--
//-- Released under the GPL license (more info on LICENSE.txt file)
//------------------------------------------------------------------------------

#ifndef CONFIGPARSER_H
#define CONFIGPARSER_H

#include "Module.h"
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <tinyxml2.h>

namespace hormodular {
class ConfigParser
{
    public:
        ConfigParser();

        int parse(const std::string& filepath);

        std::string getRobotName();
        std::string getSimulationFile();
        std::string getGaitTableFolder();
        int getNumModules();
        int getJointID(const int& module);
        std::vector<int> getJointIDs();
        std::vector<ModuleFunction> getFunctionIDs();
        std::vector<int> getDepthIDs();
        std::vector<unsigned long> getShapeIDs();
        std::vector<int> getNumLimbsIDs();
        std::vector<int> getLimbsIDs();

    private:
        void clearData();
        bool removeBadCharacters(std::string& string);

        std::string robotName;
        std::string simulationFile;
        std::string gaitTableFolder;
        int numModules;
        std::vector<int> jointIDs;
        std::vector<ModuleFunction> id_function_vector;
        std::vector<int> id_depth_vector;
        std::vector<unsigned long> id_shape_vector;
        std::vector<int> id_num_limbs_vector;
        std::vector<int> id_limbs_vector;

};
}


#endif // CONFIGPARSER_H
