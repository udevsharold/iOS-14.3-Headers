/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class PDFPage;

@interface PDFTextSelectionRect : UITextSelectionRect {

	PDFPage* _page;
	CGRect _rect;
	BOOL _isStartingRect;
	BOOL _isEndingRect;

}
-(BOOL)isVertical;
-(CGRect)rect;
-(BOOL)containsStart;
-(id)description;
-(BOOL)containsEnd;
-(long long)writingDirection;
-(id)initWithRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setIsStartingRect:(BOOL)arg1 ;
-(void)setIsEndingRect:(BOOL)arg1 ;
@end
