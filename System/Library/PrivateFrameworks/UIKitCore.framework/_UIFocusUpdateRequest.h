/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusUpdateRequesting.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIFocusEnvironment;
@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator, NSString;

@interface _UIFocusUpdateRequest : NSObject <_UIFocusUpdateRequesting, NSCopying> {

	BOOL _allowsDeferral;
	BOOL _isFocusRemovalRequest;
	BOOL _shouldPlayFocusSound;
	BOOL _allowsFocusingCurrentItem;
	BOOL _allowsFocusRestoration;
	UIFocusAnimationCoordinator* _animationCoordinator;
	UIFocusSystem* _focusSystem;
	id<UIFocusEnvironment> _environment;

}

@property (nonatomic,readonly) BOOL isFocusRemovalRequest;                                    //@synthesize isFocusRemovalRequest=_isFocusRemovalRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayFocusSound;                                       //@synthesize shouldPlayFocusSound=_shouldPlayFocusSound - In the implementation block
@property (assign,nonatomic) BOOL allowsFocusingCurrentItem;                                  //@synthesize allowsFocusingCurrentItem=_allowsFocusingCurrentItem - In the implementation block
@property (assign,nonatomic) BOOL allowsFocusRestoration;                                     //@synthesize allowsFocusRestoration=_allowsFocusRestoration - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * animationCoordinator;              //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> environment;                     //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL allowsDeferral;                                             //@synthesize allowsDeferral=_allowsDeferral - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                            //@synthesize focusSystem=_focusSystem - In the implementation block
@property (getter=isMovementRequest,nonatomic,readonly) BOOL movementRequest; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForRemovingFocusInFocusSystem:(id)arg1 ;
-(UIFocusSystem *)focusSystem;
-(void)setShouldPlayFocusSound:(BOOL)arg1 ;
-(BOOL)allowsFocusRestoration;
-(void)setAllowsFocusingCurrentItem:(BOOL)arg1 ;
-(BOOL)requiresNextFocusedItem;
-(BOOL)canMergeWithRequest:(id)arg1 ;
-(BOOL)isMovementRequest;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)allowsDeferral;
-(void)setAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(id)initWithFocusSystem:(id)arg1 environment:(id)arg2 ;
-(BOOL)isValidInFocusSystem:(id)arg1 ;
-(void)setAllowsFocusRestoration:(BOOL)arg1 ;
-(BOOL)requiresEnvironmentValidation;
-(void)setAllowsDeferral:(BOOL)arg1 ;
-(BOOL)isFocusRemovalRequest;
-(void)cacheCurrentFocusSystem;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(id)initWithEnvironment:(id)arg1 ;
-(id<UIFocusEnvironment>)environment;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)requestByRedirectingRequestToEnvironment:(id)arg1 ;
-(id)requestByMergingWithRequest:(id)arg1 ;
@end

