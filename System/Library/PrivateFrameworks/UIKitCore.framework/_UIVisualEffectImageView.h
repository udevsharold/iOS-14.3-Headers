/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIVisualEffectViewParticipatingInternal.h>

@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, NSString;

@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipatingInternal> {

	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	NSArray* _viewEffects;
	NSArray* _filters;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor; 
@property (assign,nonatomic) BOOL disableGroupFiltering; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                         //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)setViewEffects:(NSArray *)arg1 ;
-(NSArray *)viewEffects;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(void)setFilters:(NSArray *)arg1 ;
-(void)applyIdentityViewEffects;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setContainedView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(NSArray *)filters;
-(void)applyRequestedViewEffects;
-(void)applyIdentityFilterEffects;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(BOOL)disableGroupFiltering;
-(void)applyRequestedFilterEffects;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
@end
