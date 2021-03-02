/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBagKeySet, NSArray, NSDictionary, NSDate, NSString, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject {

	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _profile;
	NSString* _profileVersion;
	AMSProcessInfo* _processInfo;

}

@property (nonatomic,retain) AMSBagKeySet * bagKeySet;                  //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,retain) NSArray * cookies;                         //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(AMSProcessInfo *)processInfo;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setBagKeySet:(AMSBagKeySet *)arg1 ;
-(NSDictionary *)data;
-(void)setProcessInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)profile;
-(void)setCookies:(NSArray *)arg1 ;
-(id)initWithFrozenDataSource:(id)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSArray *)cookies;
-(id)createFrozenDataSource;
-(AMSBagKeySet *)bagKeySet;
@end
