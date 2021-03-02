/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListLayoutAnimating.h>

@class SBHIconEditingSettings, NSMutableDictionary, NSString;

@interface SBIconListViewClusterAnimator : NSObject <SBIconListLayoutAnimating> {

	SBHIconEditingSettings* _iconEditingSettings;
	NSMutableDictionary* _removalDirectionForIcons;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(SBIconListLayoutAnimationParameters)arg3 alongsideAnimationBlock:(/*^block*/id)arg4 ;
-(void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRemovalDirection:(unsigned long long)arg1 forIcon:(id)arg2 ;
@end
