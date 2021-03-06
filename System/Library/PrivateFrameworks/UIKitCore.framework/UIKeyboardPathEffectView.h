/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBHandwritingQuadCurvePointFIFO, NSMutableArray, NSMutableIndexSet, CADisplayLink;

@interface UIKeyboardPathEffectView : UIView {

	BOOL _increasedContrastEnabled;
	BOOL _done;
	UIKBHandwritingQuadCurvePointFIFO* _pointInterpolator;
	double _startTime;
	NSMutableArray* _paths;
	NSMutableIndexSet* _pointDecayQueue;
	CADisplayLink* _pointDecayDisplayLink;

}

@property (nonatomic,retain) UIKBHandwritingQuadCurvePointFIFO * pointInterpolator;              //@synthesize pointInterpolator=_pointInterpolator - In the implementation block
@property (assign,nonatomic) double startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * paths;                                             //@synthesize paths=_paths - In the implementation block
@property (assign,nonatomic) BOOL increasedContrastEnabled;                                      //@synthesize increasedContrastEnabled=_increasedContrastEnabled - In the implementation block
@property (assign,nonatomic) BOOL done;                                                          //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * pointDecayQueue;                                //@synthesize pointDecayQueue=_pointDecayQueue - In the implementation block
@property (nonatomic,retain) CADisplayLink * pointDecayDisplayLink;                              //@synthesize pointDecayDisplayLink=_pointDecayDisplayLink - In the implementation block
-(void)_displayLinkFired:(id)arg1 ;
-(long long)keyboardAppearance;
-(void)reset;
-(NSMutableArray *)paths;
-(BOOL)done;
-(void)setPaths:(NSMutableArray *)arg1 ;
-(void)buildOut;
-(BOOL)increasedContrastEnabled;
-(void)setIncreasedContrastEnabled:(BOOL)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)_pushNewPath;
-(void)setPointInterpolator:(UIKBHandwritingQuadCurvePointFIFO *)arg1 ;
-(UIKBHandwritingQuadCurvePointFIFO *)pointInterpolator;
-(void)_addDrawingPoint:(CGPoint)arg1 force:(double)arg2 sentinel:(BOOL)arg3 ;
-(void)setPointDecayQueue:(NSMutableIndexSet *)arg1 ;
-(void)accessibilityValueChanged:(id)arg1 ;
-(CADisplayLink *)pointDecayDisplayLink;
-(void)setPointDecayDisplayLink:(CADisplayLink *)arg1 ;
-(void)_clearPointInterpolators;
-(UIEdgeInsets)_currentThemeSettings;
-(NSMutableIndexSet *)pointDecayQueue;
-(double)startTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(int)textEffectsVisibilityLevel;
-(void)addPoint:(CGPoint)arg1 force:(double)arg2 timestamp:(double)arg3 ;
-(void)setDone:(BOOL)arg1 ;
-(id)_currentPath;
@end

