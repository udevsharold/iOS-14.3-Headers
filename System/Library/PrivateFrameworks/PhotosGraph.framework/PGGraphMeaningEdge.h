/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@class NSString;

@interface PGGraphMeaningEdge : PGGraphPropertylessEdge {

	float _weight;

}

@property (assign,nonatomic) float weight;                 //@synthesize weight=_weight - In the implementation block
@property (readonly) BOOL isReliable; 
@property (readonly) NSString * meaningLabel; 
+(id)filter;
-(id)edgeDescription;
-(unsigned short)domain;
-(BOOL)isReliable;
-(void)setWeight:(float)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(float)weight;
-(id)label;
-(id)initFromMomentNode:(id)arg1 toMeaningNode:(id)arg2 weight:(float)arg3 ;
-(NSString *)meaningLabel;
@end

