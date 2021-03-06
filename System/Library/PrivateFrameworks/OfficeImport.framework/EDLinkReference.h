/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDLinkReference : NSObject {

	unsigned long long mLinkIndex;
	unsigned long long mFirstSheetIndex;
	unsigned long long mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)firstSheetIndex;
-(unsigned long long)lastSheetIndex;
-(unsigned long long)linkIndex;
-(id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(BOOL)isEqualToLinkReference:(id)arg1 ;
-(void)setFirstSheetIndex:(unsigned long long)arg1 ;
-(void)setLastSheetIndex:(unsigned long long)arg1 ;
-(void)setLinkIndex:(unsigned long long)arg1 ;
-(BOOL)isWorkbookLevelReference;
@end

