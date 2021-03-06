/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EMUserProfileProvider.h>
@class NSSet;


@protocol EMUserProfileProvider <NSObject>
@property (copy,readonly) NSSet * allEmailAddresses; 
@property (copy,readonly) NSSet * accountsEmailAddresses; 
@property (copy,readonly) NSSet * contactEmailAddresses; 
@required
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg1;
-(id)contact;
-(NSSet *)contactEmailAddresses;
-(id)contactWithKeysToFetch:(id)arg1;
-(NSSet *)allEmailAddresses;
-(NSSet *)accountsEmailAddresses;

@end


@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSDictionary, NSMutableArray, CNContactStore, NSString;

@interface EMUserProfileProvider : NSObject <EMUserProfileProvider> {

	os_unfair_lock_s _cacheLock;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	int _outstandingCacheRefreshes;
	NSDictionary* _cache;
	NSMutableArray* _knownToBeMyEmail;
	NSMutableArray* _knownToNotBeMyEmail;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) NSDictionary * cache;                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownToBeMyEmail;                 //@synthesize knownToBeMyEmail=_knownToBeMyEmail - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownToNotBeMyEmail;              //@synthesize knownToNotBeMyEmail=_knownToNotBeMyEmail - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (copy,readonly) NSSet * allEmailAddresses; 
@property (copy,readonly) NSSet * accountsEmailAddresses; 
@property (copy,readonly) NSSet * contactEmailAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)doesAddressList:(id)arg1 containAddressInSet:(id)arg2 ;
-(NSDictionary *)cache;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg1 ;
-(void)setCache:(NSDictionary *)arg1 ;
-(id)init;
-(void)_accountsChanged:(id)arg1 ;
-(id)contact;
-(CNContactStore *)contactStore;
-(void)_contactsChanged:(id)arg1 ;
-(NSSet *)contactEmailAddresses;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(id)_contactEmailAddresses;
-(void)refreshCachedValues;
-(BOOL)_isMyEmailAddressContainedInAddressStrings:(id)arg1 ;
-(NSSet *)allEmailAddresses;
-(NSMutableArray *)knownToBeMyEmail;
-(NSMutableArray *)knownToNotBeMyEmail;
-(id)_accountsEmailAddresses;
-(NSSet *)accountsEmailAddresses;
-(void)waitForOutstandingCacheRefreshes;
@end

