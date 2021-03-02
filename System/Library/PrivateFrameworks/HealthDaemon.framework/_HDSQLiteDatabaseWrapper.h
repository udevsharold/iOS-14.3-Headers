/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class HDSQLiteDatabase, NSObject, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject {

	HDSQLiteDatabase* _database;
	NSObject*<OS_dispatch_group> _flushGroup;
	unsigned long long _generation;
	unsigned long long _threadID;
	unsigned long long _options;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> flushGroup;              //@synthesize flushGroup=_flushGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                        //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                          //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString; 
-(unsigned long long)generation;
-(HDSQLiteDatabase *)database;
-(NSString *)typeString;
-(NSObject*<OS_dispatch_group>)flushGroup;
-(id)initWithDatabase:(id)arg1 flushGroup:(id)arg2 generation:(unsigned long long)arg3 ;
-(void)captureThreadInfo;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)threadID;
-(unsigned long long)options;
@end
