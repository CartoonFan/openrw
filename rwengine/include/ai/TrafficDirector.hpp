#pragma once

#include <data/PathData.hpp>
#include "AIGraph.hpp"
#include "AIGraphNode.hpp"

#include <glm/glm.hpp>
#include <vector>

class GameWorld;

class TrafficDirector
{
public:
	
	TrafficDirector(AIGraph* graph, GameWorld* world);
	
	std::vector< AIGraphNode* > findAvailableNodes(AIGraphNode::NodeType type, const glm::vec3& near, float radius);
	
	void setDensity(AIGraphNode::NodeType type, float density);
	
private:
	AIGraph* graph;
	GameWorld* world;
	float pedDensity;
	float carDensity;
};