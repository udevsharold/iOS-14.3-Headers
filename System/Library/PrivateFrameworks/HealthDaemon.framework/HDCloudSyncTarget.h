/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainer, HDCloudSyncZone, HDCloudSyncStoreRecord, HDCloudSyncStore;

@interface HDCloudSyncTarget : NSObject <NSCopying> {

	long long _purpose;
	CKContainer* _container;
	HDCloudSyncZone* _zone;
	HDCloudSyncStoreRecord* _storeRecord;
	HDCloudSyncStore* _store;
	unsigned long long _options;

}

@property (nonatomic,readonly) long long purpose;                                 //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                           //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) HDCloudSyncZone * zone;                            //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) HDCloudSyncStoreRecord * storeRecord;              //@synthesize storeRecord=_storeRecord - In the implementation block
@property (nonatomic,readonly) HDCloudSyncStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
-(HDCloudSyncZone *)zone;
-(HDCloudSyncStore *)store;
-(CKContainer *)container;
-(long long)purpose;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)options;
-(id)initWithPurpose:(long long)arg1 container:(id)arg2 zone:(id)arg3 storeRecord:(id)arg4 store:(id)arg5 options:(unsigned long long)arg6 ;
-(HDCloudSyncStoreRecord *)storeRecord;
-(id)targetByAddingOptions:(unsigned long long)arg1 ;
@end

