/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPLayoutArea, NSArray, CPList;

@interface CPListMaker : NSObject <CPDisposable> {

	CPLayoutArea* area;
	NSArray* spacers;
	unsigned textLineCount;
	id* textLines;
	CPList* list;

}
+(void)makeListsInPage:(id)arg1 ;
+(void)makeListsInLayoutArea:(id)arg1 ;
+(void)makeListsInChunk:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(void)fetchTextLine:(id)arg1 ;
-(void)makeListItemFrom:(CPListInfo*)arg1 stopAt:(unsigned)arg2 ;
-(BOOL)makeListFrom:(CPListInfo*)arg1 ;
-(void)fetchTextLinesInColumn:(id)arg1 ;
-(void)makeListsInColumn:(id)arg1 ;
-(id)initWithLayoutArea:(id)arg1 ;
-(void)makeLists;
@end

