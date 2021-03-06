/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, FCEmailSignupConfig;

@interface FCChannelUpsellConfig : NSObject {

	NSString* _channelID;
	NSDictionary* _triggersByMethod;
	long long _quiescenceInterval;
	long long _engagedUserQuiescenceInterval;
	FCEmailSignupConfig* _emailSignupConfiguration;

}

@property (nonatomic,copy) NSString * channelID;                                          //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,retain) NSDictionary * triggersByMethod;                             //@synthesize triggersByMethod=_triggersByMethod - In the implementation block
@property (assign,nonatomic) long long quiescenceInterval;                                //@synthesize quiescenceInterval=_quiescenceInterval - In the implementation block
@property (assign,nonatomic) long long engagedUserQuiescenceInterval;                     //@synthesize engagedUserQuiescenceInterval=_engagedUserQuiescenceInterval - In the implementation block
@property (nonatomic,retain) FCEmailSignupConfig * emailSignupConfiguration;              //@synthesize emailSignupConfiguration=_emailSignupConfiguration - In the implementation block
-(NSString *)channelID;
-(NSDictionary *)triggersByMethod;
-(void)setTriggersByMethod:(NSDictionary *)arg1 ;
-(long long)quiescenceInterval;
-(void)setQuiescenceInterval:(long long)arg1 ;
-(long long)engagedUserQuiescenceInterval;
-(void)setEngagedUserQuiescenceInterval:(long long)arg1 ;
-(FCEmailSignupConfig *)emailSignupConfiguration;
-(void)setEmailSignupConfiguration:(FCEmailSignupConfig *)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
-(id)initWithChannelID:(id)arg1 configDictionary:(id)arg2 ;
@end

