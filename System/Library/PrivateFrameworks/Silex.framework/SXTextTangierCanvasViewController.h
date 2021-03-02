/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPiOSCanvasViewController.h>

@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController {

	BOOL _selectionEnabled;

}

@property (assign,nonatomic) BOOL selectionEnabled;              //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)selectAll:(id)arg1 ;
-(BOOL)selectionEnabled;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)interactionDidEnd:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(long long)overrideUserInterfaceStyle;
-(void)loadView;
-(id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3 ;
-(BOOL)interactionShouldBegin:(id)arg1 atPoint:(CGPoint)arg2 ;
@end
