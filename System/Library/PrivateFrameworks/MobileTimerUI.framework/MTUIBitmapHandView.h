/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface MTUIBitmapHandView : UIView {

	NSArray* _partViews;
	NSArray* _partViewsMaintainingOrientation;

}
+(id)partInfoWithName:(id)arg1 offset:(CGPoint)arg2 maintainsOrientation:(BOOL)arg3 ;
+(id)partInfoWithName:(id)arg1 ;
-(id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(CGPoint)arg4 ;
-(id)initWithImage:(id)arg1 rotationalCenter:(CGPoint)arg2 ;
@end

