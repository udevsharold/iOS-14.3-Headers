/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PKDrawingAdjustmentKnob;

@interface PKSpaceInsertionView : UIView {

	CGPathRef _lassoPath;
	CGPoint _handleLocation;
	double _scale;
	PKDrawingAdjustmentKnob* _knobHandle;
	BOOL _isDragging;
	unsigned long long _insertionType;

}

@property (assign,nonatomic) unsigned long long insertionType;              //@synthesize insertionType=_insertionType - In the implementation block
@property (assign,nonatomic) BOOL isDragging;                               //@synthesize isDragging=_isDragging - In the implementation block
-(void)setInsertionType:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)insertionType;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isDragging;
-(void)layoutSubviews;
-(void)setIsDragging:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 insertionType:(unsigned long long)arg2 path:(CGPathRef)arg3 handleLocation:(CGPoint)arg4 scale:(double)arg5 ;
@end
