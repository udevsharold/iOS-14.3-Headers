/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPDocumentAndData : NSObject {

	CGPDFDocumentRef _document;
	CFDataRef _sourceData;

}

@property (retain) CGPDFDocumentRef document;              //@synthesize document=_document - In the implementation block
@property (retain) CFDataRef sourceData;                   //@synthesize sourceData=_sourceData - In the implementation block
-(CGPDFDocumentRef)document;
-(void)dealloc;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(void)setSourceData:(CFDataRef)arg1 ;
-(CFDataRef)sourceData;
@end
