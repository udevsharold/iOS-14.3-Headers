/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class _UIBannerContent;

@interface UIBannerAction : BSAction

@property (nonatomic,readonly) _UIBannerContent * bannerContent; 
@property (nonatomic,readonly) BOOL tappable; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BOOL)tappable;
-(_UIBannerContent *)bannerContent;
-(BOOL)bannerTapped;
-(id)_initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithBannerContent:(id)arg1 ;
-(id)initWithBannerContent:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(long long)UIActionType;
@end

