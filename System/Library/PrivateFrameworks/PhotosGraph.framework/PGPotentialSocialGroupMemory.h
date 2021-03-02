/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphSocialGroupNode, NSArray, NSSet;

@interface PGPotentialSocialGroupMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphSocialGroupNode* _socialGroupNode;
	long long _year;
	NSArray* _facedAssetLocalIdentifiers;
	NSSet* _peopleUUIDs;

}

@property (readonly) PGGraphSocialGroupNode * socialGroupNode;              //@synthesize socialGroupNode=_socialGroupNode - In the implementation block
@property (readonly) long long year;                                        //@synthesize year=_year - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;                    //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                     //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
-(long long)year;
-(NSSet *)peopleUUIDs;
-(void)addMomentNode:(id)arg1 ;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(PGGraphSocialGroupNode *)socialGroupNode;
-(id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
@end
