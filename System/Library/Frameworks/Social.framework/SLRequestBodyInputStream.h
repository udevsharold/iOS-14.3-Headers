/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate;
@class NSArray, SLRequestMultiPartInputStream;

@interface SLRequestBodyInputStream : NSInputStream {

	NSArray* _inputStreams;
	SLRequestMultiPartInputStream* _currentStream;
	unsigned long long _dataLength;
	unsigned long long _dataOffset;
	unsigned long long _currentIndex;
	unsigned long long _currentOffset;
	unsigned long long _currentLength;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_SL10* _clientContext;
	SLRequestBodyInputStream* _selfReferenceDuringStreamEventTrigger;
	id<NSStreamDelegate> _delegate;

}

@property (__weak) id<NSStreamDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long totalBytes; 
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_SL10*)arg3 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)totalBytes;
-(void)dealloc;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)bytesRead;
-(unsigned long long)streamStatus;
-(void)setDelegate:(id<NSStreamDelegate>)arg1 ;
-(void)close;
-(void)open;
-(BOOL)hasBytesAvailable;
-(id<NSStreamDelegate>)delegate;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithMultiParts:(id)arg1 multiPartBoundary:(id)arg2 ;
-(void)_scheduleCallback;
-(id)nextStream;
-(void)_streamEventTrigger;
@end

