/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBUIEmergencyCallHostInterface.h>

@class _UIBackdropView, UIColor;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface> {

	_UIBackdropView* _blurView;
	UIColor* _tintColor;
	long long _backgroundStyle;
	double _blurRadius;
	BOOL _blursSelf;

}

@property (assign,nonatomic) long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                    //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double blurRadius;                      //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) BOOL blursSelf;                         //@synthesize blursSelf=_blursSelf - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestEmergencyCallControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)blurRadius;
-(long long)backgroundStyle;
-(BOOL)blursSelf;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(void)setBlursSelf:(BOOL)arg1 ;
-(void)_createAndAddBlurViewIfNecessary;
-(UIColor *)tintColor;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismiss;
@end

