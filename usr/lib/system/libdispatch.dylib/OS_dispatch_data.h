/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/libdispatch.dylib-Structs.h>
#import <Foundation/_NSDispatchData.h>
#import <libobjc.A.dylib/OS_dispatch_data.h>

@protocol OS_dispatch_data <OS_dispatch_object>
@end


@class NSString;

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_resume;
-(BOOL)_bytesAreVM;
-(void)_activate;
-(void*)_getContext;
-(unsigned long long)length;
-(void)_setTargetQueue:(id)arg1 ;
-(id)init;
-(void)_suspend;
-(void)_setContext:(void*)arg1 ;
-(void)dealloc;
-(const void*)bytes;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_isCompact;
-(void)_setFinalizer:(/*function pointer*/void*)arg1 ;
-(NSString *)debugDescription;
@end

