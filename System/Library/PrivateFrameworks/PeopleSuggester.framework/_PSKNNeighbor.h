/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _PSKNNeighbor : NSObject {

	double _distance;
	NSArray* _nodeData;

}

@property (assign,nonatomic) double distance;                 //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSArray * nodeData;              //@synthesize nodeData=_nodeData - In the implementation block
-(NSArray *)nodeData;
-(id)initWithNodeData:(id)arg1 distance:(double)arg2 ;
-(double)distance;
-(void)setDistance:(double)arg1 ;
-(void)setNodeData:(NSArray *)arg1 ;
@end
