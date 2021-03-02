/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphLocationNode, NSDateInterval, NSSet, NSArray;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;
	NSSet* _interestingMomentNodes;
	NSArray* _interestingAssetLocalIdentifiersInSuperset;
	NSArray* _assetLocalIdentifiersInSuperset;
	NSSet* _supersetLocationNodes;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;                      //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                           //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
@property (readonly) NSSet * interestingMomentNodes;                                  //@synthesize interestingMomentNodes=_interestingMomentNodes - In the implementation block
@property (retain) NSArray * interestingAssetLocalIdentifiersInSuperset;              //@synthesize interestingAssetLocalIdentifiersInSuperset=_interestingAssetLocalIdentifiersInSuperset - In the implementation block
@property (retain) NSArray * assetLocalIdentifiersInSuperset;                         //@synthesize assetLocalIdentifiersInSuperset=_assetLocalIdentifiersInSuperset - In the implementation block
@property (retain) NSSet * supersetLocationNodes;                                     //@synthesize supersetLocationNodes=_supersetLocationNodes - In the implementation block
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
-(id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4 ;
-(NSSet *)interestingMomentNodes;
-(NSArray *)interestingAssetLocalIdentifiersInSuperset;
-(void)setInterestingAssetLocalIdentifiersInSuperset:(NSArray *)arg1 ;
-(NSArray *)assetLocalIdentifiersInSuperset;
-(void)setAssetLocalIdentifiersInSuperset:(NSArray *)arg1 ;
-(NSSet *)supersetLocationNodes;
-(void)setSupersetLocationNodes:(NSSet *)arg1 ;
@end
