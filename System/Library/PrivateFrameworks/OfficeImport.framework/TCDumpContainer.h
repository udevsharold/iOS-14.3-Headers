/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpContainer : TCDumpType {

	int mByteSize;
	int mByteSizeFieldType;
	NSString* mByteSizeFieldName;
	int mByteSizeCorrection;
	TCDumpType* mElementType;

}
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithByteSize:(int)arg1 byteSizeFieldType:(int)arg2 byteSizeFieldName:(id)arg3 byteSizeCorrection:(int)arg4 elementType:(id)arg5 ;
-(id)initWithByteSize:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldType:(int)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
-(id)initWithByteSizeFieldName:(id)arg1 elementType:(id)arg2 ;
-(id)initWithByteSizeFieldName:(id)arg1 byteSizeCorrection:(int)arg2 elementType:(id)arg3 ;
@end

