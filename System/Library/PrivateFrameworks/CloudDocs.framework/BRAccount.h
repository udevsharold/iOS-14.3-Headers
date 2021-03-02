/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface BRAccount : NSObject {

	NSString* _accountID;
	NSData* _perAppAccountIdentifier;

}

@property (nonatomic,copy) NSData * perAppAccountIdentifier;              //@synthesize perAppAccountIdentifier=_perAppAccountIdentifier - In the implementation block
+(BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)refreshCurrentLoggedInAccount;
+(id)currentLoggedInAccountWithError:(id*)arg1 ;
+(void)startAccountTokenChangeObserverIfNeeded;
+(id)currentCachedLoggedInAccountWithError:(id*)arg1 ;
-(NSData *)perAppAccountIdentifier;
-(void)setPerAppAccountIdentifier:(NSData *)arg1 ;
-(BOOL)loginWithError:(id*)arg1 ;
-(BOOL)logoutWithError:(id*)arg1 ;
-(id)containerWithPendingChanges;
-(BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)getEvictableSpace:(id*)arg1 error:(id*)arg2 ;
-(BOOL)hasOptimizeStorageWithError:(id*)arg1 ;
-(BOOL)setOptimizeStorageEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)evictOldDocumentsWithHandler:(/*^block*/id)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
@end
