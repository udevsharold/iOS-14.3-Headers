/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCGamepadEventSource.h>

@class _GCGamepadEventKeyboardEventAdapterConfig, NSArray, NSString;

@interface _GCGamepadEventKeyboardEventAdapter : NSObject <_GCGamepadEventSource> {

	id _observation;
	_GCGamepadEventKeyboardEventAdapterConfig* _config;
	NSArray* _observers;

}

@property (copy) NSArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)observers;
-(void)dealloc;
-(void)setObservers:(NSArray *)arg1 ;
-(id)observeGamepadEvents:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 source:(id)arg2 ;
@end
