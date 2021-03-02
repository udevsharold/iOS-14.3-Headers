/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject, NSUUID;

@interface PPFixup49995922Tuple : NSObject <NSCopying> {

	long long _rowid;
	NSObject* _record;
	NSUUID* _dkUUID;

}

@property (nonatomic,readonly) long long rowid;                //@synthesize rowid=_rowid - In the implementation block
@property (nonatomic,readonly) NSObject * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSUUID * dkUUID;                //@synthesize dkUUID=_dkUUID - In the implementation block
+(id)tupleWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3 ;
-(NSObject *)record;
-(id)init;
-(long long)rowid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)dkUUID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRowid:(long long)arg1 record:(id)arg2 dkUUID:(id)arg3 ;
-(BOOL)isEqualToTuple:(id)arg1 ;
@end
