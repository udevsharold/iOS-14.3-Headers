/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABBlip : NSObject
+(id)readBlipFromEshBlip:(EshBlip*)arg1 ;
+(id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
+(void)setMetafileBoundsFromPictData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(id)compressMetafileData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(void)writeEmptyBlipStoreEntry:(EshBSE*)arg1 ;
+(EshBlip*)writeBlip:(id)arg1 ;
+(id)readBlipFromBse:(id)arg1 ;
+(void)writeBlip:(id)arg1 toBlipStoreEntry:(EshBSE*)arg2 ;
+(int)blipTypeForBlipSignature:(int)arg1 ;
+(id)dibFileContentsWithDibBlipData:(const OcBinaryData*)arg1 ;
+(id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
@end
