# SimulationOpenRAVE ######################################################################################
add_library( SimulationOpenRAVE SimulationOpenRAVE.cpp )
set_target_properties(SimulationOpenRAVE PROPERTIES COMPILE_FLAGS "${OPENRAVE_CXXFLAGS} ${CMAKE_CXX_FLAGS}")
set_target_properties(SimulationOpenRAVE PROPERTIES LINK_FLAGS "${OPENRAVE_LINK_FLAGS}")
target_link_libraries(SimulationOpenRAVE ${OpenRAVE_LIBRARIES} ${OpenRAVE_CORE_LIBRARIES} ${Boost_THREAD_LIBRARY} ${OPENMR})

