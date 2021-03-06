/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString;

@interface VUIDocumentUIConfiguration : NSObject {

	BOOL _supportsInAppBanner;
	BOOL _animated;
	BOOL _navigationBarHidden;
	BOOL _navigationBarAdjustedToSizeClass;
	BOOL _isInteractivePopGestureAllowed;
	long long _type;
	NSString* _viewControllerIdentifier;
	NSString* _viewControllerDocumentIdentifier;

}

@property (assign,nonatomic) long long type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * viewControllerIdentifier;                                                            //@synthesize viewControllerIdentifier=_viewControllerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewControllerDocumentIdentifier;                                                    //@synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsInAppBanner;                                                                     //@synthesize supportsInAppBanner=_supportsInAppBanner - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                                              //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) BOOL navigationBarHidden;                                        //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,getter=isNavigationBarAdjustedToSizeClass,nonatomic) BOOL navigationBarAdjustedToSizeClass;              //@synthesize navigationBarAdjustedToSizeClass=_navigationBarAdjustedToSizeClass - In the implementation block
@property (assign,getter=isInteractivePopGestureAllowed,nonatomic) BOOL isInteractivePopGestureAllowed;                    //@synthesize isInteractivePopGestureAllowed=_isInteractivePopGestureAllowed - In the implementation block
+(id)uiConfigurationWithDict:(id)arg1 ;
+(long long)_presentationTypeFromString:(id)arg1 ;
+(CGSize)_preferredSizeFromConfig:(id)arg1 ;
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(BOOL)isNavigationBarHidden;
-(NSString *)viewControllerIdentifier;
-(BOOL)isNavigationBarAdjustedToSizeClass;
-(BOOL)isInteractivePopGestureAllowed;
-(NSString *)viewControllerDocumentIdentifier;
-(void)setViewControllerIdentifier:(NSString *)arg1 ;
-(void)setViewControllerDocumentIdentifier:(NSString *)arg1 ;
-(void)setNavigationBarAdjustedToSizeClass:(BOOL)arg1 ;
-(void)setIsInteractivePopGestureAllowed:(BOOL)arg1 ;
-(void)setSupportsInAppBanner:(BOOL)arg1 ;
-(BOOL)supportsInAppBanner;
@end

