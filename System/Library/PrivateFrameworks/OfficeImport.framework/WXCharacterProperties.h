/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXCharacterProperties : NSObject
+(id)underlineEnumMap;
+(BOOL)readBooleanCharacterProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(void)readShadowForTarget:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(id)ligaturesEnumMap;
+(id)highlightEnumMap;
+(id)verticalAlignEnumMap;
+(id)emphasisMarkEnumMap;
+(id)fontHintEnumMap;
+(BOOL)readBooleanCharacterMultipleProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(id)twoLineBracketsEnumMap;
+(id)readFillColor:(xmlNode*)arg1 forTarget:(id)arg2 state:(id)arg3 ;
+(BOOL)isBooleanCharacterPropertyTrue:(int)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2 ;
@end

