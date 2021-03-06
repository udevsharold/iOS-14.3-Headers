/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(void)setRowSpan:(int)arg1 ;
-(BOOL)merge:(int)arg1 ;
-(id)init;
-(void)setTopRow:(int)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)textBody;
-(int)rowSpan;
-(int)topRow;
-(id)description;
-(id)properties;
-(void)setTextBody:(id)arg1 ;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
@end

