/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementWifiGroup : _UIStatusBarDisplayItemPlacementGroup {

	_UIStatusBarDisplayItemPlacement* _signalStrengthPlacement;
	_UIStatusBarDisplayItemPlacement* _iconPlacement;
	_UIStatusBarDisplayItemPlacement* _rawPlacement;

}

@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * signalStrengthPlacement;              //@synthesize signalStrengthPlacement=_signalStrengthPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * iconPlacement;                        //@synthesize iconPlacement=_iconPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * rawPlacement;                         //@synthesize rawPlacement=_rawPlacement - In the implementation block
-(void)setSignalStrengthPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)iconPlacement;
-(_UIStatusBarDisplayItemPlacement *)signalStrengthPlacement;
-(void)setIconPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setRawPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)rawPlacement;
@end
