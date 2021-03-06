/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MAAbstractGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _edges;

}
-(id)init;
-(id)addUniqueNodeWithLabel:(id)arg1 didCreate:(BOOL*)arg2 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 didCreate:(BOOL*)arg4 ;
@end

