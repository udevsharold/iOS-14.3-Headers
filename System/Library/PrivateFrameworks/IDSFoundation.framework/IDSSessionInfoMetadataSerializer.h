/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSSessionInfoMetadataSerializer : NSObject
+(void)_writeArrayToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readArrayFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readDictionaryFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)deserializeSessionInfoMetadata:(id)arg1 ;
+(id)serializeSessionInfoMetadata:(id)arg1 ;
+(void)_writeStringToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeNumberToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
@end
