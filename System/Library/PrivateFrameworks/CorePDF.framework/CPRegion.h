/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	BOOL isTextRegion;
	BOOL isImageRegion;
	BOOL isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(void)setOrder:(int)arg1 ;
-(void)setLink:(id)arg1 ;
-(BOOL)isRotated;
-(int)order;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)link;
-(BOOL)isTextRegion;
-(BOOL)isZone;
-(void)accept:(id)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(BOOL)isTableCellRegion;
-(BOOL)isBodyZone;
-(BOOL)isCompoundShape;
-(void)setIsCompoundShape:(BOOL)arg1 ;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
@end
