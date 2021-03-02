/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@protocol BKHIDEventProcessor;
@class NSArray, NSString;

@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDEventProcessor> {

	NSArray* _subProcessors[40];
	id<BKHIDEventProcessor> _defaultProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(id)initWithSubProcessors:(id)arg1 defaultProcessor:(id)arg2 ;
-(id)_eventProcessorsForEventType:(unsigned)arg1 ;
@end
