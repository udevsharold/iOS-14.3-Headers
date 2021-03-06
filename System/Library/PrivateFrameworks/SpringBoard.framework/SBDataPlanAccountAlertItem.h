/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDataPlanAlertItem.h>
#import <libobjc.A.dylib/SBDataPlanAlertActions.h>

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions> {

	NSURL* _accountURL;

}

@property (nonatomic,copy) NSURL * accountURL;              //@synthesize accountURL=_accountURL - In the implementation block
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)notNow;
-(id)initWithAccountURL:(id)arg1 ;
-(void)setAccountURL:(NSURL *)arg1 ;
-(void)takeAction;
-(NSURL *)accountURL;
@end

