/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, AMSBag;

@interface IMURLBag : NSObject <AMSBagProtocol> {

	AMSBag* _bag;

}

@property (nonatomic,retain) AMSBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerBagKeys:(id)arg1 ;
+(void)_registerBagKeysIfNeeded;
-(id)arrayForKey:(id)arg1 ;
-(NSString *)profileVersion;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(id)mescalSignedActions;
-(id)dictionaryForKey:(id)arg1 ;
-(id)metricsDictionary;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(id)personalizedLookupURL;
-(AMSBag *)bag;
-(id)mescalSignSapRequests;
-(id)unpersonalizedLookupURL;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setBag:(AMSBag *)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)trustedDomains;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(id)metricsURL;
-(id)mescalSignSapResponses;
-(id)mescalSetupURL;
-(id)mescalCertificateURL;
-(id)reportAConcernURL;
-(void)reportAConcernURLWithCompletion:(/*^block*/id)arg1 ;
-(id)podcastsMediaAPIHostUrl;
-(id)mediaTaskCountryCode;
-(id)tokenServiceUrl;
@end
