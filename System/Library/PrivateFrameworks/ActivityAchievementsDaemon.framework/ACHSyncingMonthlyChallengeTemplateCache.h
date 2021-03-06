/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
@class HDDatabaseTransactionContext, HDProfile, NSCalendar, HDKeyValueDomain;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {

	os_unfair_lock_s _lock;
	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	NSCalendar* _gregorianCalendar;
	HDKeyValueDomain* _keyValueDomain;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSCalendar * gregorianCalendar;                              //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * keyValueDomain;                         //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseContext;              //@synthesize databaseContext=_databaseContext - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(HDProfile *)profile;
-(NSCalendar *)gregorianCalendar;
-(HDKeyValueDomain *)keyValueDomain;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)setKeyValueDomain:(HDKeyValueDomain *)arg1 ;
-(HDDatabaseTransactionContext *)databaseContext;
-(os_unfair_lock_s)lock;
-(BOOL)cacheTemplate:(id)arg1 error:(id*)arg2 ;
-(id)allCachedTemplatesWithError:(id*)arg1 ;
-(id)templateForDateComponents:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
@end

