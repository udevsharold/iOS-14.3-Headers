/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTPdfTagger <TSKPdfTagger>
@required
-(void)beginTableChunk:(id)arg1;
-(void)endTableChunk:(id)arg1;
-(void)beginTableNameForChunk:(id)arg1;
-(void)endTableNameForChunk:(id)arg1;
-(void)beginTableLayoutSpace:(id)arg1;
-(void)endTableLayoutSpace:(id)arg1;
-(void)beginTableRow:(unsigned)arg1;
-(void)endTableRow:(unsigned)arg1;
-(void)beginTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(BOOL)arg3 cellIsPrimary:(BOOL)arg4;
-(void)endTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(BOOL)arg3 cellIsPrimary:(BOOL)arg4;
-(void)beginCheckboxCell:(BOOL)arg1;
-(void)endCheckboxCell;
-(void)beginRatingCell:(double)arg1;
-(void)endRatingCell;

@end

