/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUReadChannel.h>

@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {

	NSObject*<OS_dispatch_data> _dispatchData;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isValid;
-(void)_close;
-(void)close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithNSData:(id)arg1 ;
-(id)initWithDispatchData:(id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(void)readFromOffsetAndWait:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
@end
