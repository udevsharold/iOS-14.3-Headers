/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CHVisualizationManagerDelegate.h>

@class CHVisualizationManager, NSString;

@interface PKRecognitionOverlayView : UIView <CHVisualizationManagerDelegate> {

	CHVisualizationManager* _visualizationManager;
	CGAffineTransform _drawingTransform;

}

@property (assign,nonatomic) CGAffineTransform drawingTransform;                           //@synthesize drawingTransform=_drawingTransform - In the implementation block
@property (nonatomic,readonly) CHVisualizationManager * visualizationManager;              //@synthesize visualizationManager=_visualizationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CHVisualizationManager *)visualizationManager;
-(CGAffineTransform)drawingTransform;
-(void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2 ;
-(void)visualizationManagerNeedsDisplay:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 visualizationManager:(id)arg2 ;
-(void)setDrawingTransform:(CGAffineTransform)arg1 ;
@end

