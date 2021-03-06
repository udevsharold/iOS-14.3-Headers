/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort {

	void* _port;
	id _delegate;

}
+(BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)_fixNSMessagePortLeak;
-(BOOL)setName:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)init;
-(BOOL)_isDeallocating;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(void)dealloc;
-(BOOL)_tryRetain;
-(unsigned long long)retainCount;
-(BOOL)isValid;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(id)retain;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(id)initWithRemoteName:(id)arg1 ;
-(oneway void)release;
-(id)name;
-(void)setDelegate:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
-(id)delegate;
@end

