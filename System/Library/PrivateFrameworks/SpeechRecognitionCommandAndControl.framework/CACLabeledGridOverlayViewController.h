/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@class CACLabeledGridOverlayView;

@interface CACLabeledGridOverlayViewController : UIViewController <CACViewController> {

	BOOL _showsElementsAsClickable;
	CACLabeledGridOverlayView* _gridOverlayView;

}

@property (nonatomic,retain) CACLabeledGridOverlayView * gridOverlayView;              //@synthesize gridOverlayView=_gridOverlayView - In the implementation block
@property (assign,nonatomic) BOOL showsNumbersInTopLeft; 
@property (nonatomic,readonly) BOOL isSmallEnoughForZooming; 
@property (assign,nonatomic) BOOL showsElementsAsClickable;                            //@synthesize showsElementsAsClickable=_showsElementsAsClickable - In the implementation block
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(void)show;
-(long long)zOrder;
-(BOOL)isOverlay;
-(void)hide;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)setShowsNumbersInTopLeft:(BOOL)arg1 ;
-(void)setShowsElementsAsClickable:(BOOL)arg1 ;
-(void)setLabeledElements:(id)arg1 ;
-(CACLabeledGridOverlayView *)gridOverlayView;
-(BOOL)showsNumbersInTopLeft;
-(BOOL)isSmallEnoughForZooming;
-(BOOL)showsElementsAsClickable;
-(void)zoomOverRegion:(CGRect)arg1 ;
-(void)setGridOverlayView:(CACLabeledGridOverlayView *)arg1 ;
@end

