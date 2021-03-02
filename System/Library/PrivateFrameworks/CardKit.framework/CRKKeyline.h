/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CRKKeyline : UIView {

	UIView* _keylineView;
	long long _type;
	long long _direction;
	unsigned long long _visualEffectStyle;

}

@property (readonly) long long type;                                    //@synthesize type=_type - In the implementation block
@property (readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long visualEffectStyle;              //@synthesize visualEffectStyle=_visualEffectStyle - In the implementation block
-(CGSize)intrinsicContentSize;
-(long long)direction;
-(long long)type;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3 ;
-(id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1 ;
-(double)_roundedKeylineThickness;
-(double)defaultKeylineInsetForCurrentDevice;
-(unsigned long long)visualEffectStyle;
@end
