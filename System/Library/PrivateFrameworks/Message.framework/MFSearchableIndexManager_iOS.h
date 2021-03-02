/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <EmailDaemon/EDSearchableIndexManager.h>
#import <libobjc.A.dylib/EDSearchableIndexReasonProvider.h>

@class NSSet, EDSearchableIndex, EDSearchableIndexPersistence, EDSearchableIndexScheduler, NSString;

@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager <EDSearchableIndexReasonProvider> {

	os_unfair_lock_s _indexLock;
	EDSearchableIndex* _index;
	EDSearchableIndexPersistence* _persistence;
	EDSearchableIndexScheduler* _scheduler;

}

@property (nonatomic,retain) EDSearchableIndex * index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) EDSearchableIndexPersistence * persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) EDSearchableIndexScheduler * scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dataSourceRefreshReasons; 
@property (nonatomic,copy,readonly) NSSet * purgeReasons; 
@property (nonatomic,copy,readonly) NSSet * exclusionReasons; 
@property (nonatomic,copy,readonly) NSSet * currentReasons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EDSearchableIndexPersistence *)persistence;
-(void)setIndex:(EDSearchableIndex *)arg1 ;
-(EDSearchableIndex *)index;
-(NSSet *)purgeReasons;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 ;
-(EDSearchableIndexScheduler *)scheduler;
-(NSSet *)dataSourceRefreshReasons;
-(id)initWithDatabase:(id)arg1 hookResponder:(id)arg2 ;
-(void)setPersistence:(EDSearchableIndexPersistence *)arg1 ;
-(void)setScheduler:(EDSearchableIndexScheduler *)arg1 ;
-(void)enableIndexingAndBeginScheduling:(BOOL)arg1 budgetConfiguration:(id)arg2 ;
-(NSSet *)exclusionReasons;
-(NSSet *)currentReasons;
@end
