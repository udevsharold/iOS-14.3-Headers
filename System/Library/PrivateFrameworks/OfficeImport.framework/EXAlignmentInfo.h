/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXAlignmentInfo : NSObject
+(int)edHorizontalAlignFromHorizontalAlignString:(id)arg1 ;
+(int)edVerticalAlignFromVerticalAlignString:(id)arg1 ;
+(id)horizontalAlignmentEnumMap;
+(id)verticalAlignmentEnumMap;
+(id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
