/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBufferAdapter.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>
#import <libobjc.A.dylib/NUMutableBufferProvider.h>

@class NUPixelFormat, NSString;

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider> {

	void* _mutableBytes;

}

@property (nonatomic,readonly) void* mutableBytes; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)mutableBytes;
-(void)provideMutableBuffer:(/*^block*/id)arg1 ;
-(void*)mutableBytesAtPoint:(SCD_Struct_NU7)arg1 ;
-(id)newRenderDestination;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4 ;
-(id)initWithMutableBuffer:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void*)arg4 ;
@end

