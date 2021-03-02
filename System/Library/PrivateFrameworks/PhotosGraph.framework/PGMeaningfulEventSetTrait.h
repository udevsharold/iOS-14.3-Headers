/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait {

	NSSet* _nodes;
	NSSet* _negativeNodes;
	/*^block*/id _additionalMatchingBlock;

}

@property (nonatomic,readonly) NSSet * nodes;                       //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSSet * negativeNodes;               //@synthesize negativeNodes=_negativeNodes - In the implementation block
@property (nonatomic,copy) id additionalMatchingBlock;              //@synthesize additionalMatchingBlock=_additionalMatchingBlock - In the implementation block
-(id)initWithNodes:(id)arg1 ;
-(NSSet *)nodes;
-(id)initWithNodes:(id)arg1 negativeNodes:(id)arg2 ;
-(BOOL)isActive;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(NSSet *)negativeNodes;
-(id)additionalMatchingBlock;
-(void)setAdditionalMatchingBlock:(id)arg1 ;
@end
