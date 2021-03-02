/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSArray, UIWindowScene, UIScene, NSString;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding> {

	BOOL _homeIndicatorAutoHidden;
	unsigned long long _screenEdgesDeferringSystemGestures;
	long long _userInterfaceStyle;
	long long _whitePointAdaptivityStyle;
	NSArray* _multitaskingDragExclusionRects;
	UIWindowScene* _windowScene;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,readonly) BOOL homeIndicatorAutoHidden;                                       //@synthesize homeIndicatorAutoHidden=_homeIndicatorAutoHidden - In the implementation block
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures;              //@synthesize screenEdgesDeferringSystemGestures=_screenEdgesDeferringSystemGestures - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                                       //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) NSArray * multitaskingDragExclusionRects;                           //@synthesize multitaskingDragExclusionRects=_multitaskingDragExclusionRects - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(UIWindowScene *)windowScene;
-(void)_setScene:(id)arg1 ;
-(void)updateUserInterfaceStyle;
-(void)updateHomeIndicatorAutoHidden;
-(long long)userInterfaceStyle;
-(void)updateScreenEdgesDeferringSystemGestures;
-(long long)whitePointAdaptivityStyle;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(NSArray *)multitaskingDragExclusionRects;
-(void)updateMultitaskingDragExclusionRects;
-(void)updateWhitePointAdaptivityStyle;
-(BOOL)homeIndicatorAutoHidden;
-(id)initWithScene:(id)arg1 ;
@end
