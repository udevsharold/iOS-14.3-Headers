/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDisplayInfoProviding.h>

@class FBSDisplayConfiguration, NSString;

@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding> {

	FBSDisplayConfiguration* displayConfiguration;
	unsigned long long artworkSubtype;
	double homeAffordanceOverlayAllowance;
	double systemMinimumMargin;
	UIEdgeInsets peripheryInsets;
	UIEdgeInsets safeAreaInsetsPortrait;
	UIEdgeInsets safeAreaInsetsLandscapeLeft;
	UIEdgeInsets safeAreaInsetsLandscapeRight;
	UIEdgeInsets safeAreaInsetsPortraitUpsideDown;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)peripheryInsets;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(FBSDisplayConfiguration *)displayConfiguration;
-(unsigned long long)artworkSubtype;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
@end

