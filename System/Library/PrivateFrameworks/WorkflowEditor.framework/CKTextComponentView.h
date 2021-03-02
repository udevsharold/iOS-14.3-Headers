/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIControl.h>

@class CKTextComponentViewControlTracker, CKTextComponentLayer, CKTextKitRenderer;

@interface CKTextComponentView : UIControl {

	CKTextComponentViewControlTracker* _controlTracker;

}

@property (nonatomic,readonly) CKTextComponentLayer * textLayer; 
@property (nonatomic,readonly) CKTextComponentViewControlTracker * controlTracker; 
@property (nonatomic,retain) CKTextKitRenderer * renderer; 
+(Class)layerClass;
-(void)setBackgroundColor:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CKTextKitRenderer *)renderer;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(id)accessibilityAttributedLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(CKTextComponentLayer *)textLayer;
-(CKTextComponentViewControlTracker *)controlTracker;
@end
