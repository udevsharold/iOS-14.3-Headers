/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@class NSDictionary, NSURL, NSMutableData;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {

	NSDictionary* _documentInfo;
	NSURL* _outputURL;
	NSMutableData* _pdfData;

}

@property (retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSMutableData * pdfData;                          //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,copy) NSDictionary * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
-(void)setDocumentInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPdfData:(NSMutableData *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(NSDictionary *)documentInfo;
-(NSMutableData *)pdfData;
@end

