/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GraphVisualizer/GraphVisualizer-Structs.h>
@class NSMutableOrderedSet;

@interface GVGraph : NSObject {

	NSMutableOrderedSet* nodes;
	NSMutableOrderedSet* edges;

}

@property (nonatomic,retain) NSMutableOrderedSet * nodes; 
@property (nonatomic,retain) NSMutableOrderedSet * edges; 
@property (nonatomic,readonly) CGRect bounds; 
-(id)allEdges;
-(id)init;
-(void)addNode:(id)arg1 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)setNodes:(NSMutableOrderedSet *)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(NSMutableOrderedSet *)nodes;
-(id)description;
-(void)removeNode:(id)arg1 ;
-(BOOL)render:(id)arg1 ;
-(NSMutableOrderedSet *)edges;
-(id)allNodes;
-(void)setEdges:(NSMutableOrderedSet *)arg1 ;
-(BOOL)hasEdgeFrom:(id)arg1 to:(id)arg2 ;
-(id)edgeFrom:(id)arg1 to:(id)arg2 ;
-(void)removeEdgeFrom:(id)arg1 to:(id)arg2 ;
-(void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(BOOL)arg3 ;
-(BOOL)hasNode:(id)arg1 ;
-(void)reverseEdge:(id)arg1 ;
-(void)undoReverseEdge:(id)arg1 ;
-(id)connectedSubgraphs;
-(void)iterateOverAllEdges:(/*^block*/id)arg1 ;
-(void)iterateOverAllNodes:(/*^block*/id)arg1 ;
@end

