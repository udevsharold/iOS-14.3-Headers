/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@required
-(void)setAttributes:(unsigned long long)arg1;
-(void)setDiscoverabilityTitle:(id)arg1;
-(UIImage *)image;
-(unsigned long long)attributes;
-(id)_leafKeyInput;
-(void)setImage:(id)arg1;
-(long long)state;
-(long long)_leafKeyModifierFlags;
-(BOOL)_isDefaultCommand;
-(void)_performWithTarget:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
-(NSString *)discoverabilityTitle;
-(id)_leafAlternates;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(BOOL)requiresAuthenticatedInput;
-(NSString *)title;
-(void)setState:(long long)arg1;

@end

