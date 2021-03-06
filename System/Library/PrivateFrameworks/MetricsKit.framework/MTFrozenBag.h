/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, NSDictionary;

@interface MTFrozenBag : NSObject <AMSBagProtocol> {

	NSString* _profile;
	NSString* _profileVersion;
	NSDictionary* _config;

}

@property (nonatomic,copy) NSString * profile;                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * profileVersion;                          //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * config;                              //@synthesize config=_config - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProfile:(NSString *)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)profileVersion;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)profile;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)boolForKey:(id)arg1 ;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)config;
-(id)initWithProfile:(id)arg1 profileVersion:(id)arg2 config:(id)arg3 ;
@end

