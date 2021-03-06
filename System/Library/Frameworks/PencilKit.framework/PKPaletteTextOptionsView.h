/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PKPaletteTextOptionsView : UIView {

	UIButton* _textButton;
	UIButton* _signatureButton;

}

@property (nonatomic,readonly) UIButton * textButton;                   //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,readonly) UIButton * signatureButton;              //@synthesize signatureButton=_signatureButton - In the implementation block
-(UIButton *)textButton;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)signatureButton;
@end

