/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>

@interface CPImage : CPGraphicObject {

	CPPDFImage* imageData;
	BOOL renderedBoundsComputed;

}
-(long long)zOrder;
-(CPPDFImage*)imageData;
-(CGRect)bounds;
-(BOOL)isVisible;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)accept:(id)arg1 ;
-(id)initWithPDFImage:(CPPDFImage*)arg1 ;
-(CGRect)renderedBounds;
-(void)recomputeRenderedBounds;
@end
