/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape3D : NSObject
+(BOOL)isEmpty:(id)arg1 ;
+(id)bevelTypeEnumMap;
+(id)readBevelFromXmlNode:(xmlNode*)arg1 ;
+(id)materialEnumMap;
+(void)writeBevel:(id)arg1 to:(id)arg2 ;
+(id)readShape3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(void)writeShape3D:(id)arg1 to:(id)arg2 ;
+(void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2 ;
@end
