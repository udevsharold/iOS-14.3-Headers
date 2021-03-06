/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject {

	HDSimpleGraphDatabase* _database;
	long long _rowID;

}

@property (nonatomic,__weak,readonly) HDSimpleGraphDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long rowID;                                      //@synthesize rowID=_rowID - In the implementation block
-(HDSimpleGraphDatabase *)database;
-(id)init;
-(unsigned long long)hash;
-(long long)rowID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 ;
@end

