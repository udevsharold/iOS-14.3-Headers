/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSUUID, NSMutableOrderedSet, NSMutableSet;

@interface HMBLocalZoneQueryResultRecursiveModelID : HMBLocalZoneQueryResultRecordColumns {

	int _parentModelIDOffset;
	NSUUID* _parentModelID;
	NSMutableOrderedSet* _modelStack;
	NSMutableSet* _returnedModels;

}

@property (nonatomic,readonly) int parentModelIDOffset;                       //@synthesize parentModelIDOffset=_parentModelIDOffset - In the implementation block
@property (nonatomic,retain) NSUUID * parentModelID;                          //@synthesize parentModelID=_parentModelID - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * modelStack;              //@synthesize modelStack=_modelStack - In the implementation block
@property (nonatomic,readonly) NSMutableSet * returnedModels;                 //@synthesize returnedModels=_returnedModels - In the implementation block
-(id)nextObject;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)parentModelIDOffset;
-(NSUUID *)parentModelID;
-(NSMutableOrderedSet *)modelStack;
-(void)setParentModelID:(NSUUID *)arg1 ;
-(NSMutableSet *)returnedModels;
-(id)initWithLocalZone:(id)arg1 modelID:(id)arg2 ;
@end
