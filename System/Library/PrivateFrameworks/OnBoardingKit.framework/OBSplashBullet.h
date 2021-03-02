/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OBImage;

@interface OBSplashBullet : NSObject {

	NSString* _text;
	OBImage* _icon;

}

@property (copy) NSString * text;               //@synthesize text=_text - In the implementation block
@property (retain) OBImage * icon;              //@synthesize icon=_icon - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(OBImage *)icon;
-(void)setIcon:(OBImage *)arg1 ;
@end
