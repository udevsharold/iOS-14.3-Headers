/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIAutoScrollBehavior;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIScrollView, CADisplayLink;

@interface _UIAutoScrollAssistant : NSObject {

	BOOL _started;
	UIScrollView* _scrollView;
	long long _mode;
	unsigned long long _allowedDirections;
	CADisplayLink* _displayLink;
	double _lastTimestamp;
	id<_UIAutoScrollBehavior> _behavior;
	CGPoint _point;
	CGPoint _referenceContentOffsetForPoint;
	UIEdgeInsets _touchInsets;

}

@property (nonatomic,retain) CADisplayLink * displayLink;                         //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                     //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) CGPoint referenceContentOffsetForPoint;              //@synthesize referenceContentOffsetForPoint=_referenceContentOffsetForPoint - In the implementation block
@property (assign,nonatomic) double lastTimestamp;                                //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (assign,nonatomic) BOOL started;                                        //@synthesize started=_started - In the implementation block
@property (nonatomic,retain) id<_UIAutoScrollBehavior> behavior;                  //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView;                  //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long mode;                                      //@synthesize mode=_mode - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (assign,nonatomic) UIEdgeInsets touchInsets;                            //@synthesize touchInsets=_touchInsets - In the implementation block
@property (assign,nonatomic) unsigned long long allowedDirections;                //@synthesize allowedDirections=_allowedDirections - In the implementation block
-(BOOL)started;
-(void)setBehavior:(id<_UIAutoScrollBehavior>)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id<_UIAutoScrollBehavior>)behavior;
-(void)setLastTimestamp:(double)arg1 ;
-(long long)mode;
-(unsigned long long)allowedDirections;
-(void)setReferenceContentOffsetForPoint:(CGPoint)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)autoScrollFromPoint:(CGPoint)arg1 ;
-(CADisplayLink *)displayLink;
-(double)lastTimestamp;
-(void)setPoint:(CGPoint)arg1 forContentOffset:(CGPoint)arg2 ;
-(void)setAllowedDirections:(unsigned long long)arg1 ;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)touchInsets;
-(BOOL)_scrollContinuous;
-(CGPoint)referenceContentOffsetForPoint;
-(id)initWithScrollView:(id)arg1 ;
-(BOOL)isActive;
-(CGPoint)point;
-(void)_adjustPointToCurrentContentOffset;
-(void)stop;
-(void)_handleAutoScrollerWithContentOffset:(CGPoint)arg1 direction:(unsigned long long)arg2 ;
@end

