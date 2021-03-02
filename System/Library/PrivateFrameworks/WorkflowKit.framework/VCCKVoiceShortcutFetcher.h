/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDatabase;

@interface VCCKVoiceShortcutFetcher : NSObject {

	BOOL _completed;
	NSObject*<OS_dispatch_queue> _queue;
	CKDatabase* _database;
	long long _qualityOfService;
	/*^block*/id _recordHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                      //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id recordHandler;                           //@synthesize recordHandler=_recordHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL completed;                                    //@synthesize completed=_completed - In the implementation block
-(void)addOperation:(id)arg1 ;
-(CKDatabase *)database;
-(void)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)completionHandler;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(void)start;
-(long long)qualityOfService;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithRecordHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecordZones;
-(void)fetchRecordsFromZone:(id)arg1 ;
-(id)recordHandler;
@end
