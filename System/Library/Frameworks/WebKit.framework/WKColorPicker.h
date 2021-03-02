/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormControl.h>
#import <libobjc.A.dylib/WKColorMatrixViewDelegate.h>

@class WKContentView, WKColorPopover;

@interface WKColorPicker : NSObject <WKFormControl, WKColorMatrixViewDelegate> {

	WKContentView* _view;
	WKColorPopover* _popover;
	RetainPtr<UIView>* _colorPicker;
	RetainPtr<UIView>* _colorSelectionIndicator;
	RetainPtr<CAShapeLayer>* _colorSelectionIndicatorBorder;
	RetainPtr<WKColorMatrixView>* _topColorMatrix;
	RetainPtr<WKColorMatrixView>* _mainColorMatrix;
	WeakObjCPtr<WKColorButton> _selectedColorButton;
	RetainPtr<UIPanGestureRecognizer>* _colorPanGR;

}
+(id)defaultTopColorMatrix;
-(id)initWithView:(id)arg1 ;
-(id)initWithView:(id)arg1 inPopover:(id)arg2 ;
-(void)colorMatrixViewDidLayoutSubviews:(id)arg1 ;
-(void)colorMatrixView:(id)arg1 didTapColorButton:(id)arg2 ;
-(void)didPanColors:(id)arg1 ;
-(void)drawSelectionIndicatorForColorButton:(id)arg1 ;
-(void)setControlValueFromUIColor:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
@end
