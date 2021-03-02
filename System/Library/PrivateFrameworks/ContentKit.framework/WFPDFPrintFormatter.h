/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPrintFormatter, WFPDFDocument;

@interface WFPDFPrintFormatter : NSObject <NSCopying> {

	UIPrintFormatter* _printFormatter;
	WFPDFDocument* _document;

}

@property (nonatomic,readonly) WFPDFDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) UIPrintFormatter * printFormatter;              //@synthesize printFormatter=_printFormatter - In the implementation block
-(WFPDFDocument *)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIPrintFormatter *)printFormatter;
-(id)initWithFileRepresentation:(id)arg1 ;
-(id)initWithPDFDocument:(id)arg1 ;
@end
