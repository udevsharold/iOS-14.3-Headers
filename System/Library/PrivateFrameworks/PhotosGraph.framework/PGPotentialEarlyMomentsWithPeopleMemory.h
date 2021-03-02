/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSSet, NSArray;

@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {

	NSSet* _personNodes;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * personNodes;                             //@synthesize personNodes=_personNodes - In the implementation block
@property (nonatomic,retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
-(NSSet *)personNodes;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 ;
@end
