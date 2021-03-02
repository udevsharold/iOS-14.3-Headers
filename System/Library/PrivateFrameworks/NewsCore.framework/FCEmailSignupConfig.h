/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCEmailSignupConfig : NSObject {

	unsigned long long _emailSignupStyle;
	NSString* _landingPageArticleID;
	NSString* _alertTitle;
	NSString* _alertEmailAvailableMessage;
	NSString* _alertEmailUnavailableMessage;
	NSString* _alertAcceptActionTitle;
	NSString* _alertDeclineActionTitle;

}

@property (assign,nonatomic) unsigned long long emailSignupStyle;                //@synthesize emailSignupStyle=_emailSignupStyle - In the implementation block
@property (nonatomic,copy) NSString * landingPageArticleID;                      //@synthesize landingPageArticleID=_landingPageArticleID - In the implementation block
@property (nonatomic,copy) NSString * alertTitle;                                //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * alertEmailAvailableMessage;                //@synthesize alertEmailAvailableMessage=_alertEmailAvailableMessage - In the implementation block
@property (nonatomic,copy) NSString * alertEmailUnavailableMessage;              //@synthesize alertEmailUnavailableMessage=_alertEmailUnavailableMessage - In the implementation block
@property (nonatomic,copy) NSString * alertAcceptActionTitle;                    //@synthesize alertAcceptActionTitle=_alertAcceptActionTitle - In the implementation block
@property (nonatomic,copy) NSString * alertDeclineActionTitle;                   //@synthesize alertDeclineActionTitle=_alertDeclineActionTitle - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSString *)landingPageArticleID;
-(void)setLandingPageArticleID:(NSString *)arg1 ;
-(NSString *)alertTitle;
-(unsigned long long)emailSignupStyle;
-(void)setEmailSignupStyle:(unsigned long long)arg1 ;
-(NSString *)alertEmailAvailableMessage;
-(void)setAlertEmailAvailableMessage:(NSString *)arg1 ;
-(NSString *)alertEmailUnavailableMessage;
-(void)setAlertEmailUnavailableMessage:(NSString *)arg1 ;
-(NSString *)alertAcceptActionTitle;
-(void)setAlertAcceptActionTitle:(NSString *)arg1 ;
-(NSString *)alertDeclineActionTitle;
-(void)setAlertDeclineActionTitle:(NSString *)arg1 ;
-(void)setAlertTitle:(NSString *)arg1 ;
@end
