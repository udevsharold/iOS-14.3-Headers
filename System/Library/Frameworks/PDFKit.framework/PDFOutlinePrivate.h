/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSString, PDFAction, PDFOutline, NSMutableArray;

@interface PDFOutlinePrivate : NSObject {

	PDFDocument* document;
	NSString* title;
	PDFAction* action;
	PDFOutline* parent;
	NSMutableArray* children;
	BOOL childrenLoaded;
	CFDictionaryRef dictionary;
	BOOL open;
	CGPDFDictionaryRef srcDictionary;

}
@end
