/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:19:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKAnimationRunner.h>

@class NSString;

@interface _AnimationManagerRunner : NSObject <VKAnimationRunner> {

	AnimationManager* _animationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidResume:(id)arg1 ;
-(void)animationDidStop:(id)arg1 ;
-(id)initWithAnimationManager:(AnimationManager*)arg1 ;
@end

