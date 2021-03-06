/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPackage;

@interface UITutorialAnimatedView : UIView {

	CALayer* _packageLayer;
	long long _appearance;
	CAPackage* _package;

}

@property (assign,nonatomic) long long appearance;              //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) CAPackage * package;               //@synthesize package=_package - In the implementation block
-(CAPackage *)package;
-(long long)appearance;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(void)setPackage:(CAPackage *)arg1 ;
-(void)setAppearance:(long long)arg1 ;
-(void)_setPackage:(id)arg1 ;
@end

