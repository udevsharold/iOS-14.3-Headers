/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EDPivotDataField : NSObject {

	long long mBaseField;
	unsigned long long mBaseItem;
	unsigned long long mFieldId;
	unsigned long long mNumFmtId;
	NSString* mName;
	int mFormat;

}
+(id)pivotDataField;
-(void)setName:(id)arg1 ;
-(id)init;
-(unsigned long long)fieldId;
-(id)description;
-(id)name;
-(unsigned long long)baseItem;
-(void)setFieldId:(unsigned long long)arg1 ;
-(void)setBaseItem:(unsigned long long)arg1 ;
-(unsigned long long)numFmtId;
-(void)setNumFmtId:(unsigned long long)arg1 ;
-(long long)baseField;
-(void)setBaseField:(long long)arg1 ;
-(int)showDataAs;
-(void)setShowDataAs:(int)arg1 ;
@end
