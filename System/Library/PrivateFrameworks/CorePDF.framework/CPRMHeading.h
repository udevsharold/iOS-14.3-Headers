/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMHeading : NSObject {

	CGPDFNodeRef _node;
	CGPDFPageRef _page;
	SCD_Struct_CP17 _textRange;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) SCD_Struct_CP17 textRange;              //@synthesize textRange=_textRange - In the implementation block
-(CGPDFPageRef)page;
-(void)setTextRange:(SCD_Struct_CP17)arg1 ;
-(CGRect)bounds;
-(SCD_Struct_CP17)textRange;
-(id)initWithNode:(CGPDFNodeRef)arg1 onPage:(CGPDFPageRef)arg2 ;
@end

