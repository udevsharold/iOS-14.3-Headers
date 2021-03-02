/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
-(unsigned long long)pageNumber;
-(id)url;
-(BOOL)recognizeGestures;
-(BOOL)shouldRecognizeTapOrPress:(CGPoint)arg1 ;
-(id)newBaseURL;
-(unsigned long long)getDestination:(CGPDFDictionaryRef)arg1 ;
-(unsigned long long)getNamedDestination:(CGPDFDictionaryRef)arg1 ;
-(BOOL)quadPoints:(CGPDFArrayRef)arg1 within:(CGRect)arg2 ;
-(CGRect)linkRectangle;
@end
