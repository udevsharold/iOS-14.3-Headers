/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABTextBodyProperties : NSObject
+(void)readTextBodyProperties:(id)arg1 textBox:(const EshTextBox*)arg2 useDefaults:(BOOL)arg3 state:(id)arg4 ;
+(void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setAutoFit:(BOOL)arg1 textBodyProperties:(id)arg2 ;
+(void)setWrap:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2 ;
+(void)writeTextBodyProperties:(id)arg1 toShapeBase:(EshShapeBase*)arg2 state:(id)arg3 ;
@end

