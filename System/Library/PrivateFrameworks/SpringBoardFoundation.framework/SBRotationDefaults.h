/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) long long lastLockedOrientation; 
@property (getter=isVideoRotationEnabled,nonatomic,readonly) BOOL videoRotationEnabled; 
-(void)setVideoRotationEnabled:(BOOL)arg1 ;
-(BOOL)isVideoRotationEnabled;
-(void)setLastLockedOrientation:(long long)arg1 ;
-(long long)lastLockedOrientation;
-(void)_bindAndRegisterDefaults;
@end
