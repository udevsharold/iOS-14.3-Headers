/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInteractionContext.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext> {

	BOOL _ended;
	double _progress;
	double _maximumProgress;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double maximumProgress;                //@synthesize maximumProgress=_maximumProgress - In the implementation block
@property (assign,nonatomic) BOOL ended;                            //@synthesize ended=_ended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ended;
-(void)setEnded:(BOOL)arg1 ;
-(double)maximumProgress;
-(void)setMaximumProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)progress;
@end

