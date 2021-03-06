/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>

@class BBDataProviderIdentity, NSString;

@interface BBDataProvider : NSObject <BBSectionIdentity> {

	BBDataProviderIdentity* _identity;

}

@property (retain) BBDataProviderIdentity * identity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sectionIdentifier;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(id)parentSectionIdentifier;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)startWatchdog;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BBDataProviderIdentity *)identity;
-(id)sortDescriptors;
-(NSString *)description;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)defaultSubsectionInfos;
-(BOOL)initialized;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sectionIcon;
-(BOOL)canClearBulletinsByDate;
-(BOOL)canClearAllBulletins;
-(NSString *)debugDescription;
-(id)sectionDisplayName;
-(BOOL)syncsBulletinDismissal;
-(id)sortKey;
-(void)dataProviderDidLoad;
-(id)universalSectionIdentifier;
-(BOOL)canPerformMigration;
-(id)sectionParameters;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
@end

