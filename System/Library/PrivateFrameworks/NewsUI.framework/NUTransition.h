/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CATransition.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface NUTransition : CATransition <CAAnimationDelegate> {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animation;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end
