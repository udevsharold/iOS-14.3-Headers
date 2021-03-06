/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CNContactsEnvironment, CoreTelephonyClient, TUCallProviderManager, NSObject, NSMapTable, NSString;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {

	CNContactsEnvironment* _environment;
	CoreTelephonyClient* _coreTelephonyClient;
	TUCallProviderManager* _callProviderManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegateToQueue;
	unsigned long long _dataSourceExclusions;

}

@property (assign,nonatomic) unsigned long long dataSourceExclusions;              //@synthesize dataSourceExclusions=_dataSourceExclusions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)badgeForText:(id)arg1 ;
+(id)badgeForSubscription:(id)arg1 ;
+(id)badgeForSenderIdentity:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(BOOL)deviceSupportsGemini;
+(id)channelStringFromSenderIdentity:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)subscriptionInfoDidChange;
-(void)removeDelegate:(id)arg1 ;
-(id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
-(id)geminiResultForContact:(id)arg1 error:(id*)arg2 ;
-(id)channelForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(id)badgeLabelForSenderIdentity:(id)arg1 error:(id*)arg2 ;
-(id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)fetchedSenderIdentitiesWithError:(id*)arg1 ;
-(id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
-(void)setDataSourceExclusions:(unsigned long long)arg1 ;
-(id)initWithCallProviderManager:(id)arg1 ;
-(id)channelForContact:(id)arg1 error:(id*)arg2 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2 ;
-(id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)dataSourceExclusions;
-(void)danglingPlansDidUpdate:(id)arg1 ;
-(id)bestSubscriptionForContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)badgeLabelForSubscription:(id)arg1 error:(id*)arg2 ;
-(id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)bestSenderIdentityForContact:(id)arg1 error:(id*)arg2 ;
-(id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3 ;
-(id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
-(id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
@end

