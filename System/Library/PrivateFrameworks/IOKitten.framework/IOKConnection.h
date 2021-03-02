/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOKService;

@interface IOKConnection : NSObject {

	unsigned _connection;

}

@property (nonatomic,readonly) unsigned connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) IOKService * service; 
-(id)initWithService:(id)arg1 ;
-(BOOL)setNotificationPort:(id)arg1 ofType:(unsigned)arg2 withReference:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)callMethodWithSelector:(unsigned)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned)arg3 structInput:(const void*)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long*)arg6 scalarOutputCount:(unsigned*)arg7 structOutput:(void*)arg8 structOutputSize:(unsigned long long*)arg9 error:(id*)arg10 ;
-(void)dealloc;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 structInput:(const void*)arg5 structInputSize:(unsigned long long)arg6 structOutput:(void*)arg7 structOutputSize:(unsigned long long*)arg8 error:(id*)arg9 ;
-(IOKService *)service;
-(BOOL)setProperties:(id)arg1 error:(id*)arg2 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 error:(id*)arg6 ;
-(unsigned long long)hash;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithService:(id)arg1 andType:(unsigned)arg2 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 error:(id*)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)mapMemory64OfType:(unsigned)arg1 withOptions:(unsigned)arg2 atAddress:(unsigned long long*)arg3 ofSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)unmapMemory64OfType:(unsigned)arg1 atAddress:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)callMethodWithSelector:(unsigned)arg1 scalarInputs:(const unsigned long long*)arg2 scalarInputCount:(unsigned)arg3 scalarOutputs:(unsigned long long*)arg4 scalarOutputCount:(unsigned*)arg5 error:(id*)arg6 ;
-(BOOL)callMethodWithSelector:(unsigned)arg1 structInput:(const void*)arg2 structInputSize:(unsigned long long)arg3 structOutput:(void*)arg4 structOutputSize:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned)arg6 scalarOutputs:(unsigned long long*)arg7 scalarOutputCount:(unsigned*)arg8 error:(id*)arg9 ;
-(BOOL)trap:(unsigned)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 p6:(unsigned long long)arg7 error:(id*)arg8 ;
-(BOOL)trap:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)connection;
-(BOOL)callAsyncMethodWithSelector:(unsigned)arg1 wakePort:(unsigned)arg2 reference:(unsigned long long*)arg3 referenceCount:(unsigned)arg4 scalarInputs:(const unsigned long long*)arg5 scalarInputCount:(unsigned)arg6 structInput:(const void*)arg7 structInputSize:(unsigned long long)arg8 scalarOutputs:(unsigned long long*)arg9 scalarOutputCount:(unsigned*)arg10 structOutput:(void*)arg11 structOutputSize:(unsigned long long*)arg12 error:(id*)arg13 ;
@end
