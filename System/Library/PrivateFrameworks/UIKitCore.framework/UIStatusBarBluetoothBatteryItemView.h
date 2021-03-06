/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _accessibilityCachedHUDCapacity;
	UIImage* _accessibilityCachedHUDImage;

}
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)_normalizedCapacity;
-(double)extraLeftPadding;
-(UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;
-(id)accessibilityHUDRepresentation;
@end

