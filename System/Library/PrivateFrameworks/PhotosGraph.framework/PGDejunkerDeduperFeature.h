/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying> {

	BOOL _isVideo;
	NSSet* _personLocalIdentifiers;
	NSSet* _peopleScenes;

}

@property (readonly) BOOL hasPersons; 
@property (readonly) BOOL hasPeopleScenes; 
@property (readonly) BOOL isVideo;                                //@synthesize isVideo=_isVideo - In the implementation block
@property (readonly) NSSet * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (readonly) NSSet * peopleScenes;                        //@synthesize peopleScenes=_peopleScenes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)personLocalIdentifiers;
-(unsigned long long)hash;
-(BOOL)isVideo;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersonLocalIdentifiers:(id)arg1 peopleScenes:(id)arg2 isVideo:(BOOL)arg3 ;
-(long long)identicalSimilarity;
-(BOOL)hasPersons;
-(BOOL)hasPeopleScenes;
-(NSSet *)peopleScenes;
@end
