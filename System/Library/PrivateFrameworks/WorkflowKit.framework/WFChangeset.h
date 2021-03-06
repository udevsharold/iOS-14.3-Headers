/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSOrderedSet, NSSet;

@interface WFChangeset : NSObject <NSCopying> {

	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSOrderedSet* _insertedObjects;
	NSSet* _movedIndexes;

}

@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes;                 //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes;                //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSSet * movedIndexes;                        //@synthesize movedIndexes=_movedIndexes - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)changesetFromStart:(id)arg1 toEnd:(id)arg2 ;
-(BOOL)isEmpty;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(id)description;
-(NSIndexSet *)deletedIndexes;
-(NSSet *)movedIndexes;
-(NSOrderedSet *)insertedObjects;
-(id)endResultByApplyingToStart:(id)arg1 ;
-(id)changesetByMergingChangeset:(id)arg1 ;
-(id)initWithDeletedIndexes:(id)arg1 insertedIndexes:(id)arg2 insertedObjects:(id)arg3 movedIndexes:(id)arg4 ;
@end

