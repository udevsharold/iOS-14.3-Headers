/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {

	NSTimer* _timer;
	NSDate* _earliest;

}
-(void)didTimeOut:(id)arg1 ;
-(void)main;
-(void)addAssertion:(id)arg1 ;
@end

