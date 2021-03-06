/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewSubviewMonitoring.h>

@protocol _UIVisualEffectViewParticipating;
@class NSMutableArray, UIView, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, NSArray, NSString;

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {

	NSMutableArray* _views;
	BOOL _autosetSubviewLabelTintColor;
	BOOL _contentViewRequired;
	UIView*<_UIVisualEffectViewParticipating> _contentView;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	_UIVisualEffectBackdropView* _captureView;
	_UIVisualEffectDescriptor* _currentEffectDescriptor;
	_UIVisualEffectDescriptor* _transitionEffectDescriptor;

}

@property (nonatomic,readonly) UIView*<_UIVisualEffectViewParticipating> contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL contentViewRequired;                                                   //@synthesize contentViewRequired=_contentViewRequired - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                                          //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;              //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (assign,nonatomic,__weak) _UIVisualEffectBackdropView * captureView;                           //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectDescriptor * currentEffectDescriptor;                        //@synthesize currentEffectDescriptor=_currentEffectDescriptor - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectDescriptor * transitionEffectDescriptor;                   //@synthesize transitionEffectDescriptor=_transitionEffectDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTransition;
-(NSArray *)views;
-(id)initWithContentView:(id)arg1 ;
-(void)_view:(id)arg1 willGainDescendent:(id)arg2 ;
-(void)_configureEffectDescriptor:(id)arg1 ;
-(void)_view:(id)arg1 willLoseDescendent:(id)arg2 ;
-(void)monitorSubviewsOf:(id)arg1 ;
-(void)_applyIdentityDescriptorEffectInvertingView:(id)arg1 ;
-(void)setContentViewRequired:(BOOL)arg1 ;
-(void)beginTransition;
-(void)_applyEffectDescriptor:(id)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4 ;
-(void)_updateAdjustTintColors;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(NSString *)description;
-(void)setCurrentEffectDescriptor:(_UIVisualEffectDescriptor *)arg1 ;
-(void)_evaluateInPlaceFiltering;
-(_UIVisualEffectDescriptor *)transitionEffectDescriptor;
-(void)_applyRequestedDescriptorEffectInvertingView:(id)arg1 ;
-(BOOL)contentViewRequired;
-(id)_cloneFilters:(id)arg1 ;
-(void)prepareToTransitionToEffectDescriptor:(id)arg1 ;
-(_UIVisualEffectBackdropView *)captureView;
-(void)_iterateViews:(/*^block*/id)arg1 ;
-(void)_updateView:(id)arg1 shouldDrawWithTintColor:(BOOL)arg2 ;
-(_UIVisualEffectDescriptor *)currentEffectDescriptor;
-(UIView*<_UIVisualEffectViewParticipating>)contentView;
-(void)_view:(id)arg1 willMoveToWindow:(id)arg2 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
@end

