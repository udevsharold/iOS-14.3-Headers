/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class HMBLocalZone, NSDictionary;

@interface HMBLocalZoneQueryResult : HMBSQLQueryIterator {

	int _zoneRowBindOffset;
	HMBLocalZone* _localZone;
	unsigned long long _zoneRow;
	NSDictionary* _arguments;

}

@property (nonatomic,readonly) unsigned long long zoneRow;                   //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,readonly) int zoneRowBindOffset;                        //@synthesize zoneRowBindOffset=_zoneRowBindOffset - In the implementation block
@property (nonatomic,readonly) NSDictionary * arguments;                     //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
+(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 arguments:(id)arg2 zoneBindRowOffset:(int)arg3 zoneRow:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)zoneRow;
-(HMBLocalZone *)localZone;
-(NSDictionary *)arguments;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)zoneRowBindOffset;
-(id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 arguments:(id)arg4 maximumRowsPerSelect:(unsigned long long)arg5 ;
@end
