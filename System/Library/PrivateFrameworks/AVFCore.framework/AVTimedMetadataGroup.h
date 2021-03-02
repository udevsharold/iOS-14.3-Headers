/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (getter=_timedMetadataGroupInternal,nonatomic,readonly) AVTimedMetadataGroupInternal * timedMetadataGroupInternal; 
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(SCD_Struct_AV7)timeRange;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSArray *)items;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(const opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)_timedMetadataGroupInternal;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
