/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFCameraAdjustmentsSerialization : NSObject
+(id)deserializedAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)deserializeDictionary:(id)arg1 toFilters:(id*)arg2 portraitMetadata:(id*)arg3 error:(id*)arg4 ;
+(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
+(id)serializedAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id*)arg3 ;
+(id)_errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

