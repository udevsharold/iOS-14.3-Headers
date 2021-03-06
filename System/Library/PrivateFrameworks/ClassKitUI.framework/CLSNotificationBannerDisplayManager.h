/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject {

	NSDate* _lastBannerTime;

}

@property (nonatomic,retain) NSDate * lastBannerTime;              //@synthesize lastBannerTime=_lastBannerTime - In the implementation block
+(id)shared;
-(void)showPrivacyModalViewWithInfo:(id)arg1 ;
-(void)showBannerWithTitle:(id)arg1 message:(id)arg2 ;
-(NSDate *)lastBannerTime;
-(void)setLastBannerTime:(NSDate *)arg1 ;
@end

